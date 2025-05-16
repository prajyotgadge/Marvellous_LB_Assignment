# include<stdio.h>
double CircleArea(float fRadius)
{
    double dArea =3.14 *fRadius*fRadius;
    return dArea;

}
int main()
{
    float fValue = 0;
    double dRet =0;
    printf("Enter radius :\n");
    scanf("%f",&fValue);

    dRet=CircleArea(fValue);
    printf("Area of Circle is :%f",dRet);

    return 0;
}