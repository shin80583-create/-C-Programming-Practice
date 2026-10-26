#include <stdio.h>
void number(int *a,int *b,int *c,int *d,int *e);
void number(int *a,int *b,int *c,int *d,int *e){
if(*a<=*b && *a<=*c && *a<=*d && *a<=*e)
{
    printf("smallest=%d\n",*a);
}
else if (*b<=*a && *b<=*c && *b<=*d && *b<=*e)
{
    printf("smallest=%d\n",*b);
}
else if (*c<=*a && *c<=*b && *c<=*d && *c<=*e)
{
    printf("smallest=%d\n",*c);
}
else if (*d<=*a && *d<=*b && *d<=*c && *d<=*e)
{
    printf("smallest=%d\n",*d);
}
else if (*e<=*a && *e<=*b && *e<=*c && *e<=*d)
{
    printf("smallest=%d\n",*e);
}
}
int main() {
    int a,b,c,d,e;
    printf("enter the number\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    number(&a,&b,&c,&d,&e);
    return 0;
}
