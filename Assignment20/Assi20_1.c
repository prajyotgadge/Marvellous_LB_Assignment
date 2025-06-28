#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength,int iNo)
{
    
    int iCnt=0;
    BOOL bFlag=FALSE;
    
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            
              bFlag=TRUE;
              break;
        }
        
    }
    return bFlag;
}
int main()
{
   int iSize =0,iRet=0,iCnt=0,iValue =0;
    int *p = NULL;
    int bRet =0;
    printf("Enter the Number of Elements:");
    scanf("%d",&iSize);

    printf("Enter the Number :");
    scanf("%d",&iValue);

    p = (int*)malloc(iSize *sizeof(int));

    if (p==NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }
    printf("Enter %d Elements\n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter the element %d:\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet=Check(p,iSize,iValue);
    if (bRet==TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");    
    }
   
    free(p);
    return 0;


}