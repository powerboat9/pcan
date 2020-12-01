#include <stdlib.h>
#include <stdio.h>
#include "tokens.h"
#include "token_taker.h"

int main(int argc, char **argv) {
    FILE *fd = fopen("test.c", "r");
    struct token_data out;
    while (!take_token(fd, &out)) {
        printf("[%s]\n", get_token_name(out.tk_id));
    }
}
