#include<stdio.h>
#include<math.h>
int main(){
    int r,n,sum=0,tem;
    printf("enter a number :");
    scanf("%d",&n);
    tem=n;
    while(n>0)
    {
    	r=n%10;
    	sum=sum+(r*r*r);
    	n=n/10;
    }
    if(tem==sum)
	{
    printf("%d is a armstrong number",tem);
    }
    else
    {
    printf("%d is not a armsrong number",tem);
    }
    return 0;
}
