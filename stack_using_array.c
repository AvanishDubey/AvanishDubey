#include <stdio.h>
#include <stdlib.h>
#define si 5
struct stack
{
    int top;
    int stk[si];
};
typedef struct stack STACK;
STACK s;
void insert()
{

    int a;
    printf("Enter the value of a \n");
    scanf("%d", &a);
    if (s.top == si)
    {
        printf("enter stack overflow!\n");
        return;
    }
    s.top += 1;
    s.stk[s.top] = a;
}

void delete ()
{
    if (s.top == -1)
    {
        printf("stack underflow!\n");
        return;
    }
    printf("popped element is:%d\n", s.stk[s.top]);
    s.top--;
}
void display()
{
    if (s.top == -1)
    {
        printf("stack is empty\n");
        return;
    }
    printf("your stack is:\n");
    for (int i = s.top; i > 0; i--)
    {
        printf("%d\n", s.stk[i]);
    }
}
int main()
{

    int choice;

    printf("1.Insert element to stack \n");
    printf("2.Delete element from stack \n");
    printf("3.Display all elements of stack \n");
    printf("4.Quit \n");

    do
    {

        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:

            // int n;
            // printf("Enter the element\n");
            // scanf("\n%d", &n);
            insert();
            break;

        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exit");
            break;

        default:
            printf("Wrong choice \n");
        }
    } while (choice != 5);
    return 0;
}
