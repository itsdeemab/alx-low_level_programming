# 0x04. C - More functions, more nested loops

alx software engineering course, Task: 0x04. C - More functions, more nested loops - C programming.

## Lessons Learned

- What are nested loops and how to use them
- What is a function and how do you use functions
- What is the difference between a declaration and a definition of a function
- What is a prototype
- Scope of variables
- What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89
- What are header files and how to to use them with #include

## Tasks

-     0. isupper

  A function that checks for uppercase character.

- How the function works.

The function compares the ASCII value of the character c with the ASCII values of 'A' and 'Z'. If the ASCII value of c is between 'A' and 'Z', inclusive, then it is an uppercase character, and the function returns 1. Otherwise, the function returns 0.

-     1. isdigit

  A function that checks for a digit (0 through 9).

- How the function works.

The function compares the ASCII value of the character c with the ASCII values of '0' and '9'. If the ASCII value of c is between '0' and '9', inclusive, then it is a digit, and the function returns 1. Otherwise, the function returns 0.

-     2-mul.c

  A function that multiplies two integers.

- How the function works.

The function takes two arguments a and b of type int, which represent the integers to be multiplied. The function returns the product of a and b.

To multiply two integers, the function simply returns the result of the expression a \* b.

-     3-print_numbers.c

  A function that prints the numbers, from 0 to 9, followed by a new line.

- How the function works.

This function takes no arguments. It simply prints the numbers from 0 to 9, followed by a new line.

To print the numbers from 0 to 9, the function uses a for loop that iterates from 0 to 9. Inside the loop, it calls the \_putchar function to print the ASCII representation of the current number. Since the ASCII codes for the digits 0 to 9 are consecutive, we can print each digit by adding the loop counter i to the ASCII code of '0'. Finally, after the loop completes, the function prints a new line character using \_putchar('\n').

-     4-print_most_numbers.c

  a function that prints the numbers, from 0 to 9, while exluding 2 and 4, followed by a new line.

- How the function works.

This function takes no arguments. It prints the numbers from 0 to 9, excluding 2 and 4, followed by a new line.

To print the numbers from 0 to 9 (excluding 2 and 4), the function uses a for loop that iterates from 0 to 9. Inside the loop, it checks if the current number is not 2 and not 4. If the condition is true, the function calls \_putchar to print the ASCII representation of the current number. Since the ASCII codes for the digits 0 to 9 are consecutive, we can print each digit by adding the loop counter i to the ASCII code of '0'. Finally, after the loop completes, the function prints a new line character using \_putchar('\n').

-     5-more_numbers.c

  A function that prints 10 times the numbers, from 0 to 14, followed by a new line.

- How the function works.

To print the numbers from 0 to 14, the function uses a nested for loop. The outer loop iterates 10 times to print the numbers 10 times. The inner loop iterates from 0 to 14 to print the numbers from 0 to 14. Inside the inner loop, the function checks if the current number is greater than 9. If the condition is true, the function first prints the tens digit of the current number by dividing it by 10 and adding the result to the ASCII code of '0'. Then, it prints the ones digit of the current number by taking the remainder of the current number when divided by 10 and adding the result to the ASCII code of '0'. This way, the function can print numbers with two digits using only two \_putchar calls. Finally, after the inner loop completes, the function prints a new line character using \_putchar('\n').

-     6-print_line.c

  a function that draws a straight line in the terminal.

- How the function works.

This function takes an integer n as input and prints a straight line of length n using the \_putchar function. If n is 0 or negative, it simply prints a newline character.

-     7-print_diagonal.c

  A function that draws a diagonal line on the terminal.

- How the function works.

This function takes an integer n as input and prints a diagonal line of length n using the \_putchar function. If n is 0 or negative, it simply prints a newline character. The implementation uses two nested loops to print spaces and backslashes in the correct pattern to create a diagonal line.

-     8-print_square.c

  A unction that prints a square, followed by a new line.

- How the function works.

If the size is positive, we use two nested loops to print the square. The outer loop iterates over the rows of the square, and the inner loop iterates over the columns of the square. In each iteration of the inner loop, we print a hash character (#) to represent a cell of the square. After printing all the cells in a row, we print a new line character (\n) to move to the next row.

## Feedback

If you have any feedback, please reach out to me at hello@itsdeemab.com
