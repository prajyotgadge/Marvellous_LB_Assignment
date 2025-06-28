#include <stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBitQ3(UINT iNo)
{
    UINT iMask9 = 1 << 8;
    UINT iMask12 = 1 << 11;

    if (((iNo & iMask9) == iMask9) && ((iNo & iMask12) == iMask12))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    UINT iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%u", &iValue);

    bRet = ChkBitQ3(iValue);

    if (bRet == TRUE)
    {
        printf("9th and 12th bits are ON\n");
    }
    else
    {
        printf("9th and 12th bits are OFF\n");
    }

    return 0;
}