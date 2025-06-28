#include <stdio.h>
void Pattern(int iRow,int iCol)
{
    int iCnt = 0;
     int iCnt1 = 0;
    char ch ='\0';
     char ch1 ='\0';
    for(iCnt=1;iCnt<=iRow;iCnt++)
    {
        for(iCnt1=1,ch='A',ch1='a';iCnt1<=iCol;iCnt1++,ch++,ch1++)
        {
          if((iCnt % 2)!=0)
          {
              printf("%c\t",ch);
          }
          else
          {

             printf("%c\t",ch1);
          }  
            
            
        }
        printf("\n");
    }
    
}
int main()
{
    int iValue1= 0;
    int iValue2 =0;

    printf("Enter the Number \n");
    scanf("%d\n %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}