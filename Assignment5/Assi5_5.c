#include <stdio.h>
void PrintMultiples(int iNo)
{
    int iCnt=0;
   
    if(iNo<0)
    {
        iNo=-iNo;
    }

     for(iCnt=1;iCnt <= 5;iCnt++)
    {
       printf("  %d  ",iNo * iCnt);
    }
    
    
}
int main()
{
    int iValue =0;

    printf("Enter the Number :");
    scanf("%d",&iValue);
    PrintMultiples(iValue);

    return 0;
}