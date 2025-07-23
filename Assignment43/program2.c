#include<stdio.h>

int LargDigit(int No)
{
    int imax = 0;
    int iDigit = 0;
    while(No != 0)
    {
        iDigit = No % 10;
        if(iDigit > imax)
        {
            imax = No;

        }
        No = No / 10;
        LargDigit(No);
    }
    return imax;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter The number");
    scanf("%d",&iValue);

    iRet = LargDigit(iValue);

    printf("Largest Number is : %d",iRet);

    return 0;
}