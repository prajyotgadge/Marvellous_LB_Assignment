#include <stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL DisplaySchedule(char chDiv)
{
    if (chDiv == 'A' || chDiv == 'a')
    {
        printf("Your exam at 7 AM\n");
        return TRUE;
    }
    else if (chDiv == 'B' || chDiv == 'b')
    {
        printf("Your exam at 8:30 AM\n");
        return TRUE;
    }
    else if (chDiv == 'C' || chDiv == 'c')
    {
        printf("Your exam at 9:20 AM\n");
        return TRUE;
    }
    else if (chDiv == 'D' || chDiv == 'd')
    {
        printf("Your exam at 10:30 AM\n");
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter your division (A, B, C, or D): ");
    scanf(" %c", &cValue);

    bRet = DisplaySchedule(cValue);

    if (bRet == FALSE)
    {
        printf("Invalid Division entered.\n");
    }

    return 0;
}