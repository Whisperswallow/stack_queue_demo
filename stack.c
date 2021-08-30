/*
 * stack.c
 *
 *  Created on: 2021年8月17日
 *      Author: user
 */


#include <stdio.h>
#include <stdlib.h>
#include "lib/stack.h"

Stack newstack(){
	Stack s;
    s.head = NULL;
    return s;
}

// push
void push(Stack *s,double x){
	StackPtr *top;
	top=(StackPtr*)malloc(sizeof(StackPtr));
	top->data=x;
	top->next=(*s).head;
	(*s).head=top;
}

// pop
double pop(Stack *s){
	StackPtr *top;
	if((*s).head==NULL){ // Stack 已經空了
		printf("Stack Underflow!");
		exit(1);
	}else{
		double x;

		x = ((*s).head)->data;
		top = (*s).head;
		(*s).head = ((*s).head)->next;

		free(top);

		return x;
	}
}

int stackLength(Stack *s){
	int ct = 0;
	StackPtr *temp = (*s).head;
	while(temp!=NULL){
		temp = temp->next;
		ct++;
	}
	return ct;
}
