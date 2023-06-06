#include <stdio.h>
#include <stdlib.h>

typedef struct node
{

    int coefficient;
    int exponent;
    struct node *link;

} NODE;

struct node *insert(struct node *head, int co, int ex)
{
    struct node *newnode = (struct node *)malloc(sizeof(newnode));
    newnode->coefficient = co;
    newnode->exponent = ex;
    newnode->link = NULL;
    if (head == NULL || ex > head->exponent)
    {
        newnode->link = head;
        head = newnode;
    }
    else
    {
        struct node *temp = head;
        while (temp != NULL && ex <= temp->link->exponent)
        {
            temp = temp->link;
        }
        newnode->link = temp->link;
        temp->link = newnode;
    }
    return head;
}
struct node *create(struct node *head)
{
    int n;
    int co;
    int ex;
    printf("\nenter the number of terms");
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the value of coefficient");
        scanf("%d", &co);
        printf("\nenter the value of the exponent");
        scanf("%d", &ex);
        head = insert(head, co, ex);
    }
    return head;
}
void Display(struct node *head)
{
    if (head == NULL)
        printf("\nNo polynomial");
    else
    {
        struct node *temp = head;
        while (temp != NULL)
        {
            printf("(%.1fx^%d)", temp->coefficient, temp->exponent);
            temp = temp->link;
            if (temp != NULL)
                printf("+");
            else
                printf("\n");
        }
    }
}


void polyadd(struct node *head1, struct node *head2)
{
    struct node *head3 = NULL;
    struct node *ptr1 = head1;
    struct node *ptr2 = head2;
    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->exponent == ptr2->exponent)
        {
            head3 = insert(head3, ptr1->coefficient + ptr2->coefficient, ptr1->exponent);
            ptr1 = ptr1->link;
            ptr2 = ptr2->link;
        }
        else if (ptr1->exponent > ptr2->exponent)
        {
            head3 = insert(head3, ptr1->coefficient, ptr1->exponent);
            ptr1 = ptr1->link;
        }
        else
        {
            head3 = insert(head3, ptr2->coefficient, ptr2->exponent);
            ptr2 = ptr2->link;
        }
    }
    while (ptr1 != NULL)
    {
        head3 = insert(head3, ptr1->coefficient, ptr1->exponent);
        ptr1 = ptr1->link;
    }
    while (ptr2 != NULL)
    {
        head3 = insert(head3, ptr2->coefficient, ptr2->exponent);
        ptr2 = ptr2->link;
    }
    printf("added polynomail is:");
    Display(head3);
}

int main()
{
    struct node *head1 = NULL;
    struct node *head2 = NULL;
    printf("\nenter the first polynomial");
    head1 = create(head1);
    printf("\nenter the second polynomial");
    head2 = create(head2);
    polyadd(head1, head2);
    return 0;
}