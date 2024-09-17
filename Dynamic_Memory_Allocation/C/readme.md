Types of Memory Allocation in C:

Static Memory Allocation:

1. Memory is allocated during compile-time.
2. The size of the variables (like arrays) must be known before the program runs.
3. Memory is allocated on the stack.
4. Once allocated, the size of the memory cannot be changed.
   Examples:
   int a = 10; // Memory allocated for 'a' is known at compile time
   int arr[5]; // Static array with 5 integers

Dynamic Memory Allocation:

1. Memory is allocated during runtime (execution of the program).
2. It allows the allocation of memory when the program is running and the size can be determined dynamically.
3. Memory is allocated on the heap and must be manually managed (freed when no longer needed).
4. C provides four functions from the <stdlib.h> library for dynamic memory allocation:

- malloc()
- calloc()
- realloc()
- free()
