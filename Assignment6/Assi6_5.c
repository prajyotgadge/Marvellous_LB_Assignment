#include <stdio.h>
void Table(int iNo)
{
    int iCnt=0;
    int iMul=1;
   
    if(iNo<0)
    {
        iNo=-iNo;
    }

     for(iCnt=10;iCnt >= 1;iCnt--)
    {
       printf(" %d ",iNo*iCnt);
       

    }
    
    
    
}
int main()
{
    int iValue =0;

    printf("Enter the Number :");
    scanf("%d",&iValue);
    Table(iValue);

    return 0;
}