# include<stdio.h>
int CountRange(int iNo)
{
   int iDigit=0;
    int iSum1= 1;
    int iSum2= 1;

    if(iNo<0)
    {
        iNo=-iNo;
        
    }
     
    while(iNo != 0)
    {
        iDigit = iNo%10;
        if((iDigit % 2) == 0)
        {
          iSum1=iSum1+iDigit;
        }
        else
        {
             iSum2=iSum2+iDigit;
        }
        iNo = iNo / 10;
    }
    return (iSum1-iSum2);

}
int main()
{
    int iValue = 0;
    int bRet =0;
    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    bRet=CountRange(iValue);
    printf("%d",bRet);

    return 0;
}