#include <stdio.h>
void TableReverse(int iNo)
{
    int iCnt=0;
    int iMul=1;
   
    if(iNo<0)
    {
        iNo=-iNo;
    }

     for(iCnt=1;iCnt <= 10;iCnt++)
    {
       printf(" %d ",iNo*iCnt);
       

    }
    
    
    
}
int main()
{
    int iValue =0;

    printf("Enter the Number :");
    scanf("%d",&iValue);
    TableReverse(iValue);

    return 0;
}