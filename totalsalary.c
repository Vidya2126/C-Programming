#include<stdio.h>
int main()
{
    int id;
    char name[100];
    float bs,da,hra,tax,totalsalary,inhand;
    printf("enter employees details\n");
    printf("ID : ");
    scanf("%d",&id);
    printf("Name : ");
    scanf("%s",&name);
    printf("Basic salary : ");
    scanf("%f",&bs);
    printf("\n da(%%)");
    scanf("%f",&da);
    printf("hra(%%)");
    scanf("%f",&hra);

    if(bs>=200000)
        tax=20;
    else if(bs>=150000)
        tax=15;
    else if(bs>=100000)
        tax=10;
    else if(bs>=80000)
        tax=5;
    else if (bs>=50000)
        tax=3;
    else 
        tax=0;

totalsalary = bs+((bs*(da+hra-tax)/100));
inhand=totalsalary;

printf("\n ID : %d",id);
printf("\n Name :%S ",name);
printf("\n Basic salary :%f ",bs);
printf("\n da (%%) :%f ",da);
printf("\n HRA(%%) : %f",hra);
printf("\n TAX(%%) :%f",tax);
printf("\n total salary : %f",totalsalary);
printf("\n In hand : %f",inhand);
return 0;

}