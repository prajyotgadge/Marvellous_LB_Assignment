#include <stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos)
{
    if (iPos < 1 || iPos > (sizeof(UINT) * 8))
    {
        return iNo;
    }
    UINT iMask = ~(1 << (iPos - 1));
    return (iNo & iMask);
}

int main()
{
    UINT iValue = 0;
    int iPosition = 0;
    UINT iRet = 0;

    printf("Enter number: ");
    scanf("%u", &iValue);

    printf("Enter position: ");
    scanf("%d", &iPosition);

    iRet = OffBit(iValue, iPosition);

    printf("Modified number: %u\n", iRet);

    return 0;
}