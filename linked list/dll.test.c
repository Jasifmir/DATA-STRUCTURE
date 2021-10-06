#include<stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "doubly_linked_list.h"
void print_list(doublenode *head)
{

     for(doublenode* P=head; P!= null; P= P ->next)
        printf("%d",P->value);
    printf("\n");

}
int main(void)
{

    doublenode *head= null;
    for(int i=0;i<10;i++)
        head=dll_prepend(head,i);
    print_list(head);
    assert(dll_find(head,11)== null);

    doublenode* value_5 =dll_find(head, 5);
    dll_insert_before(value_5,11);

    dll_insert_after(value_5,12);
    print_list(head);

    assert(dll_find(head, 9)!=null);
    doublenode *value_nine= dll_find(head,9);

    printf("deleting 9 \n");
    head= dll_delete_node(head,value_nine);

    print_list(head);
    assert(dll-find(head,8)!=null);

    doublenode *value_eight =dll_find(head,8);

    printf("deleting  8 \n");
    head = dll_delete_node(head,value_eight);
    print_list(head);
