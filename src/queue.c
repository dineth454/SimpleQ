#include "queue.h"

// Initialize the queue
void init_queue(SimpleQ* _sQueue) 
{
    _sQueue->size = 0;
}    

bool is_empty(SimpleQ* _sQueue)
{
    return _sQueue->size == 0;
}