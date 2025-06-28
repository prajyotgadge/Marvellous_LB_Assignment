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

int ReverseNumber(int num)
{
    int rev = 0;
    while (num != 0)
    {
        rev = rev * 10 + (num % 10);
        num = num / 10;
    }
    return rev;
}

void Reverse(PNODE Head)
{
    while (Head != NULL)
    {
        Head->data = ReverseNumber(Head->data);
        Head = Head->next;
    }
}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first, 89);
    InsertFirst(&first, 6);
    InsertFirst(&first, 41);
    InsertFirst(&first, 17);
    InsertFirst(&first, 28);
    InsertFirst(&first, 11);

    printf("Reversing each element:");
    Reverse(first);

    PNODE temp = first;
    while (temp != NULL)
    {
        printf("|%d| -> ", temp->data);
        temp = temp->next;
    }

    printf("\n");
    return 0;
}

