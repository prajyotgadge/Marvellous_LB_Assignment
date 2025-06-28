#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

void DigitsSum(int Arr[], int iLength) 
{
    int iCnt = 0;
    int iNo = 0;
    int iDigit = 0;
    int iSum = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++) 
    {
        iNo = Arr[iCnt];
        iSum = 0;
        
        if (iNo == 0) 
        {
            printf("Sum of digits for %d is: 0\n", Arr[iCnt]);
            continue; 
        }

        int tempNo = iNo;

        while (tempNo != 0) 
        {
            iDigit = tempNo % 10;
            iSum = iSum + iDigit;
            tempNo = tempNo / 10;
        }
        printf("Sum of digits for %d is: %d\n", Arr[iCnt], iSum);
    }
}

int main() 
{
    int iSize = 0;
    int *p = NULL;
    int iCnt = 0;

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

    DigitsSum(p, iSize);

    free(p);
    return 0;
}