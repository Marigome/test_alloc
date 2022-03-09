#include <stdio.h>
#include <stdlib.h>

 int valeur;
 struct node *next;

int main(int argc, char *argv[]){

    struct node * init_node (void)
    {
    struct node * n = (struct node*) malloc (sizeof(struct node));
    n->val = -1;
    return n;
 }
 struct node * addHead (struct node *head, int val)
 {
    struct node *tmp = NULL;
    struct node *fhead = head;
    struct node *elem = malloc(sizeof(struct node));
    if(!elem)
    exit(EXIT_FAILURE).
    elem->valeur = val;
    while (fhead && fhead->valeur<val)
    {
        tmp=fhead;
        fhead=fhead->next;
    }
    elem -> next = fhead;
    if(tmp) tmp->next = elem;
    else *head = elem;
 }
 void addTail (struct node *head)
 {
     int valarray;
     head *tmp;
     if(!*head)return -1;
     tmp = (*head)->next;
     tmp = (*head)->valeur;
     free(*head)
     *head = tmp;
     return val;
 }
 void display_list (struct node *head)
 {
    while(head)
    {
        printf("%d\n" ,head->valeur);
        head = head->valeur;
    }
 }
    return 0;
}
