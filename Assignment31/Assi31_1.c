#include <stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = ~(1 << 6);
    return (iNo & iMask);
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter number: ");
    scanf("%u", &iValue);

    iRet = OffBit(iValue);

    printf("Modified number: %u\n", iRet);

    return 0;
}