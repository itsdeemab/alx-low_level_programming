
# 0x07-pointers_arrays_strings

![Banner](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/218/58fe6b229144b7fe5ebe88afe9ff5cabe2dd0863e1e79b2d02b4103c30b465dd.jpg)


## Lessons Learned

* What are pointers to pointers and how to use them
* What are multidimensional arrays and how to use them
* What are the most common C standard library functions to manipulate strings



## Documentation

### Tasks

0. memset


* Prototype: `char *_memset(char *s, char b, unsigned int n);`
* File: `0-memset.c`
This function takes three arguments: a pointer to a memory area `s` that needs to be filled with a constant byte `b`, and the number of bytes `n` to fill.

The function then loops through the memory area pointed to by `s` and fills each byte with the value of `b`. It does this by using pointer arithmetic to access each byte in the memory area.

After filling the memory area, the function returns a pointer to the start of the memory area `s`.

1. memcpy
* Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`
* File: `1-memcpy.c`
This function takes three arguments: a pointer to the destination memory area `dest`, a pointer to the source memory area `src`, and the number of bytes `n` to copy.

The function then loops through the source memory area pointed to by `src`, copies each byte, and stores it in the destination memory area pointed to by `dest`. It does this by using pointer arithmetic to access each byte in both memory areas.

After copying the memory area, the function returns a pointer to the start of the destination memory area `dest`.

2. strchr
* Prototype: `char *_strchr(char *s, char c);`
* File: `2-strchr.c`
This function takes two arguments: a pointer to the string `s` to be searched and the character `c` to be located in the string.

The function then loops through the string `s` until it reaches the end of the string or it finds the first occurrence of the character c. If the character is found, it returns a pointer to that location in the string `s`.

If the character `c` is not found in the string s, the function returns a NULL `('\0')` pointer to indicate that the character was not found.

3. strspn
* Prototype: `unsigned int _strspn(char *s, char *accept);`
* File: `3-strspn.c`
This function takes two arguments: a pointer to the string `s` to be searched and a pointer to the string `accept` containing the characters to match.

The function then loops through the string `s` and compares each character with the characters in the string `accept`. For each character in `s`, the function checks whether it matches any character in accept. If a match is found, the function increments a counter `len` and continues to the next character in `s`. If a character in `s` is not found in `accept`, the function returns the length of the prefix substring found so far.

If the entire string `s` consists of only characters in `accept`, the function returns the length of the entire string `s`.

4. strpbrk
* Prototype: `char *_strpbrk(char *s, char *accept);`
* File: `4-strpbrk.c`
This function takes two arguments: a pointer to the string `s` to be searched and a pointer to the string `accept` containing the characters to match.

The function then loops through the string `s` and compares each character with the characters in the string accept. For each character in `s`, the function checks whether it matches any character in `accept`. If a match is found, the function returns a pointer to that location in the string `s`. If no matching character is found, the function returns a NULL `('\0')` pointer to indicate that no matching byte was found.

5. strstr
* Prototype: `char *_strstr(char *haystack, char *needle);`
* File: `5-strstr.c`
This function takes two arguments: a pointer to the string `haystack` to be searched and a pointer to the string `needle` containing the substring to be found.

If the string `needle` is empty, the function returns a pointer to the beginning of the string `haystack`.

The function then loops through the string `haystack` and checks whether the first character of `needle` matches any character in `haystack`. If a match is found, the function loops through the string `needle` and checks whether the remaining characters match the characters in `haystack` starting from the matching position. If all characters in `needle` match, the function returns a pointer to the beginning of the located substring in `haystack`. If no match is found, the function returns a NULL `('\0')` pointer to indicate that the substring was not found in `haystack`.

6. Chess is mental torture
* Prototype: `void print_chessboard(char (*a)[8]);`
* File: `7-print_chessboard.c`
This function takes a 2D array `a` of size `8x8` as its argument, which represents the chessboard. The function loops through the `rows` and `columns` of the array, and prints each element of the array using the `_putchar` function. After printing each row, the function adds a newline character `(\n)` to move to the next row. The result is a printed representation of the chessboard.

7. The line of life is a ragged diagonal between duty and desire
* Prototype: `void print_diagsums(int *a, int size);`
* File: `8-print_diagsums.c`
The function initializes two variables `sum1` and `sum2` to zero, and then loops over the rows of the matrix. In each iteration, it adds the diagonal element at position `(i, i)` (from top-left to bottom-right diagonal) to `sum1`, and the diagonal element at position `(i, size-i-1)` (from top-right to bottom-left diagonal) to `sum2`. Finally, it prints the values of `sum1` and `sum2` separated by a comma.

Note: This implementation assumes that the matrix is stored in row-major order, meaning that the elements of each row are stored contiguously in memory.

8. Double pointer, double fun
* Prototype: `void set_string(char **s, char *to);`
* File: `100-set_string.c`
The function takes a double pointer to the string `s` that needs to be set and a pointer to to the new string value. The function simply dereferences the pointer `s` to get the pointer `to` the string, and sets it to the value of the pointer `to`. This way, the original pointer to the string `s` now points to the new string `to`. Note that the function does not allocate any memory for the new string, it simply changes the value of the pointer.
## Feedback

If you have any feedback, please reach out to us at hello@itsdeemab.com


