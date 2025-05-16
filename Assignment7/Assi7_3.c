# include<stdio.h>
int  EvenFactorial(int iNo)
{
    int iCnt=0;
    int ifact= 1;

    if(iNo<0)
    {
        iNo=-iNo;
        
    }
    for (iCnt=iNo; iCnt >= 2; iCnt--)
    {
        if((iCnt % 2)==0)    
        {
            ifact = ifact * iCnt;
        }
    }
    return ifact;
    
}
int main()
{
    int iValue =0;
    int iRet = 0;
    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet=EvenFactorial(iValue);
    printf("Even Factorial is :%d\n",iRet);

    return 0;
}