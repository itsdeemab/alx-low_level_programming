
# 0x06. C - More pointers, arrays and strings

Fun facts about pointers, arrays, and strings in C programming:

* In C programming, arrays and pointers are closely related. In fact, the name of an array is a pointer to the first element of the array.

* Arrays and pointers can be used interchangeably in most contexts. For example, the expression arr[i] is equivalent to *(arr + i).

* Strings in C are represented as arrays of characters, terminated by a null character '\0'.

* When you declare an array in C, the memory is allocated in contiguous blocks. This means that the elements of the array are stored in adjacent memory locations.

* The sizeof operator in C can be used to determine the size of an array or a data type. For example, sizeof(int) will return the number of bytes required to store an integer.

* Pointers can be used to access and manipulate data in arrays. For example, you can use a pointer to iterate over the elements of an array.

* Pointers can also be used to allocate memory dynamically using functions like malloc and calloc.

* One common mistake in C programming is to forget to allocate memory for a string before using it. This can lead to unexpected behavior or even crashes.

* Another common mistake is to access memory outside the bounds of an array, which can also lead to unexpected behavior or crashes.

* Pointers can be used to create linked lists, trees, and other data structures in C. These data structures can be used to represent complex relationships between data elements.


## Lessons Learned

* What are pointers and how to use them
* What are arrays and how to use them
* What are the differences between pointers and arrays
* How to use strings and how to manipulate them
* Scope of variables


## Tasks

### 0. strcat
* Prototype: `char *_strcat(char *dest, char *src);`
* File: `0-strcat.c`

### 1. strncat
* Prototype: `char *_strncat(char *dest, char *src, int n);`
* File: `1-strncat.c`

### 2. strncpy
* Prototype: `char *_strncpy(char *dest, char src, int n);`
* File: `2-strncpy.c`

### 3. strcmp
* Prototype: `int _strcmp(char *s1, char *s2);`
* File: `3-strcmp.c`

### 4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy
* Prototype: `void reverse_array(int *a, int n);`
* File: `4-rev_array.c`

### 5. Always look up
* Prototype: `char *string_toupper(char *);`
* File: `5-string_toupper.c`

### 6. Expect the best. Prepare for the worst. Capitalize on what comes
* Prototype: char *cap_string(char *);
* File: 6-cap_string.c

### 7. Mozart composed his music not for the elite, but for everybody

## Feedback

If you have any feedback, please reach out to us at hello@itsdeemab.com

