#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

void die(char *s) {
    fprintf(stderr, "[ERROR] %s\n", s);
    exit(-1);
}

// handles trigraphs
void process_trig(char *s, ssize_t *len) {
    size_t r_pos = 0;
    size_t w_pos = 0;
    while (1) {
        if ((s[r_pos] == '?') && (s[r_pos+1] == '?')) {
            char sub;
            redo:
            switch (s[r_pos+2]) {
                case '=': sub = '#'; goto do_sub;
                case '/': sub = '\\'; goto do_sub;
                case '\'': sub = '^'; goto do_sub;
                case '(': sub = '['; goto do_sub;
                case ')': sub = ']'; goto do_sub;
                case '!': sub = '|'; goto do_sub;
                case '<': sub = '{'; goto do_sub;
                case '>': sub = '}'; goto do_sub;
                case '-': sub = '~'; goto do_sub;
                case '?':
                    s[w_pos++] = '?';
                    r_pos++;
                    goto redo;
                case '\0':
                    s[w_pos] = '?';
                    s[w_pos+1] = '?';
                    s[w_pos+2] = '\0';
                    *len = (ssize_t) (w_pos + 3);
                    return;
                default:
                    s[w_pos] = '?';
                    s[w_pos+1] = '?';
                    s[w_pos+2] = s[r_pos+2];
                    w_pos += 3;
                    r_pos += 3;
                    continue;
            }
            do_sub:
            s[w_pos++] = sub;
            r_pos += 3;
        } else {
            if (!(s[w_pos++] = s[r_pos++])) {
                *len = (ssize_t) w_pos;
                return;
            }
        }
    }
}

ssize_t xgetline(char **s, FILE *stream) {
    **s = NULL;
    size_t n = 0;
    return getline(s, &n, stream);
}

// joins lines
ssize_t get_c_line(FILE *stream, char **out) {
    char *line = NULL;
    ssize_t len;
    // take first line
    if ((len = xgetline(&line, stream)) == -1) {
        if (ferror(stream)) die("failed to getline()");
        return -1;
    }
    process_trig(line, &len);
    // take next lines
    while ((len >= 2) && (line[len-2] == '\\') && (line[len-1] == '\n')) {
        char *n_line = NULL;
        ssize_t n_len;
        if ((n_len = xgetline(&n_line, stream)) == -1) {
            if (ferror(stream)) die("failed to getline()");
            free(n_line);
            break;
        }
        process_trig(n_line, &n_len);
        line = realloc(line, len + n_len - 1);
        memcpy(line + len - 2, n_line, n_len + 1);
        free(n_line);
        len += n_len;
    }
    *out = line;
    return len;
}

int main(int argc, char **argv) {
    char *line;
    while (get_c_line(stdout, &line) != -1) {
        printf("%s", line);
    }
    return 0;
}
