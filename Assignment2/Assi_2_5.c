#include<stdio.h>
# define TRUE 1
# define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    
    if (iNo %2==0)
    {
        printf("Number is Even");

    }
    else
    {
        printf("Number is odd");
    }
}
int main()
{
    int iValue =0;
    BOOL bRet = FALSE;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);
    return 0;
}