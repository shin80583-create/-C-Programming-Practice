#include<stdio.h>
int main(){
	int a=0;
	int b;
	int j;
do
{
	printf("enter the number:");
	scanf("%d",&b);
	while(a<=b){
		printf("%d\n",a);
		a=a+1;
	}
	printf("if you contiune entre the 1 and exit 0:");
	scanf("%d",&j);
}while(j==1);
printf("end");
		return 0;
}
