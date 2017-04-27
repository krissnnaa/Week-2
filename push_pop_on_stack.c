/* Array Implementation of Stack */
#include<stdio.h>
#include<conio.h>
#define MAX 10
struct stack
{
int items[MAX];  //Declaring an array to store items
int top;        //Top of a stack
};
typedef struct stack stk;
void empty_stack(stk *s); //function prototype
void push(stk *s, int);
void pop(stk *s);
void display(stk *s);

void main()
{
    int element, choice;
    stk *s;
    int flag=1;
    empty_stack(s); // To indicate empty stack
    do
    {
        printf("\n\n Enter your choice");
        printf(" \n\n\t  1:Push the elements");
        printf(" \n\n\t  2: To display the elements");
        printf(" \n\n\t  3: Pop the element");
        printf(" \n\n\t  4: Exit");
        printf("\n\n\n Enter of your choice:\t");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                    printf("\n Enter the number:");
                    scanf("%d", &element);
                    push(s,element);
                    break;
            case 2:
                    display(s);
                    break;
            case 3:
                    pop(s);
                    break;
            case 4:
                    flag=0;
                    break;
            default:
                    printf("\n Invalid Choice");
                    break;
        }

    }while(flag);

    getch();
}

void empty_stack(stk *s) // To create empty stack
{
    s->top=-1;
}

int isempty(stk *s) // To check empty stack
{
    if(s->top==-1)
        return 1;
    else
        return 0;
}

int isfull(stk *s) // To check full stack
{
    if(s->top==MAX-1)
        return 1;
    else
        return 0;
}

void push(stk *s, int element) // To push data on stack
{
    if(isfull(s))
        printf("\n \n The stack is overflow: Stack Full!!\n");
    else
        s->items[++(s->top)]=element;
}

void display(stk *s) //To display stack elements
{
    int i;
    if(isempty(s))
        printf("\n The Stack does not contain any Elements");
    else
    {
        printf("\n The elements in the stack is/are:\n");
        for(i=s->top;i>=0;i--)
            printf("%d\n",s->items[i]);
    }
}

void pop(stk *s) //To pop elements from stack
{
    if(isempty(s))
        printf("\n\n Stack Underflow: Empty Stack!!!");
    else
        printf("\n\n The deleted item is %d:\t",s->items[s->top--]);
}
