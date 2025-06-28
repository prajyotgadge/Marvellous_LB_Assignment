#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
    if (iStart < 1 || iEnd > (sizeof(UINT) * 8) || iStart > iEnd)
    {
        return iNo;
    }

    UINT iResult = iNo;
    for (int i = iStart; i <= iEnd; i++)
    {
        UINT iMask = 1 << (i - 1);
        iResult = iResult ^ iMask;
    }
    return iResult;
}

int main()
{
    UINT iValue = 0;
    int iStartPos = 0;
    int iEndPos = 0;
    UINT iRet = 0;

    printf("Enter number: ");
    scanf("%u", &iValue);

    printf("Enter starting position: ");
    scanf("%d", &iStartPos);

    printf("Enter ending position: ");
    scanf("%d", &iEndPos);

    iRet = ToggleBitRange(iValue, iStartPos, iEndPos);

    printf("Modified number: %u\n", iRet);

    return 0;
}