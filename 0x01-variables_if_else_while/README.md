
# 0x01. C - Variables, if, else, while

C is a programming language that supports various programming concepts including variables, if statements, else statements, and while loops.

Variables are memory locations used to store values or data in a program. In C, variables are declared with a data type, such as int, float, char, etc., and a name that identifies the variable. For example, "int age;" declares an integer variable called "age".

If statements are used for decision-making in a program. They allow the program to execute certain code blocks only when certain conditions are met. An if statement is followed by a condition in parentheses, and if the condition is true, the code inside the curly braces {} is executed. For example:
```bash
 if (age >= 18) {
   printf("You are eligible to vote.");
}
```
In this example, if the variable "age" is greater than or equal to 18, the program will print the message "You are eligible to vote."

Else statements are used in conjunction with if statements to execute code when the condition in the if statement is false. For example:
```bash
if (age >= 18) {
   printf("You are eligible to vote.");
} else {
   printf("You are not eligible to vote.");
}
```
In this example, if the variable "age" is greater than or equal to 18, the program will print the message "You are eligible to vote." If the variable "age" is less than 18, the program will print the message "You are not eligible to vote."

While loops are used to repeatedly execute a block of code as long as a condition is true. The condition is evaluated at the beginning of each iteration of the loop. For example:

```bash
int i = 1;
while (i <= 10) {
   printf("%d ", i);
   i++;
}
```
In this example, the while loop will execute 10 times, printing the numbers 1 to 10 on the screen. The loop continues to execute as long as the value of the variable "i" is less than or equal to 10.
## Lessons Learned

* What are the arithmetic operators and how to use them
* What are the logical operators (sometimes called * boolean operators) and how to use them
* What the the relational operators and how to use them
* What values are considered TRUE and FALSE in C
* What are the boolean operators and how to use them
* How to use the if, if ... else statements
* How to use comments
* How to declare variables of types char, int, unsigned int
* How to assign values to variables
* How to print the values of variables of type char, int, unsigned int with printf
* How to use the while loop
* How to use variables with the while loop
* How to print variables using printf
* What is the ASCII character set
* What are the purpose of the gcc flags -m32 and -m64


## Documentation

### Project Tasks
0. File: `0-positive_or_negative.c`
* This program assigns a random number to the variable n each time it is executed and then prints whether the number stored in the variable n is positive or negative.
1. File: `1-last_digit.c`
* This program assigns a random number to the variable n each time it is executed then prints the last digit of the number stored in the variable n.
2. File: `2-print_alphabet.c`
* This program prints the alphabet in lowercase using putchar, followed by a new line.
3. File: `3-print_alphabets.c`
*  This program prints the alphabet in lowercase, and then in uppercase also using putchar, followed by a new line.
4. File: `4-print_alphabt.c`
* This program prints the alphabet in lowercase,  all the letters except q and e, also using putchar, , followed by a new line.
5. File: `5-print_numbers.c`
* THis program prints all single digit numbers of base 10 starting from 0, followed by a new line.
6. File: `6-print_numberz.c`
* This program does the same the `5-print_numbers.c` program but using the putchar function.
7. File: `7-print_tebahpla.c`
* This program  prints the lowercase alphabet in reverse using the putchar function, followed by a new line.
8. File: `8-print_base16.c`
* THis program  prints all the numbers of base 16 in lowercase using the putchar function, followed by a new line.
9. File: `9-print_comb.c`
* This program prints all possible combinations of single-digit numbers in ascending order, separated by ,, followed by a space. also using the putchar function.

### Advanced Project Tasks

100. File: `100-print_comb3.c`
* This program prints all possible different combinations of two digits. Conditions:
101. File: `101-print_comb4.c`
* THis program  prints all possible different combinations of three digits.
102. File: `102-print_comb5.c`
* This program prints all possible combinations of two two-digit numbers.
## Feedback

If you have any feedback, please reach out to me at hello@itsdeemab.com `#AlxCohort12` 

