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

void DisplayProduct(PNODE Head)
{
    while (Head != NULL)
    {
        int num = Head->data;
        int product = 1;

        while (num != 0)
        {
            int digit = num % 10;
            if (digit != 0)
            {
                product = product * digit;
            }
            num = num / 10;
        }

        printf("%d ", product);
        Head = Head->next;
    }
}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first, 41);
    InsertFirst(&first, 32);
    InsertFirst(&first, 20);
    InsertFirst(&first, 11);

    printf("Product of digits ignoring 0 of each element:\n");
    DisplayProduct(first);
    printf("\n");

    return 0;
}

