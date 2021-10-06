#include<stdbool.h>
#define MAXSTACK 100
#ifndef stack_h_
#define stack_h_
typedef char stackentry;
typedef struct stack{
int tos;
stackentry elements [MAXSTACK];
}
stack;
void stack_init(stack *stack);
void stack_push
(stack *stack,stackentry item);
void stack_pop
(stack *stack, stackentry item);

bool stack_is_empty(stack *stack);
bool stack_is_full(stack *stack);
void stack_is_clear(stack *stack);
void stack_is_debug(stack *stack);
int stack_is_count(stack *stack);

#endif
