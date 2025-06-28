#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

void Digits(int Arr[], int iLength) 
{
    int iCnt = 0;
    
    printf("Numbers with 3 digits:\n");
    for (iCnt = 0; iCnt < iLength; iCnt++) 
    {
        if (Arr[iCnt] >= 100 && Arr[iCnt] <= 999) 
        {
            printf("%d\n", Arr[iCnt]);
        }
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

    Digits(p, iSize);

    free(p);
    return 0;
}