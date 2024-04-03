#include <stdio.h>

int main02() {

    int a = 0;
    for (int i = 1; i <= 65536; ++i) a += i;
    printf("%d\n", a);
    if (a >= 0) puts("Oh no!");
    return 0;

}
