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
} SimpleQ;

// Declaration of the basic functions
SimpleQ* create_queue();
bool is_empty(SimpleQ* _sQueue);
bool is_full(SimpleQ* _sQueue);
bool enqueue(SimpleQ* _sQueue, int value);

#endif /* QUEUE_H */