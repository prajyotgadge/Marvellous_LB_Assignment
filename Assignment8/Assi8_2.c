# include<stdio.h>
double RectArea(float fWidth, float fHeight)
{
    double dArea =fWidth * fHeight;
    return dArea;

}
int main()
{
    float fValue1 = 0.0f;
    float fValue2=0.0f;
    double dRet =0;

    printf("Enter Width :\n");
    scanf("%f",&fValue1);

    printf("Enter Height :\n");
    scanf("%f",&fValue2);

    dRet=RectArea(fValue1,fValue2);
    printf("Area of Rectangle is :%f",dRet);

    return 0;
}