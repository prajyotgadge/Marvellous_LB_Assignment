#include <stdio.h>

void Pattern(int iRow,int iCol)
{
    int iNo1=0;
    int iNo2 =0;
   
    
    if(iRow <=0 || iCol<=0)

    {
        printf("Invalid input :Number of Rows and Columns are Positive \n");
        return;
    }
    for(iNo1=0;iNo1<iRow;iNo1++)
    {
       
        
            for(iNo2=0;iNo2<iCol;iNo2++)
            {
                 printf("%d\t",iNo1+iNo2 + 1);
                 
            }
            printf("\n");
          
        
        
       
    }

}
int main()
{
    int iValue1 =0;
    int iValue2=0;

    printf("Enter the Number of Row : ");
    scanf("%d",&iValue1);

    printf("Enter the Number of Column : ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}