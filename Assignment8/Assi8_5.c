# include<stdio.h>
double SquareMeter(int iTemp)
{
   
   
    double dSqMet =0.0;
    dSqMet=iTemp * 0.0929;
    return dSqMet;

}
int main()
{
    int iValue = 0;
    double dRet =0;
    printf("Enter a area of Suarefeet:\n");
    scanf("%d",&iValue);

    dRet=SquareMeter(iValue);
    printf("In Sq.meter is :%f",dRet);

    return 0;
}