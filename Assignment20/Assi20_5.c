#include <stdio.h>
#include <stdlib.h>

int Product(int Arr[], int iLength)
{
    int i = 0;
    int iProduct = 1;
    int bFlag = 0;

    for (i = 0; i < iLength; i++)
    {
        if ((Arr[i] % 2) != 0)
        {
            iProduct = iProduct * Arr[i];
            bFlag = 1;
        }
    }
    if (bFlag == 0)
    {
        return 0;
    }
    else
    {
        return iProduct;
    }
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d :", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Product(p, iSize);

    printf("Product of odd elements is: %d\n", iRet);

    free(p);

    return 0;
}