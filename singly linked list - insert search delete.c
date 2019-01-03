#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node* nextNode;
} node;

void insertElement(node** head)
{
    //TODO: implement this function
    node* dummy;
    int value;
    printf("\nEnter value: ");
    scanf("%d", &value);
    dummy = (node*) malloc(sizeof(node));
    dummy -> data = value;
    dummy -> nextNode = *head;
    *head = dummy;
}

void searchElement()
{
    //TODO: implement this function
}

void deleteElement()
{
    //TODO: implement this function
}


int main()
{
    int choice;
    node* head = NULL;
    while(1)
    {
        puts("Enter");
        puts("  1 to insert");
        puts("  2 to search");
        puts("  3 to delete");
        puts("  4 to exit");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertElement(&head);
            break;
        case 2:
            searchElement();
            break;
        case 3:
            deleteElement();
            break;
        case 4:
            return 0;
        default:
            puts("INVALID INPUT");
        }
        printf("%d\n", head->data);
    }
    return 0;
}
