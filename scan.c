#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

char *xgetline(FILE *stream, size_t *out_len) {
    char *line_ptr;
    ssize_t r = getline(&line_ptr, out_len, stream);
    if (r == -1) {
        fprintf(stderr, "[ERROR] getline() failed: %s\n", strerror(errno));
        exit(-1);
    }
    return line_ptr;
}

void *xrealloc(void *ptr, size_t size) {
    void *n_ptr = realloc(ptr, size);
    if (!n_ptr) {
        fprintf(stderr, "[ERROR] alloc error");
    }
    return n_ptr;
}

struct proc_data {
    char *line_ptr;
    ssize_t line_len;
    ssize_t line_pos;
    unsigned long line_n;
    char *filename;
}

void init_proc_data(struct proc_data *data, char *filename) {
    data->line_ptr = 0;
    data->line_n = 1;
    data->filename = filename;
}

void remove_trigraphs(char *s, size_t *len) {
    size_t r_idx = 0;
    size_t w_idx = 0;
    while ((r_idx + 2) < *len) {
        if ((s[r_idx] == '?') && (s[r_idx+1] == '?')) {
            switch (s[r_idx+2]) {
#define RM_TRI(a, b) case a: s[w_idx++] = b; r_idx += 3; continue;
                RM_TRI('=', '#')
                RM_TRI('/', '\\')
                RM_TRI('\'', '^')
                RM_TRI('(', '[')
                RM_TRI(')', ']')
                RM_TRI('!', '|')
                RM_TRI('<', '{')
                RM_TRI('>', '}')
                RM_TRI('-', '~')
            }
        }
        s[w_idx++] = s[r_idx++];
    }
    while (r_idx < *len) s[w_idx++] = s[r_idx++];
}

char *xgetline_notrig(FILE *stream, size_t *out_len) {
    char *ptr = xgetline(stream, out_len);
    remove_trigraphs(ptr, out_len);
}

char *xgetline_noslash(FILE *stream, size_t *out_len) {
    size_t len;
    char *ptr = xgetline_notrig(stream, &len);
    while (1) {
        if ((len >= 2) && (ptr[len-2] == '\\') && (ptr[len-1] == '\n')) {
            size_t len_n;
            char *ptr_n = xgetline_notrig(stream, &len_n);
            ptr = xrealloc(ptr, len )
        } else {
            *out_len = len;
            return ptr;
        }
    }
}

void process(FILE *stream, struct proc_data *data) {
    if (!data->line_ptr) {
        data->line_ptr = xgetline(stream, &data->line_len);
        data->line_pos = 0;
    }
    size_t w_idx = 0;
    size_t r_idx = 0;
    while (r_idx < data->line_len) {
        if (((r_idx + 2) < data->line_len) && (data->line_ptr[r_idx] == '?') && (data->line_ptr[r_idx + 1] == '?')) {
            switch (data->line_ptr[r_idx + 2]) {
                case '='

int main(int argc, char **argv) {
