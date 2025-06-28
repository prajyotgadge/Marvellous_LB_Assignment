#include <stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos)
{
    if (iPos < 1 || iPos > (sizeof(UINT) * 8))
    {
        return FALSE;
    }
    UINT iMask = 1 << (iPos - 1);
    if ((iNo & iMask) == iMask)
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
    int iPosition = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%u", &iValue);

    printf("Enter position: ");
    scanf("%d", &iPosition);

    bRet = ChkBit(iValue, iPosition);

    if (bRet == TRUE)
    {
        printf("Bit is ON\n");
    }
    else
    {
        printf("Bit is OFF\n");
    }

    return 0;
}