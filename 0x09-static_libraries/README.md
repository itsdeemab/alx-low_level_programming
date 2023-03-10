
# 0x09. C - Static libraries

A static library is a collection of object files that have been compiled and linked into a single file. When a program is linked against a static library, the object code from the library is included in the executable file for the program. This means that all the code from the library is included in the executable, even if only a small portion of the library is actually used by the program. Static libraries are typically used on Unix-like systems, although they can also be used on Windows.

To create a static library, you first need to compile the source code files into object files using a compiler such as `"gcc"` or `"clang"`. Once you have the object files, you can use the `"ar"` command to create the library file. The `"ar"` command is used with the `"rcs"` options followed by the name of the library file and the object files to be included in the library. For example:

```
gcc -c foo.c bar.c
ar rcs libmylib.a foo.o bar.o
```
This will create a static library named "libmylib.a" from the object files `"foo.o"` and `"bar.o"`.

To use a static library in your program, you need to include a reference to the library in your linker command. For example, if you are using the `"gcc"` compiler, you can use the `"-l"` option followed by the name of the library file:
```
gcc -o myprogram main.c -L. -lmylib
```
This will link your program with the `"libmylib.a"` static library. Note that the `"-L."` option specifies that the linker should search for libraries in the current directory.

Once your program is linked with the static library, you can call functions and use variables defined in the library as if they were defined in your program's source code.

One advantage of static libraries is that they do not require the library to be present on the target system. The entire library is linked into the executable file, so the executable can be moved to a different system and run without requiring the library to be installed separately. However, this can also make the executable file larger, especially if the library is large or contains a lot of code that is not used by the program.

## Lessons Learned

* What is a static library, how does it work, how to create one, and how to use it
* Basic usage of ar, ranlib, nm


## Documentation
### Tasks

0. A library is not a luxury but one of the necessities of life
* File: `libmy.a, main.h`

1. Without libraries what have we? We have no past and no future
* File: `create_static_lib.sh`


## Feedback

If you have any feedback, please reach out to me at hello@itsdeemab.com


