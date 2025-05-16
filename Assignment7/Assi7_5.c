# include<stdio.h>
int  FactorialDiff(int iNo)
{
    int iCnt=0;
    int ifact1= 1;
    int ifact2= 1;

    if(iNo<0)
    {
        iNo=-iNo;
        
    }
    for(iCnt=iNo; iCnt >= 2; iCnt--)
    {
        if((iCnt % 2)==0)    
        {
            ifact1 = ifact1 * iCnt;
        }
    }
    for (iCnt=iNo; iCnt >= 2; iCnt--)
    {
        if((iCnt % 2)!=0)    
        {
            ifact2 = ifact2 * iCnt;
        }

    }
    return (ifact1-ifact2);
    
}
int main()
{
    int iValue =0;
    int iRet = 0;
    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet=FactorialDiff(iValue);
    printf("Factorial is :%d\n",iRet);

    return 0;
}