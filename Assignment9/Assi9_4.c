# include<stdio.h>
int CountFour(int iNo)
{
   int iDigit = 0;
   int iCount=0;
   if(iNo<0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo%10;
        if(iDigit == 4)
        {
           iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;

   

   
    

}
int main()
{
    int iValue = 0;
    int bRet =0;
    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    bRet=CountFour(iValue);
    printf("%d",bRet);

    return 0;
}