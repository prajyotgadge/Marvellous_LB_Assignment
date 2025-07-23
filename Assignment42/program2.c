#include<stdio.h>

int Display(int No)
{
    static int iSum = 0;
    int iDigit = 0;
    if(No > 0)
    {
        iDigit = No % 10;
        iSum = iSum + iDigit;
        No = No / 10;
        Display(No);
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter The Number : ");
    scanf("%d",&iValue);
    iRet = Display(iValue);
    printf("The addition is : %d",iRet);

    return 0;
}