#include <stdio.h>

int main() {
    int a=10;
    int b=20;
    int *p=&a;
    int *q=&b;
   (*p)+=10;
   (*q)-=10;
    printf("a=%d\n",a);
     printf("b=%d\n",b);
    return 0;
}
