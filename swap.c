#include<stdio.h>
int main()
{
    int temp,a,b;
    printf("enter a and b");
    scanf("%d%d",&a,&b);
    a=a+b-(b=a);
    printf("Value of A= %d\n",a);
    printf("Value of B= %d\n",b);
    return 0;
    
}