#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>

// Define SimpleQ with required attributes
typedef struct 
{
    size_t size;                    // current size of the queue
} SimpleQ;

// Declaration of the basic functions
SimpleQ* create_queue();
bool is_empty(SimpleQ* _sQueue);
bool enqueue();

#endif /* QUEUE_H */