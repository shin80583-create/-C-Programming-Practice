#include <stdio.h>

int main() {
    int a=10;
    int *p=&a;
     printf("bfore=%d\n",*p);
     (*p)+=15;
     printf("after=%d\n",*p);
    return 0;
}
