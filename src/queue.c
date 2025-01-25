#include "queue.h"

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

// Enqueue function
bool enqueue(SimpleQ* _sQueue, int value) 
{
    if (_sQueue->size < MAX_QUEUE_SIZE) 
    { 
        _sQueue->data[_sQueue->size++] = value;
        return true;
    }
    return false; 
}