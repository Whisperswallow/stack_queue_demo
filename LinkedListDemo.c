/*
 * LinkedListDemo.c
 *
 *  Created on: 2021¦~8¤ë17¤é
 *      Author: user
 */


#include <stdio.h>
#include <stdlib.h>
#include "lib/stack.h"
#include "lib/queue.h"

int main(){

	printf("\n========stack demo==========\n");

	Stack myStack = newstack();
	printf("length: %d\n",stackLength(&myStack));
	push(&myStack,1.24343);
	printf("length: %d\n",stackLength(&myStack));
	push(&myStack,2.48123);
	printf("length: %d\n",stackLength(&myStack));
	printf("%.5f\n",pop(&myStack));
	printf("length: %d\n",stackLength(&myStack));
	push(&myStack,3.65844);
	printf("length: %d\n",stackLength(&myStack));
	printf("%.5f\n",pop(&myStack));
	printf("length: %d\n",stackLength(&myStack));
	printf("%.5f\n",pop(&myStack));
	printf("length: %d\n",stackLength(&myStack));


	printf("\n========queue demo==========\n");
	Queue myQueue = newqueue();
	printf("length: %d\n",queueLength(&myQueue));
	enqueue(&myQueue,7.5);
	printf("length: %d\n",queueLength(&myQueue));
	enqueue(&myQueue,234.1);
	printf("length: %d\n",queueLength(&myQueue));
	enqueue(&myQueue,32.86);
	printf("length: %d\n",queueLength(&myQueue));
	enqueue(&myQueue,41.41);
	printf("length: %d\n",queueLength(&myQueue));
	printf("%.5f\n",dequeue(&myQueue));
	printf("length: %d\n",queueLength(&myQueue));
	printf("%.5f\n",dequeue(&myQueue));
	printf("length: %d\n",queueLength(&myQueue));
	printf("%.5f\n",dequeue(&myQueue));
	printf("length: %d\n",queueLength(&myQueue));
	printf("%.5f\n",dequeue(&myQueue));
	printf("length: %d\n",queueLength(&myQueue));
}
