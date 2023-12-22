#include<stdio.h>
#define capacity 3
int stack[capacity];
int top=-1;
void push(int x)
{
    if (top<capacity-1)
    {
        top=top+1;
        stack[top]=x;
        printf("the item is pushed succesfully %d\n",x);

    }
    else
    {
        printf("something is wrong ! no space\n");

    }
}

int pop()
{
    if (top>=0)
    {int val=stack[top];
        top=top-1;
        return val;
    }printf("something is wrong ! no space");

    return-1;
}

int peek()
{
    if(top>=0)
    {
        return stack[top];
    }
    printf("something is wrong ! no space");
return -1;
}
int main ()
{
    push(10);
    push(26);
    push(100);
    push(45);
    push(1000);

    printf("The lastest output%d\n",peek());
    return 0;
}
