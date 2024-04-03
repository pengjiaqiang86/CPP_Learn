#include <stdio.h>
#include <stdlib.h>


void ds01malloc_1()
{

    int i = 5;

    printf("%d\n", sizeof(i)); // 4

    int* p = (int*)malloc(4);

    p = &i;
    *p = 10;

    printf("%d\n", i); // 10

    free(p);

    printf("%d\n", i); // 看不到打印的结果
}

int main() {

    ds01malloc_1();

    system("pause");

    return 0;
}