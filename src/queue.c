#include "queue.h"

// Initialize the queue
// Constructor-like function to initialize SimpleQ
SimpleQ* create_queue() 
{
    SimpleQ* newQueue = (SimpleQ*)malloc(sizeof(SimpleQ)); // Dynamically allocate memory
    if (newQueue != NULL) 
    {
        newQueue->size = 0;
    }
    return newQueue;
} 

bool is_empty(SimpleQ* _sQueue)
{
    return _sQueue->size == 0;
}