#include <stdio.h>
void number(int *a,int *b,int *c,int *d,int *e);
void number(int *a,int *b,int *c,int *d,int *e){
    int t=*a;
    *a=*e;
    *e=t;
    t=*b;
    *b=*d;
    *d=t;
    printf("after swapping\n");
    printf("a=%d b=%d c=%d d=%d e=%d\n",*a,*b,*c,*d,*e);

}
int main() {
    int a,b,c,d,e;
    printf("enter the 5 numbers\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    printf("befour swapping\n");
    printf("a=%d b=%d c=%d d=%d e=%d\n",a,b,c,d,e);
    number(&a,&b,&c,&d,&e);
    return 0;
}
