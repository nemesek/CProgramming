#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != '$') {
        ++nc;
        printf("line 14\n");
        if (c == '\n') {
            ++nl;
            printf("Line 17\n");
        }

        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            printf("Line 22\n");
        }
        else if (state == OUT) {
            state = IN;
            ++nw;
            printf("Line 27\n");
        }
    }
    printf("%d %d %d\n", nl, nw, nc);

    return 0;
}
