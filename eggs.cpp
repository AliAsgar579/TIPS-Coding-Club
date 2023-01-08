#include<stdio.h>
int main()
{
    int g,s,a,b,gold,silver;
    printf("Enter how many coins per gram of gold: ");
    scanf("%d",&g);
    printf("Enter how many coins per gram of silver: ");
    scanf("%d",&s);
    printf("Enter how many grams of gold: ");
    scanf("%d",&a);
    printf("Enter how many grams of silver: ");
    scanf("%d",&b);

    gold=g*a;
    silver=s*b;
    if(silver>gold){
        printf("Silver");
    }
    else{
        printf("Gold");
    }
    return 0;
}
