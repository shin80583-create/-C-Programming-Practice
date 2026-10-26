#include <stdio.h>
#include <string.h>
int marks;
int mark2;
int mark3;
char name[20];
int roll_no;
char check[20];
int total;
 int average;
void enterdateils();
void calulate();
void chackmark();
void studentdateils();
void enterdateils(){
printf("enter name:");
scanf("%19s",&name);
printf("enter the roll number:");
scanf("%d",&roll_no);
printf("enter the three subject marks\n");
printf("enter the marks maths:");
scanf("%d",&marks);
printf("enter the marks physic:");
scanf("%d",&mark2);
printf("enter the marks bioloyg:");
scanf("%d",&mark3);
}
void calulate(){
    total=marks+mark2+mark3;
    printf("total marks=%d\n",total);
    average=total/3;
    printf("this is average=%d\n",average);
}
void chackmark(){
    if(marks<35||mark2<35||mark3<35){
        printf("fail\n");
        strcpy(check,"fail");
    }
    else{
        printf("pass\n");
         strcpy(check,"pass");
    }
}
void studentdateils(){
    printf("name of the student=%s\n",name);
    printf("this is roll number=%d\n",roll_no);
    printf("this is total marks=%d\n",total);
    printf("this is average marks=%d\n",average);
     printf(" all subject %s\n",check);
}
int main(){
   printf("=========STUDETS MANAGAMANT SYSTEM=========\n");
    printf("1.select 1.add studets\n");
    printf("2.select 2.calulate totals and average\n");
    printf("3.select 3.check pass or fali\n");
    printf("4.select 4.student dateils\n");
    printf("if you want answer enter the one by one\n");
    int a;
    int b;
    do
    {
   
printf("Enter the option: ");
scanf("%d", &a);

switch (a)
{
    case 1:
        enterdateils();
      printf("2.select 2.calulate totals and average\n");
        break;
    case 2:
        calulate();
        printf("3.select 3.check pass or fali\n");
        break;

    case 3:
        chackmark();
         printf("4.select 4.student dateils\n");
        break;
    case 4:
        studentdateils();
        break;
    default:
        printf("Wrong list number please agin try enter number 1 \n");
        
}
printf("if you want contiune enter the 1 or enter the 0:");
scanf("%d",&b);
    }while(b==1);
    printf("end bye see you\n");
    return 0;
}
