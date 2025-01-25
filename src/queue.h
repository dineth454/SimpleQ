#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 50 // Maximum size of the queue

// Define SimpleQ with required attributes
typedef struct 
{
    int data[MAX_QUEUE_SIZE];       // Array to hold queue data
    size_t size;                    // current size of the queue
    int head;                       // Index of the first item
    int tail;                       // Index of the next available position for insertion
} SimpleQ;

// Declaration of the basic functions
SimpleQ* create_queue();
void destroy_queue(SimpleQ* _sQueue);
bool is_empty(SimpleQ* _sQueue);
bool is_full(SimpleQ* _sQueue);
bool enqueue(SimpleQ* _sQueue, int value);
bool dequeue(SimpleQ* _sQueue, int* value);

#endif /* QUEUE_H */