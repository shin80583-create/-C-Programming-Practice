#include <stdio.h>
void square(int *a,int *b,int *c,int *d,int *e);
void square(int *a,int *b,int *c,int *d,int *e){
   *a=(*a)*(*a);
   *b=(*b)*(*b);
   *c=(*c)*(*c);
   *d=(*d)*(*d);
   *e=(*e)*(*e);
}
int main() {
    int a,b,c,d,e;
    printf("enter the five number \n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    printf("befour square\n");
    printf("a=%d b=%d c=%d d=%d e=%d\n",a,b,c,d,e);
    square(&a,&b,&c,&d,&e);
    printf("after square\n");
     printf("a=%d b=%d c=%d d=%d e=%d\n",a,b,c,d,e);
    return 0;
}