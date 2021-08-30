/*
 * queue.c
 *
 *  Created on: 2021年8月17日
 *      Author: user
 */


#include <stdio.h>
#include <stdlib.h>
#include "lib/queue.h"

Queue newqueue(){
	Queue q;
	q.front = q.tail = NULL;
	return q;
}

// enqueue
/*
void enqueue(QueuePtr **head, QueuePtr **tail, double x){
	QueuePtr *newNode;

	newNode=(QueuePtr*)malloc(sizeof(QueuePtr));
	newNode->data=x;
	newNode->next=NULL;

	if(*head==NULL){
		*head = newNode;
		*tail = newNode;
	} else {
		(*tail)->next = newNode;
		*tail = newNode;
	}
}
*/

void enqueue(Queue *q, double x){
	QueuePtr *newNode;

	newNode=(QueuePtr*)malloc(sizeof(QueuePtr));
	newNode->data=x;
	newNode->next=NULL;

	if((*q).front==NULL){
		(*q).front = newNode;
		(*q).tail = newNode;
	} else {
		(*q).tail->next = newNode;
		(*q).tail = newNode;
	}
}

// dequeue
double dequeue(Queue *q){
	QueuePtr *temp;
	float item;

	if((*q).front==NULL){ // queue 已經空了
		printf("Queue empty!");
		exit(1);
	} else {
		item = ((*q).front)->data;
		temp = (*q).front;
		(*q).front = ((*q).front)->next;

		free(temp);

		return (item);
	}
}

int queueLength(Queue *q){
	int ct = 0;
	QueuePtr *temp = (*q).front;
	while(temp!=NULL){
		temp = temp->next;
		ct++;
	}
	return ct;
}
