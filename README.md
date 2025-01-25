# SimpleQ
Implementation of a simple queue module in C language using Test Driven Development (TDD) approach. The queue allows operations such as enqueue, dequeue, checking if the queue is empty or full, and cleaning up resources with proper memory management.

## Solution Design

### 1. **Queue Structure**
- The queue uses an array of integers to store the elements.
- The queue maintains three primary properties:
  - `head`: The index of the first element in the queue.
  - `tail`: The index of the last element in the queue.
  - `size`: The current number of elements in the queue.

### 2. **Queue Operations**
The following operations are implemented:
- `init_queue()`: Initializes the queue with a specified capacity and allocates memory for the array.
- `enqueue()`: Adds an element to the rear of the queue, resizing if needed.
- `dequeue()`: Removes an element from the front of the queue.
- `is_empty()`: Checks if the queue is empty.
- `is_full()`: Checks if the queue is full.
- `destroy_queue()`: Frees the dynamically allocated memory and resets the queue to an empty state.

### 3. **Object-Oriented Principles in C**
Even though C is not an object-oriented language, object-oriented principles are used in the design:
- **Encapsulation**: The queue's state (size, head, tail, data) is encapsulated in the `SimpleQ` struct. This ensures that the queue's data is accessed only through defined functions (`init_queue()`, `enqueue()`, `dequeue()`, etc.).
- **Abstraction**: The internal workings of the queue (such as the array storage, memory management and circular buffer technique) are hidden from the user, providing a simple interface for interaction.
- **Constructor-like function**: Simulates a constructor's behavior by implementing explicit invocation.
- **Modularity**: The queue is implemented in its own module (queue.c, queue.h), making it reusable and maintainable.

### 4. **Testing and TDD Approach**
This project follows a TDD approach:
1. Initially, failing tests were committed, testing the queue's behavior such as enqueueing, dequeueing, checking for fullness/emptiness.
2. Code was written to pass each test case, and then refactored for clarity and efficiency.
3. The tests are written using the Unity testing framework to verify each operation of the queue.

## Project Structure

- **`queue.h`**: Contains the function declarations and the queue data structure definition.
- **`queue.c`**: Contains the implementation of all the queue functions, including initialization, enqueue, dequeue, and destruction.
- **`test_queue.c`**: Contains unit tests written using the Unity framework to test the functionality of the queue.

## How to Build and Run the Tests

1. Clone the repository:
   ```bash
   git clone https://github.com/dineth454/SimpleQ.git
   cd SimpleQ
2. Install Unity testing framework: Follow the instructions provided in the Unity documentation (https://github.com/ThrowTheSwitch/Unity/blob/master/README.md) to set up Unity.
3. Build the project: You can use the provided Makefile to compile the project. Run the following command:
   ```bash
   make
4. Run the tests: After building, run the tests using the Unity test runner:
   ```bash
   ./test_simpleq
5. Clean the project: To clean up object files and binaries, run:
   ```bash
   make clean
