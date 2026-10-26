#include<stdio.h>
int evenodd(int a);
int evenodd(int a){
    if(2%a==0){
        printf("even number\n");
        return  a;
    }else{
        printf("odd number\n");
    }
}
int main(){
    int a;
    printf("enter for even or odd numbers=");
    scanf("%d",&a);
    printf("%d",evenodd(a));
    return 0;
}
