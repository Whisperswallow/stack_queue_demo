/*
 * stack.h
 *
 *  Created on: 2021¦~8¤ë17¤é
 *      Author: user
 */

#ifndef STACK_H_
#define STACK_H_

typedef struct stack_node{
	double data;
	struct stack_node *next;
}StackPtr;

typedef struct{
	StackPtr *head;
}Stack;

Stack newstack();
void push(Stack *s,double x);
double pop(Stack *s);

int stackLength(Stack *s);

#endif /* STACK_H_ */
