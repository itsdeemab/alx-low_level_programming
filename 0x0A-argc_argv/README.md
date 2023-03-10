
# 0x0A. C - argc, argv

In the C programming language, argc and argv are used to pass command line arguments to a program.

argc stands for "argument count" and is an integer variable that holds the number of arguments passed to the program from the command line. The value of argc is always at least 1, because the first argument passed to a C program is always the name of the program itself.

argv stands for "argument vector" and is an array of character pointers (char*) that holds the actual arguments passed to the program. Each element in the argv array represents one of the arguments passed to the program, with the first element argv[0] always being the name of the program itself.

Here is an example of how argc and argv can be used in a C program:
```
#include <stdio.h>

int main(int argc, char* argv[]) {
    printf("Argument count: %d\n", argc);

    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
```
In this example, the program takes any number of arguments from the command line and prints out the number of arguments and the value of each argument. The argc variable holds the number of arguments, and the argv array holds the actual arguments. The for loop iterates over the argv array, printing out each argument along with its index in the array.



## Lessons Learned

* How to use arguments passed to your program
* What are two prototypes of `main` that you know of, and in which case do you use one or the other
* How to use `__attribute__((unused))` or `(void)` to compile functions with unused variables or parameters


## Documentation
### Tasks

0. It ain't what they call you, it's what you answer to
* File: `0-whatsmyname.c`

1. Silence is argument carried out by other means
* File: `1-args.c`

2. The best argument against democracy is a five-minute conversation with the average voter
* File: `2-args.c`

3. Neither irony nor sarcasm is argument
* File: `3-mul.c`

4. To infinity and beyond
* File: `4-add.c`

### Advanced

5. Minimal Number of Coins for Change
* File: `100-change.c`



## Feedback

If you have any feedback, please reach out to me at hello@itsdeemab.com


