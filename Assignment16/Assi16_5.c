#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int iNo1 = 0;
    int iNo2 = 0;

    if(iRow != iCol)
    {
        printf("Error: Row and Column must be equal.\n");
        return;
    }

    for(iNo1 = 1; iNo1 <= iRow; iNo1++)
    {
        for(iNo2 = 1; iNo2 < iNo1; iNo2++)
        {
            printf("\t"); 
        }

        for(iNo2 = iNo1; iNo2 <= iCol; iNo2++)
        {
            printf("%d\t", iNo2); 
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the Number of Rows: ");
    scanf("%d", &iValue1);

    printf("Enter the Number of Columns: ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
