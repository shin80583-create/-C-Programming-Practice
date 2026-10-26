#include <stdio.h>

int main() {
     int x = 22;
     int *p=&x;
     printf("the value of x=%d\n",x);
      printf("the value of p=%d\n",*p);
      printf(" x address is a =%p\n",x);
    return 0;
}
