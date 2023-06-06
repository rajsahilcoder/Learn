#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    int data;
    struct node *next;
} * head;
void display(struct node *head);
void add(int elem)
{
    struct node *d = (struct node *)malloc(sizeof(struct node));
    // struct node* d;
    d->data = elem;
    d->next = NULL;
    
    if (head == NULL)
    {
        head = d;
        // display(head);
        printf("%d\n",head->data);
        // head->next = 
    }
    else
    {
        // struct node *temp = (struct node *)malloc(sizeof(struct node));
        struct node* temp = head;
        // temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        // temp->data = d->data;
        temp->next = d;
        // temp->next = NULL;
    }
}
void display(struct node *head)
{
    printf("DisplayingData...\n");
    // printf("%d->",head->data);
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    head = NULL;
    // int t;
    // scanf("%d",&t);
    // for(int i=0;i<t;i++)
    // {
    // int index;
    // scanf("%d",&index);
    printf("Enter number of nodes:\n");
    int count1;
    scanf("%d", &count1);
    for (int i = 0; i < count1; i++)
    {
        printf("Enter data for elem%d", i + 1);
        int elem;
        scanf("%d", &elem);
        add(elem);
    }
    display(head);
    // }

    return 0;
}