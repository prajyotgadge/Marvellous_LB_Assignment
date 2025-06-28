#include <stdio.h>

typedef unsigned int UINT;

int CountOne(UINT iNo)
{
    int iCount = 0;
    while (iNo != 0)
    {
        iNo = iNo & (iNo - 1);
        iCount++;
    }
    return iCount;
}

int main()
{
    UINT iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%u", &iValue);

    iRet = CountOne(iValue);

    printf("Number of ON bits: %d\n", iRet);

    return 0;
}