#include <stdio.h>

int main() {
    int a=10;
    int *p=&a;
    (*p)+=40;
    printf("this is value of a=%d\n",a);
    return 0;
}
