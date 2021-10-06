#include<stdio.h>
#include <stdlib.h>
#include"doubly_linked_list.h"
doublenode* dll_create_node(data value)
{
    doublenode *node = calloc(1,sizeof(doublenode));
    node->value= value;
    node->prev = null;
    node-> next = null;
    return node;
}
doublenode* dll_prepend(doublenode* head,data value)
{

    doublenode* newnode= dll_create_node(value);
    newnode->next = head;
    if
        (head)
         head-> prev= newnode;
    return newnode;
}
void dll_insert_before (doublenode* node ,data value)
{
    doublenode* newnode = dll_create_node(value);
doublenode* origprev= node->prev;
node->prev= newnode;
newnode->prev=origprev;
newnode->next = node;
if (origprev)
    origprev->next =newnode;
}
void dll_insert_after (doublenode* node ,data value)
{
    doublenode* newnode = dll_create_node(value);
doublenode* orignext= node->next;
node->next= newnode;
newnode->next=orignext;
newnode->prev = node;
if (orignext)
    orignext->prev =newnode;
    }
    doublenode* dll_find(doublenode *head, data value)
    {
        doublenode *p;
        for(p=head;p!=null && p->value!= value;p=p->next);
        return p;
    }
    doublenode* dll_delete_node(doublenode *head,doublenode *node)
{
  if (node){
    doublenode *prev =node->prev;
    if (prev)
        prev->next =node->next;
    doublenode *next= node->next;
    if(next)
        next->prev=prev;
    free(node);
    return head == node? next:head;
  }
  return head;
}
