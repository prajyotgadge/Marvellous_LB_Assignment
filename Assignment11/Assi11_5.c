# include <stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0;
    int iCount=0;
    for(iCnt=2;iCnt<=iNo*2;iCnt++)
    {
        if((iCnt%2)==0)
        {
            printf("%d\t",iCnt);
            
        }

        
    }

}
int main()
{
    int iValue =0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}