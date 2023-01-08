#include<stdio.h>
int main() 
{
    int a,pal=0,num,x,y;
    printf("Enter a number for checking palindrome: ");
	scanf("%d",&a);
    num=a;           
    while(num!=0){               
        x=num%10;                
        pal=pal*10+x;
        num/=10;
    }
    if(pal==a)
	{       
        printf("%d is a palindrome",a);
    }
    else
	{
        printf("%d is not a palindrome",a);
    } 
    return 0;
}
