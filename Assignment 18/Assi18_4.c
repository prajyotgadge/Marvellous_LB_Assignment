#include<stdio.h>
int Display(int Arr[],int iLength)
{
    
    int iCnt=0;
    
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]%5)==0 && (Arr[iCnt]%3)==0)
        {
            printf("%d\t",Arr[iCnt]);
              
        }
        
    }
    return iCnt ;
}
int main()
{
    int iSize =0,iRet=0,iCnt=0;
    int *p = NULL;
    printf("Enter the Number of Elements:");
    scanf("%d",&iSize);

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

    iRet=Display(p,iSize);
   
    free(p);
    return 0;


}