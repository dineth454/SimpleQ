#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>

// TODO: Define SimpleQ with required attributes
typedef struct 
{
    size_t size;        // current size of the queue
} SimpleQ;

// Declaration of the basic functions
SimpleQ* create_queue();
bool is_empty(SimpleQ* _sQueue);

#endif /* QUEUE_H */