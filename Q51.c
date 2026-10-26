#include <stdio.h>

int main() {
    int a=5;
    int *p=&a;
    int*q=&a;
    (*p)+=10;
    (*q)*=2;
    printf("final answer=%d\n",a);
    return 0;
}
