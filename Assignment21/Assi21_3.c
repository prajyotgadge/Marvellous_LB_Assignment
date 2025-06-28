#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Difference(int Arr[], int iLength) 
{
    int iMax = Arr[0];
    int iMin = Arr[0];
    int iCnt = 0;

    for (iCnt = 1; iCnt < iLength; iCnt++) 
    {
        if (Arr[iCnt] > iMax) 
        {
            iMax = Arr[iCnt];
        }
        if (Arr[iCnt] < iMin) 
        {
            iMin = Arr[iCnt];
        }
    }
    return iMax - iMin;
}

int main() 
{
    int iSize = 0;
    int *p = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if (p == NULL) 
    {
        printf("Unable to allocate memory.\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++) 
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Difference(p, iSize);
    printf("Difference is: %d\n", iRet);

    free(p);
    return 0;
}