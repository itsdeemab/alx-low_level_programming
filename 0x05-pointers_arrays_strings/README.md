# 0x05. C - Pointers, arrays and strings

C is a programming language that supports pointers, arrays, and strings as fundamental concepts.

* Pointers: In C, a pointer is a variable that holds the memory address of another variable. Pointers are used to manipulate data indirectly and to pass data between functions. Pointers are denoted by the * symbol in C.

* Arrays: In C, an array is a collection of elements of the same data type, stored in contiguous memory locations. Arrays are used to store and manipulate collections of data. Array elements are accessed using an index, starting from 0.

* Strings: In C, a string is a sequence of characters stored in an array of characters. Strings are terminated with a null character (\0). C provides a number of functions for manipulating strings, such as strlen() for getting the length of a string and strcpy() for copying one string to another.

Pointers, arrays, and strings are closely related in C. For example, an array name can be treated as a pointer to its first element, and pointers can be used to manipulate strings by accessing their individual characters. Additionally, pointers are often used to dynamically allocate memory for arrays and strings, allowing for more flexible memory management in C programs.


## Lessons Learned

* What are pointers and how to use them
* What are arrays and how to use them
* What are the differences between pointers and arrays
* How to use strings and how to manipulate them
* Scope of variables


## Tasks

### 0. 98 Battery st.
* Prototype: void reset_to_98(int *n);
* File: 0-reset_to_98.c
This function takes in a single argument n, which is a pointer to an integer.
* The purpose of this function is to reset the integer value stored at the memory location that is pointed to by the n pointer to the value 98.
* The function accomplishes this by using the dereference operator * to assign the value 98 to the memory location pointed to by n.
* In other words, the function changes the value of the integer variable that n points to. The integer variable could be a local variable in the calling function or a dynamically allocated variable.

### 1. Don't swap horses in crossing a stream
* Prototype: void swap_int(int *a, int *b);
* File: 1-swap.c
This function takes in two arguments, both of which are pointers to integers a and b.
* The purpose of this function is to swap the values of the two integers that are pointed to by a and b.
* The function accomplishes this by using a temporary variable c to hold the value of the integer pointed to by a. Then it uses the dereference operator * to assign the value of the integer pointed to by b to the memory location pointed to by a. Finally, it assigns the value of c (which originally held the value of a) to the memory location pointed to by b.
* In other words, the function exchanges the values of the integer variables that a and b point to. The integer variables could be local variables in the calling function or dynamically allocated variables.

### 2. This report, by its very length, defends itself against the risk of being read
* Prototype: int _strlen(char *s);
* File: 2-strlen.c
This function takes in one argument, a pointer to a character string s.
* The purpose of this function is to determine the length of the string pointed to by s.
* The function accomplishes this by initializing a variable length to 0 and using a while loop to iterate over the characters in the string. Inside the loop, the function increments the length variable and advances the pointer s to the next character in the string. The loop continues until the null character '\0' is encountered, which indicates the end of the string.
* When the end of the string is reached, the function returns the value of the length variable, which is the total number of characters in the string (excluding the null character).

°°°Its Dee Mab, [2023/02/27 22:57]
### 3. I do not fear computers. I fear the lack of them
* Prototype: void _puts(char *str);
* File: 3-puts.c
This function takes in one argument, a pointer to a character string str.
* The purpose of this function is to print the string pointed to by str to the standard output stream, followed by a newline character ('\n').
* The function accomplishes this by using a while loop to iterate over each character in the string. Inside the loop, the function uses the _putchar function to print each character in the string, and then increments the index variable i to move to the next character in the string.
* After the loop finishes iterating over all the characters in the string, the function uses _putchar again to print a newline character ('\n'), which adds a line break to the end of the string.

### 4. I can only go one way. I've not got a reverse gear
* Prototype: void print_rev(char *s);
* File: 4-print_rev.c
This function is takes in one argument, a pointer to a character string s.
* The purpose of this function is to print the string pointed to by s in reverse order, followed by a newline character ('\n').
* The function accomplishes this by first iterating over the string to determine its length. It does this by using a while loop that increments an index variable i until it reaches the null character '\0'.
* After determining the length of the string, the function uses another while loop to iterate over the string again in reverse order. It does this by decrementing the index variable i from its last value to 0 and using the _putchar function to print each character in reverse order.
* After printing all the characters in the string in reverse order, the function uses _putchar to print a newline character ('\n'), which adds a line break to the end of the string.

