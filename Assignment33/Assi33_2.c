#include <stdio.h>

typedef unsigned int UINT;

void CommonBits(UINT No1, UINT No2)
{
    UINT iResult = No1 & No2;
    int iPos = 1;

    if (iResult == 0)
    {
        printf("No common ON bits.\n");
        return;
    }

    printf("Positions of common ON bits:\n");
    while (iResult != 0)
    {
        if ((iResult & 1) == 1)
        {
            printf("%d\n", iPos);
        }
        iResult = iResult >> 1;
        iPos++;
    }
}

int main()
{
    UINT iValue1 = 0;
    UINT iValue2 = 0;

    printf("Enter first number: ");
    scanf("%u", &iValue1);

    printf("Enter second number: ");
    scanf("%u", &iValue2);

    CommonBits(iValue1, iValue2);

    return 0;
}