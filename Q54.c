#include <stdio.h>
void number(int a,int b);
void number(int a,int b){
    int t=a;
    a=b;
    b=t;
    printf("after\n");
 printf("number a=%d && number b=%d\n",a,b);
}
int main() {
    int x;
    int y;
    printf("enter the number:");
    scanf("%d",&x);
    printf("enter the number:");
    scanf("%d",&y);
    printf("befour\n");
    printf("number x=%d && number y=%d\n",x,y);
    number(x,y);
    return 0;
}
