#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "stack.h"
static void error(char* message) {
  fprintf(stderr, "Error: %s\n", message);
  exit(-1);
  }
  void stack_init(stack* stack)
 {
  stack->tos = 0;
}bool stack_is_full(stack *stack){
  return stack->tos >= MAXSTACK;
}

bool stack_is_empty(stack *stack){
  return stack->tos == 0;
}
void stack_debug(stack *stack){
for(int i = 0; i < stack->tos; i++)
printf("%c ", stack->elements[i]);
      printf( "\n");
}
void stack_push(stack *stack, stackentry item){
  if(stack_is_full(stack))
error("Stack is full");
  else
    stack->elements[stack->tos++] = item;
}
void stack_pop(stack *stack, stackentry item){
if(stack_is_empty(stack))
error("stack is empty" );
  else{
item = stack->elements[--stack->tos];
  }}
  void stack_clear(stack *stack) {
stack->tos =0;
}int stack_count(stack *stack){

	return stack->tos;
}
