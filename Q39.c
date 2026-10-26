#include<stdio.h>
int add(int a,int b);
int add(int a,int b){
    return a+b;}
int main(){
    int a;
    int b;
    printf("enter the first number=");
    scanf("%d",&a);
    printf("enter the second number=");
    scanf("%d",&b);
    printf("%d\n",add(a,b));
    return 0;
}
