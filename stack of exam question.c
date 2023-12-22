#include<stdio.h>
#include<stdlib.h>
struct Node {
int p;
float q;
char r;
struct node *n;
};
typedef struct Node node;
node *head , *tail ;
head = (node *) malloc( sizeof(node));
tail =(node *) malloc( sizeof(node));
head -> p = 17; head->q =4.5; head->r=’H’;
tail -> p = 20; tail->q= head -> p; tail->r = ‘T’;
head->n = NULL; tail->n = head;
