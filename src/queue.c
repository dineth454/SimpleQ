#include "queue.h"

// Constructor-like function to initialize SimpleQ
SimpleQ* create_queue() 
{
    SimpleQ* newQueue = (SimpleQ*)malloc(sizeof(SimpleQ)); // Dynamically allocate memory
    if (newQueue != NULL) 
    {
        newQueue->size = 0;
        newQueue->head = 0;     // Initialize head index
        newQueue->tail = 0;     // Initialize tail index
    }
    return newQueue;
} 

// free resources
void destroy_queue(SimpleQ* _sQueue)
{
    if (_sQueue->data != NULL) 
    {
        free(_sQueue->data);        // free the dynamically allocated data array
    }
                                    // Reset other queue properties, if necessary
    _sQueue->size = 0;
    _sQueue->head = 0;
    _sQueue->tail = 0;
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
        return false;                                       // Return false if queue is full
    }

    _sQueue->data[_sQueue->tail] = value;                   // Insert value at tail
    _sQueue->tail = (_sQueue->tail + 1) % MAX_QUEUE_SIZE;   // Increment tail circularly
    _sQueue->size++;                                        // Increase the size
    return true;
}

// Dequeue function
bool dequeue(SimpleQ* _sQueue, int* value)
{
    if (is_empty(_sQueue)) 
    {
        return false;                                       // Fail if queue is empty
    }

    *value = _sQueue->data[_sQueue->head];                  // Retrieve value at head
    _sQueue->head = (_sQueue->head + 1) % MAX_QUEUE_SIZE;   // Increment head circularly
    _sQueue->size--;                                        // Decrease the size
    return true;                                            // Dequeue successful
}