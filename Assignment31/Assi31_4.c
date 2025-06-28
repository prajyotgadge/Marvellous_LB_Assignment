#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask7 = 1 << 6;
    UINT iMask10 = 1 << 9;

    return (iNo ^ (iMask7 | iMask10));
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter number: ");
    scanf("%u", &iValue);

    iRet = ToggleBit(iValue);

    printf("Modified number: %u\n", iRet);

    return 0;
}