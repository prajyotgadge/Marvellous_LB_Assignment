#include<stdio.h>

int Product(int No)
{
    int iDigit = 0;
    int Mult = 1;
    while(No != 0)
    {
        iDigit = No % 10;
        Mult = Mult * iDigit;
        No = No / 10;
        Product(No);
    }
    return Mult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter The Numer : ");
    scanf("%d",&iValue);
    iRet = Product(iValue);

    printf("The Multiplication is : %d",iRet);

    return 0;
}