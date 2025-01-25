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

// Check if size is zero; If so, return true
bool is_empty(SimpleQ* _sQueue)
{
    return _sQueue->size == 0;
}

// Check if queue size is reached to max; If so, return true
bool is_full(SimpleQ* _sQueue) 
{
    return _sQueue->size >= MAX_QUEUE_SIZE;
}

// Enqueue function
bool enqueue(SimpleQ* _sQueue, int value) 
{
    if (is_full(_sQueue)) 
    {
        return false;                       // Return false if queue is full
    }

    _sQueue->data[_sQueue->size++] = value; // Add value to the queue
    return true;
}

// Dequeue function
bool dequeue(SimpleQ* _sQueue, int* value)
{
    if (is_empty(_sQueue)) 
    {
        return false;                       // Fail if queue is empty
    }

    *value = _sQueue->data[0];              // Retrieve the first value
    for (int i = 1; i < _sQueue->size; i++) 
    {
        _sQueue->data[i - 1] = _sQueue->data[i]; // Shift all remaining items left
    }
    _sQueue->size--;                        // Decrease the size
    return true;                            // Dequeue successful
}