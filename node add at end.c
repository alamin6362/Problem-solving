#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
void addtoend(struct node**a, int data) {
    struct node* newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    struct node*temp=*a;
    newnode->data = data;
    newnode->next = NULL;

}

int main ()
{
    struct node *a =NULL;
    struct node *b =NULL;
    struct node *c =NULL;
    struct node *d =NULL;


    a=(struct node*) malloc(sizeof(struct node));
    b=(struct node*) malloc(sizeof(struct node));
    c=(struct node*) malloc(sizeof(struct node));
    d=(struct node*) malloc(sizeof(struct node));

    a->data=3;
    b->data=10;
    c->data=2;
    d->data=1;

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=NULL;

        addtoend(&a, 50);

     while (temp->next !=NULL)
    {
temp =temp->next;

temp->next =newnode;
    }

    return 0;
}

