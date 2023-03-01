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
A function that concatenates two strings.

* The function first initializes two variables, `dest_len` and `i`, to zero. `dest_len` will be used to keep track of the length of the destination string, and `i` will be used to iterate through the source string.
* The function then enters a loop that iterates through the destination string until it finds the null character at the end of the string. The purpose of this loop is to find the length of the destination string, which will be used later to append the source string.
* The function then enters another loop that iterates through the source string until it finds the null character at the end of the string. For each character in the source string, the function copies the character to the end of the destination string, starting at the index `dest_len` + `i`. The variable `i` is incremented by 1 for each character in the source string.
* Once the end of the source string is reached, the function appends a null character to the end of the concatenated string by setting `dest[dest_len + i]` to the null character.

Finally, the function returns a pointer to the destination string.


### 1. strncat
* Prototype: `char *_strncat(char *dest, char *src, int n);`
* File: `1-strncat.c`
A function that concatenates two strings.
* The function works in a similar way to the `_strcat` function, but it takes an additional argument, `n`, which specifies the maximum number of bytes to be used from the `src` string. The function first finds the length of the destination string by iterating through it until it finds the terminating null byte. It then appends the source string to the end of the destination string by iterating through it until it finds the terminating null byte or until it has copied `n` bytes. Finally, it adds the terminating null byte to the end of the concatenated string and returns a pointer to the resulting string.

### 2. strncpy
* Prototype: `char *_strncpy(char *dest, char src, int n);`
* File: `2-strncpy.c`
A function that copies a string.
* The function initializes a variable `i` to zero. The function then enters a loop that iterates through the first `n` bytes of the source string or until it finds the null character at the end of the string. 
* For each character in the source string, the function copies the character to the destination string, starting at the index `i`. The variable `i` is incremented by 1 for each character copied.
* Once the first `n` bytes of the source string have been copied, the function enters another loop that pads the remaining bytes in the destination string with null characters. For each remaining byte, the function sets the corresponding element in the destination string to the null character.
Finally, the function returns a pointer to the destination string.

### 3. strcmp
* Prototype: `int _strcmp(char *s1, char *s2);`
* File: `3-strcmp.c`
A function that compares two strings.
* The function works in a similar way to the `strcmp` function. It takes two arguments: `pointers` to the two strings to be compared. The function then compares each character in the two strings until a difference is found or the end of the string is reached. If both strings have the same length and all characters match, the function returns zero. If one string is longer than the other, the function returns a positive or negative number, respectively.

### 4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy
* Prototype: `void reverse_array(int *a, int n);`
* File: `4-rev_array.c`
A function that reverses the content of an array of integers.
* The function takes two arguments: a pointer to the first element of an array of integers, `a`, and the number of elements in the array, `n`.
* The function initializes two variables, `i` and `j`, to the first and last index of the array, respectively.
* The function enters a loop that swaps the first and last element, the second and second-last element, and so on, until the middle of the array is reached. For each iteration of the loop, the function swaps the element at index `i` with the element at index `j`, and then increments `i` and decrements `j`.
* Once the loop has finished, the function has reversed the content of the array in place.

### 5. Always look up
* Prototype: `char *string_toupper(char *);`
* File: `5-string_toupper.c`
A function that changes all lowercase letters of a string to uppercase.
* The function takes a single argument: a pointer to a null-terminated string, `str`.

The function initializes a variable, `i`, to zero, and enters a loop that iterates over each character in the string. The loop continues until it reaches the null terminator at the end of the string.
* For each character in the string, the function checks whether it is a lowercase letter by testing whether its ASCII code is between the ASCII codes for `'a'` and `'z'`. If the character is a lowercase letter, the function subtracts 32 from its ASCII code to convert it to uppercase.
* Once the loop has finished, the function has modified the string in place by changing all lowercase letters to uppercase.

### 6. Expect the best. Prepare for the worst. Capitalize on what comes
* Prototype: char *cap_string(char *);
* File: 6-cap_string.c
A function that capitalizes all words of a string.
* The function takes a single argument: a pointer to a null-terminated string, `str`.
* The function initializes a variable, `i`, to zero, and enters a loop that iterates over each character in the string. The loop continues until it reaches the null terminator at the end of the string.
* For each character in the string, the function checks whether it is the first letter of a word. A letter is considered the first letter of a word if it is either the first character in the string or if the previous character is a space, tab, newline, comma, semicolon, period, exclamation point, question mark, double quote, left parenthesis, right parenthesis, left brace, or right brace.
* If the character is the first letter of a word and is a lowercase letter, the function subtracts 32 from its ASCII code to convert it to uppercase.
* Once the loop has finished, the function has modified the string in place by capitalizing all the first letters of words.

### 7. Mozart composed his music not for the elite, but for everybody

* The `leet` function takes a string `s` as input and returns a pointer to the encoded string. The encoding is done by replacing each letter in the string with a corresponding `"1337"` character using the `leet` array.
* The `leet` array contains pairs of characters, where the first character is the letter to be replaced and the second character is the corresponding "1337" character. The array is arranged so that the first 10 characters represent the letters to be replaced, and the last 10 characters represent the "1337" characters.
* The implementation uses two loops: the outer loop iterates over each character in the input string, and the inner loop iterates over the `leet` array to find the corresponding `"1337"` character for the current letter.
* If a match is found, the current letter is replaced with the corresponding `"1337"` character and the inner loop is exited. If no match is found, the current letter is left unchanged.
## Feedback

If you have any feedback, please reach out to me at hello@itsdeemab.com
