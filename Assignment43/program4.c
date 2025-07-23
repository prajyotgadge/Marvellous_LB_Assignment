#include<stdio.h>

int Smallest(int iNo)
{
    int iDigit = 0;
    int iSma = iNo;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iSma > iDigit)
        {
            iSma = iDigit;
        }
        iNo = iNo / 10;
        Smallest(iNo);

    }
    return iSma;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the digit : ");
    scanf("%d",&iValue);

    iRet = Smallest(iValue);

    printf("%d",iRet);
    
    return 0;
}