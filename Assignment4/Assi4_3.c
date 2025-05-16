#include<stdio.h>
int NonFact(int iNo)
{
    
    int iCnt=1;
    

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=1;iCnt < iNo;iCnt++)
    {
        if((iNo % iCnt)!=0)
        {
            printf(" %d\n",iCnt);
            
            
        
        }
    }
   
    
}
int main()
{
    int iValue =0;
   

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    NonFact(iValue);
    
    return 0;
}