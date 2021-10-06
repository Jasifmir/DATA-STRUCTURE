#ifndef DOUBLY_LINKED_LIST
#define DOUBLY_LINKED_LIST
typedef int data;
typedef struct double_node
{

    data value;
    struct double_node *prev;
    struct double_node *next;

} doublenode;
doublenode* dll_create_node(data value ) ;
doublenode* dll_prepend(doublenode* head,data value);
void dll_insert_before(doublenode* node,data value);
void dll_insert_after(doublenode* node,data value);
doublenode* dll_delete_node(doublenode* head,data value);
doublenode* dll_find(doublenode* head,data value);
#endif
