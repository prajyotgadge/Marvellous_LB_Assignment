# include<stdio.h>
int  Factorial(int iNo)
{
    int iCnt=0;
    int ifact= 1;

    if(iNo<0)
    {
        iNo=-iNo;
        
    }
    for (iCnt=1; iCnt <= iNo; iCnt++)
    {
        ifact = ifact * iCnt;
    }
    return ifact;
    
}
int main()
{
    int iValue =0;
    int iRet = 0;
    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);
    printf("Factorial is :%d\n",iRet);

    return 0;
}