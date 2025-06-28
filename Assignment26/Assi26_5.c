#include <stdio.h>
#include <string.h>

void StrRevX(char *str) 
{
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    int temp=0;

    while (start < end) 
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() 
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^\n]%*c", arr);

    StrRevX(arr);

    printf("Modified string is %s", arr);

    return 0;
}