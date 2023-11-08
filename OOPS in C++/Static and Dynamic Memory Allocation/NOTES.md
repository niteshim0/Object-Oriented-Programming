## Stack and Heap Memory Concept in C++

In C++, memory is categorized into two main types: stack memory and heap memory:-

### Stack Memory:

1. **Definition:** Stack memory is a limited memory used for storing local variables and function call information. It operates in a Last-In, First-Out (LIFO) manner.

2. **Characteristics:**
   - Automatic memory allocation and deallocation are handled by the compiler.
   - Faster allocation and deallocation compared to heap memory.
   - Limited size, which can lead to stack overflow errors if the memory limit is exceeded.

3. **Usage:**
   - Recommended for variables with a limited scope and lifetime, such as local variables and function parameters.

### Heap Memory:

1. **Definition:** Heap memory is a larger pool of memory that can be dynamically allocated and deallocated during program execution. It operates in a First-In, First-Out (FIFO) manner.

2. **Characteristics:**
   - Memory allocation and deallocation are manually controlled using memory management functions like `new` and `delete` or smart pointers.
   - Suitable for storing data structures or objects with a longer lifetime and dynamic memory allocation requirements.
   - Improper management can lead to memory leaks or fragmentation issues.
   - One can directly access variables inside heap since they return address not value.
   - Variables are created using `new` keyword in heap memory. e.g, char *ch = new cha;

3. **Usage:**
   - Suitable for dynamically allocated data structures, objects with a longer lifetime, or when memory requirements are unknown at compile time.

## Static Memory Allocation and Dynamic Memory Allocation in C++

In C++, memory allocation can be categorized into two main types: static memory allocation and dynamic memory allocation.

### Static Memory Allocation:

1. **Definition:** Static memory allocation refers to the allocation of memory for variables during compile time. The memory for these variables is allocated from the stack.

2. **Characteristics:**
   - Memory is allocated at the beginning of program execution and deallocated automatically when the program terminates.
   - Variables allocated with static memory allocation have a fixed size and lifetime throughout the program's execution.

3. **Usage:**
   - Use static memory allocation for variables with a fixed size and lifetime, such as local variables, global variables, and static variables.

### Dynamic Memory Allocation:

1. **Definition:** Dynamic memory allocation refers to the allocation of memory during runtime. The memory for these variables is allocated from the heap.

2. **Characteristics:**
   - Memory is allocated and deallocated manually using functions such as `new`, `delete`, `malloc`, and `free` unlike Java where it is done by Garbage Collector.
   - Variables allocated with dynamic memory allocation have a flexible size and lifetime, depending on the program's execution flow.

3. **Usage:**
   - Use dynamic memory allocation when the size of the variable is not known at compile time, or when you need to manage memory explicitly, such as for data structures, arrays, or objects.




