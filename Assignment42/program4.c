#include<stdio.h>

int Fact(int No)
{
    int fact = 1;

    while (No >= 2)
    {
        fact = fact * No;
        No--;
        Fact(No);
    }
    return fact;
}

int main()
{
    int iRet = 0;
    int iValue = 0;
    printf("Enter The number : ");
    scanf("%d",&iValue);
    iRet = Fact(iValue);

    printf("Factorial is : %d",iRet);

    return 0;
}