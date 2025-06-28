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

void DisplaySmall(PNODE Head)
{
    while (Head != NULL)
    {
        int num = Head->data;
        int min = 9;

        while (num != 0)
        {
            int digit = num % 10;
            if (digit < min)
            {
                min = digit;
            }
            num = num / 10;
        }

        printf("%d ", min);
        Head = Head->next;
    }
}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first, 415);
    InsertFirst(&first, 532);
    InsertFirst(&first, 250);
    InsertFirst(&first, 11);

    printf("Smallest digit of each element:\n");
    DisplaySmall(first);
    printf("\n");

    return 0;
}


