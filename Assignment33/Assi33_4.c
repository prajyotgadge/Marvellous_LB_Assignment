#include <stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBitQ4(UINT iNo, int iPos1, int iPos2)
{
    if (iPos1 < 1 || iPos1 > (sizeof(UINT) * 8) ||
        iPos2 < 1 || iPos2 > (sizeof(UINT) * 8))
    {
        return FALSE;
    }

    UINT iMask1 = 1 << (iPos1 - 1);
    UINT iMask2 = 1 << (iPos2 - 1);

    if (((iNo & iMask1) == iMask1) || ((iNo & iMask2) == iMask2))
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
    int iPosition1 = 0;
    int iPosition2 = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%u", &iValue);

    printf("Enter first position: ");
    scanf("%d", &iPosition1);

    printf("Enter second position: ");
    scanf("%d", &iPosition2);

    bRet = ChkBitQ4(iValue, iPosition1, iPosition2);

    if (bRet == TRUE)
    {
        printf("At least one of the bits is ON\n");
    }
    else
    {
        printf("Both bits are OFF\n");
    }

    return 0;
}