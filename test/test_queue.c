#include "unity.h"
#include "queue.h"

void setUp(void) {}     // Code to run before each test
void tearDown(void) {}  // Code to run after each test

void test_queue_operations(void) 
{
    SimpleQ sQueue;
    init_queue(&sQueue);
    TEST_ASSERT_TRUE(is_empty(&sQueue));    // Queue should be empty right after the initialization
}

int main() 
{
    UNITY_BEGIN();
    RUN_TEST(test_queue_operations);
    return UNITY_END();;
}