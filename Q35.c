#include<stdio.h>
int main(){
	int a;
	int n;
	int sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(a=2;a<=n;a=a+2){
		printf("%d\n",a);
		    sum=sum+a;
		}
		  printf("total=%d",sum);
		  return 0;
}
