#include<stdio.h>
int number(int a,int b);
int number(int a,int b){
    if(a>b){
        printf("lagest=");
        return a;
    }
    else{
        printf("lagest=");
        return b;
    }
}
int main(){
    int v;
    int c;
    printf("enter the first number=");
     scanf("%d",&v);
    printf("enter the second number=");
    scanf("%d",&c);
    printf("%d\n",number(v,c));
     return 0;
}
