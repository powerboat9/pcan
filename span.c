#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

struct span {
    uint64_t line_range[2];
    char *filename;
    char *data;
    size_t data_len;
}

void init_span(char *data)
