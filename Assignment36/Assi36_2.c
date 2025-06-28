#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    if (newn == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }
    newn->data = no;
    newn->next = *Head;
    *Head = newn;
}

int IsPalindrome(int num)
{
    int temp = num;
    int rev = 0;
    while (temp != 0)
    {
        rev = rev * 10 + (temp % 10);
        temp = temp / 10;
    }
    return (rev == num);
}

void DisplayPallindrome(PNODE Head)
{
    while (Head != NULL)
    {
        if (IsPalindrome(Head->data))
        {
            printf("%d ", Head->data);
        }
        Head = Head->next;
    }
}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first, 89);
    InsertFirst(&first, 6);
    InsertFirst(&first, 414);
    InsertFirst(&first, 17);
    InsertFirst(&first, 28);
    InsertFirst(&first, 11);

    printf("Palindrome elements are:\n");
    DisplayPallindrome(first);
    printf("\n");

    return 0;
}

