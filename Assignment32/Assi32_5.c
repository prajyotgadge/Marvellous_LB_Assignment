#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBitQ5(UINT iNo)
{
    UINT firstNibbleMask = 0x0F;
    UINT lastNibbleMask = 0xF0000000;

    UINT combinedMask = firstNibbleMask | lastNibbleMask;

    return (iNo ^ combinedMask);
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter number: ");
    scanf("%u", &iValue);

    iRet = ToggleBitQ5(iValue);

    printf("Modified number: %u\n", iRet);

    return 0;
}