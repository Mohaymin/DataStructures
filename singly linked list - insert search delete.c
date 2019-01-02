#include<stdio.h>

void insertElement()
{
    //TODO: implement this function
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
            insertElement();
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
    }
    return 0;
}
