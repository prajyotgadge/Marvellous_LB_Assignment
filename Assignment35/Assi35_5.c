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

void SumDigit(PNODE Head)
{
    while(Head != NULL)
    {
        int iNum = Head->data;
        int iSum = 0;

        while(iNum != 0)
        {
            iSum += iNum % 10;
            iNum = iNum / 10;
        }
        printf("%d ", iSum);
        Head = Head->next;
    }
}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first, 640);
    InsertFirst(&first, 240);
    InsertFirst(&first, 20);
    InsertFirst(&first, 230);
    InsertFirst(&first, 110);

    printf("Sum of digits of each element: ");
    SumDigit(first);
    printf("\n");

    return 0;
}

