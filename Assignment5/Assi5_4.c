#include <stdio.h>
void OddDisplay(int iNo)
{
    int iCnt=0;
    
    if(iNo<0)
    {
        iNo=-iNo;
    }

     for(iCnt=1;iCnt <= iNo;iCnt++)
    {    
        if((iCnt % 2)!=0)
        {
            printf("%d ",iCnt);
            
        }        
    }
    
    
    
}
int main()
{
    int iValue =0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}