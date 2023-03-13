
# 0x0B. C - malloc, free

`malloc` and `free` are two functions in C that are used for dynamic memory allocation. Dynamic memory allocation is the process of allocating memory for variables or data structures at runtime, rather than at compile time.

`malloc` stands for `"memory allocation"` and is used to allocate a block of memory of a specified size. The syntax for malloc is:
```bash
void* malloc(size_t size);
```
Here, size is the number of bytes to allocate, and the return value is a void pointer to the beginning of the allocated memory block. If the allocation fails, malloc returns `NULL`.

`free` is used to deallocate memory that was previously allocated with `malloc`. The syntax for `free` is:
```bash
void free(void* ptr);
```
Here, `ptr` is a pointer to the beginning of the memory block that was previously allocated with `malloc`. After calling `free`, the memory block is no longer allocated and can be reused by the program.

Here's an example of using `malloc` and `free` to allocate and deallocate memory for an array of integers:
```bash
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int* arr;
    int size = 10;

    /* Allocate memory for an array of size integers */
    arr = (int*) malloc(size * sizeof(int));
    if (arr == NULL) 
    {
        printf("Error: memory allocation failed\n");
        return (1);
    }

    /* Initialize the array with some values */
    for (int i = 0; i < size; i++) 
    {
        arr[i] = i * 2;
    }

    /* Print the array
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    /* Deallocate the memory */
    free(arr);

    return (0);
}
```
In this example, we first allocate memory for an array of 10 integers using `malloc`. We then initialize the array with some values, print it to the console, and finally deallocate the memory using `free`. It's important to always deallocate memory that was previously allocated with malloc to avoid memory leaks.
## Lessons Learned

* What is the difference between automatic and dynamic allocation
* What is malloc and free and how to use them
* Why and when to use malloc
* How to use valgrind to check for memory leaks


## Documentation
### Tasks

0. Float like a butterfly, sting like a bee
* Prototype: `char *create_array(unsigned int size, char c);`
* File: `0-create_array.c`

1. The woman who has no imagination has no wings
* Prototype: `char *_strdup(char *str);`
* File: `1-strdup.c`

2. He who is not courageous enough to take risks will accomplish nothing in life
* Prototype: `char *str_concat(char *s1, char *s2);`
* File: `2-str_concat.c`

3. If you even dream of beating me you'd better wake up and apologize
* Prototype: `int **alloc_grid(int width, int height);`
* File: `3-alloc_grid.c`

4. It's not bragging if you can back it up
* Prototype: `void free_grid(int **grid, int height);`
* File: `4-free_grid.c`

### Advanced

## Feedback

If you have any feedback, please reach out to me at hello@itsdeemab.com


