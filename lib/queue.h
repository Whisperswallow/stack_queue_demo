/*
 * queue.h
 *
 *  Created on: 2021¦~8¤ë17¤é
 *      Author: user
 */

#ifndef QUEUE_H_
#define QUEUE_H_

typedef struct queue_node{
	double data;
	struct queue_node *next;
}QueuePtr;

typedef struct{
	QueuePtr *front, *tail;
}Queue;

Queue newqueue();

void enqueue(Queue *q, double x);
double dequeue(Queue *q);
int queueLength(Queue *q);

#endif /* QUEUE_H_ */
