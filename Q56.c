#include <stdio.h>
void number(int *x,int *y,int *z);
void number(int *x,int *y,int *z){
    int t=*x;
    *x=*z;
    *z=*y;
    *y=t;
    printf("after swapping\n");
    printf("x=%d && y=%d && z=%d\n",*x,*y,*z);
}

int main() {
    int a=10;
    int b=20;
    int c=30;
    printf("befour swapping\n");
    printf("a=%d && b=%d && c=%d\n",a,b,c);
    number(&a,&b,&c);
    return 0;
}
