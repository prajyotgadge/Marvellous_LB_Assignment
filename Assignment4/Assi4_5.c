#include<stdio.h>
int FactDiff(int iNo)
{
    
    int iCnt=0;
    int iSum1=0;
    int iSum2=0;
    

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=1;iCnt < iNo;iCnt++)
    {
        if((iNo % iCnt)==0 )
        {
            
            iSum1=iSum1 + iCnt;
            
        }
        if((iNo % iCnt)!=0)
        {
             
            iSum2=iSum2 + iCnt;
        }
    }
    return iSum1 -iSum2;
    
}
int main()
{
    int iValue =0;
    int iRet =0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);
    printf("%d",iRet);
    return 0;
}