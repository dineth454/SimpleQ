#include "unity.h"
#include "queue.h"

void setUp(void) {}     // Code to run before each test
void tearDown(void) {}  // Code to run after each test

void test_queue_operations(void) 
{
    SimpleQ* sQueue = create_queue();
    TEST_ASSERT_TRUE(is_empty(sQueue));    // Queue should be empty right after the

    bool result = enqueue();     
    TEST_ASSERT_TRUE(result);              // Successful enqueue returns true
    TEST_ASSERT_FALSE(is_empty(sQueue));   // Queue should not be empty
}

int main() 
{
    UNITY_BEGIN();
    RUN_TEST(test_queue_operations);
    return UNITY_END();
}