### 5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes
* Prototype: void rev_string(char *s);
* File: 5-rev_string.c
This function takes in one argument, a pointer to a character string s.
* The purpose of this function is to reverse the string pointed to by s in place, meaning that the original string is modified rather than creating a new string.
* The function accomplishes this by first determining the length of the string using a while loop that increments a variable len until it reaches the null character '\0'.
* After determining the length of the string, the function uses a for loop to iterate over the first half of the string. Inside the loop, the function swaps the characters at the current index i with the corresponding character at the opposite end of the string (i.e., at index len-i-1). This effectively reverses the order of the characters in the string.
* To swap two characters, the function uses a temporary variable j to hold the value of the character at index i before overwriting it with the character at index len-i-1. Then, the character at index len-i-1 is overwritten with the value of j, which now contains the original value of the character at index i.
* After iterating over the first half of the string and swapping each character with its corresponding character at the opposite end of the string, the function has effectively reversed the order of the characters in the string.

### 6. Half the lies they tell about me aren't true
* Prototype: void puts2(char *str);
* File: 6-puts2.c
This function prints every other character of a string, starting with the first character.
* The function takes a pointer to a string as its parameter. It initializes an integer variable i to 0 and starts a for loop to iterate through each character in the string.
* For each character in the string, it checks if the index i is even using the modulus operator %. If i is even (i.e., the remainder of i / 2 is 0), it calls the _putchar function to print the character.
* After printing every other character, the function prints a newline character using _putchar('\n') to end the line.

°°°Its Dee Mab, [2023/02/27 22:57]
### 7. Winning is only half of it. Having fun is the other half
* Prototype: void puts_half(char *str);
* File: 7-puts_half.c
This function takes a pointer to a string as an argument and prints the second half of the string to the console.
* It first uses a for loop to calculate the length of the string. The loop continues until it reaches the null character (\0) at the end of the string, and keeps track of the number of characters in the string by incrementing i.
* The i variable is then incremented by one to account for the null character at the end of the string.
* The function then uses another for loop to iterate over the second half of the string. It starts at the index i/2 and continues until it reaches the end of the string.
* Inside the loop, the _putchar function is called to print each character in the second half of the string to the console.
* Finally, a newline character (\n) is printed to move the cursor to the next line.

### 8. Arrays are not pointers
* Prototype: void print_array(int *a, int n);
* File: 8-print_array.c
The function takes two parameters, a pointer to an integer array named a and an integer named n that specifies the number of elements to be printed.
* The function then iterates over each element of the array using a for loop with a counter i. The loop continues until the value of i becomes equal to the value of n.
* Inside the loop, each element of the array is printed using the printf function. The format specifier %d is used to print the integer value. If the loop is not on the last element of the array, the function also prints a comma and a space after the element.
* After the loop, a newline character is printed using the printf function to start a new line.
* Therefore, the overall purpose of this function is to print the elements of an integer array separated by commas and spaces, up to the specified number of elements.

### 9. strcpy
* Prototype: char *_strcpy(char *dest, char *src);
* File: 9-strcpy.c
The function takes two parameters, a pointer to the destination buffer dest and a pointer to the source string src to be copied.
* The function starts by creating a new pointer p that points to the same location as dest. The reason for doing this is that the function needs to return a pointer to the beginning of the destination string after it has been copied, but it also needs to modify the destination string as it copies it. By using a separate pointer p, the function can modify the destination string while still being able to return a pointer to its beginning.
* The function then enters a loop that continues until it reaches the end of the source string, indicated by the null byte '\0'. Inside the loop, each character of the source string is copied to the corresponding location in the destination string using the dereference operator * and the post-increment operator ++. This has the effect of copying each character from src to p and then moving both pointers to the next character in their respective strings.
* After the loop completes, the null byte '\0' is appended to the end of the destination string using the pointer p. This marks the end of the copied string.
* Finally, the function returns a pointer to the beginning of the destination string, which was saved in p at the beginning of the function. This allows the caller of the function to access the copied string.



## Feedback

If you have any feedback, please reach out to me at hello@itsdeemab.com
*     °°°Its Dee Mab