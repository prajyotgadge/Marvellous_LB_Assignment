# include<stdio.h>
double FhtoCs(float fTemp)
{
   
   
    double dCelcius =((fTemp-32)*(5.0/9.0));
    return dCelcius;

}
int main()
{
    float fValue = 0;
    double dRet =0;
    printf("Enter Temperature in Fahrenhiet :\n");
    scanf("%f",&fValue);

    dRet=FhtoCs(fValue);
    printf("Temperature in Celcius is :%f",dRet,fValue);

    return 0;
}