#include "unity.h"
#include "queue.h"

void setUp(void) {}     // Code to run before each test
void tearDown(void) {}  // Code to run after each test

void test_queue_operations(void) 
{
    SimpleQ* sQueue = create_queue();
    TEST_ASSERT_TRUE(is_empty(sQueue));    // Queue should be empty right after the

    bool result = enqueue(sQueue, 5);     
    TEST_ASSERT_TRUE(result);              // Successful enqueue returns true
    TEST_ASSERT_FALSE(is_empty(sQueue));   // Queue should not be empty

    int dq_value;
    bool dq_result = dequeue(sQueue, &dq_value); 
    TEST_ASSERT_TRUE(dq_result);           // Successful dequeue returns true
    TEST_ASSERT_EQUAL(5, dq_value);        // Assert the dequeued value is correct
    TEST_ASSERT_TRUE(is_empty(sQueue));    // Queue should now be empty

    free(sQueue);
}

int main() 
{
    UNITY_BEGIN();
    RUN_TEST(test_queue_operations);
    return UNITY_END();
}