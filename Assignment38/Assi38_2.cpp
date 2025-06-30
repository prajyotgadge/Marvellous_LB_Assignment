#include <iostream>
using namespace std;

template <class T>
T Max(T no1, T no2, T no3)
{
    T max = no1;
    if (no2 > max)
        max = no2;
    if (no3 > max)
        max = no3;
    return max;
}

int main()
{
    int a=0, b=0, c=0;
    int iRet=0;
    

    printf("Enter 3 integer values:\n");
    scanf("%d %d %d", &a, &b, &c);

    iRet = Max(a, b, c);
    printf("Maximum (int): %d\n", iRet);

    

    return 0;
}
