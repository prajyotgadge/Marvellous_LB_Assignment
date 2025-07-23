#include<stdio.h>

void Display(int No)
{
    
    if(No >= 1)
    {
        printf("%d",No);
        printf("*");
        No--;
        Display(No);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter The Number : ");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}