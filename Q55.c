#include <stdio.h>
void number(int *x,int *y);
void number(int *x,int *y){
int t=*x;
*x=*y;
*y=t;
printf("after swaping\n");
printf("number x=%d && number y=%d\n",*x,*y);
}
int main(){
    int a;
    int b;
    printf("entre the number:");
    scanf("%d",&a);
     printf("entre the number:");
    scanf("%d",&b);
    printf("befour swaping\n");
    printf("number a=%d && number b=%d\n",a,b);
    number(&a,&b);
    return 0;
}
