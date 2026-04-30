*This project has been created as part of the 42 curriculum by nakhatoo*

## Description
The ft_printf project consists of recreating a simplified version of the standard C library function printf. The goal of this project is to deepen understanding of variadic functions, formatted output, and low-level memory handling in C.

This custom implementation, ft_printf, parses a format string and reproduces its behavior by handling a defined set of conversion specifiers. It supports common format types such as characters, strings, integers, unsigned integers, hexadecimal representations (both lowercase and uppercase), pointers, and the percent symbol. Each specifier is processed through dedicated functions to ensure modularity and clarity.

The project emphasizes precise control over output formatting, including proper type casting, base conversions, and edge case handling (such as null pointers or zero values). It also reinforces the use of va_list, va_start, va_arg, and va_end to manage a variable number of arguments.

Overall, ft_printf demonstrates a solid understanding of core C programming concepts, including string manipulation, memory management, and structured code design, while closely mimicking the behavior of the original printf function.

## Instructions
### Compilation

- To compile the ft_printf library, use **make** in the root directory of the project.
This will generate the static library libftprintf.a.

Available Makefile rules:

- **make** — compile the library
- **make clean** — remove object files
- **make fclean** — remove object files and the library
- **make re** — recompile everything from scratch

### Installation / Usage

To use ft_printf in your project, include the header file and link the compiled library: **#include "ft_printf.h"**

Supported Conversions

The function supports the following format specifiers:

- %c — character
- %s — string
- %p — pointer
- %d / %i — signed integer
- %u — unsigned integer
- %x — hexadecimal (lowercase)
- %X — hexadecimal (uppercase)
- %% — percent sign

## Resources :-

The following resources were used to understand and implement the functions in this library:
- The GNU C Library documentation.

- The Linux man-pages (man strlen, man malloc, etc.)
Primary source for function prototypes, return values, and edge cases.

- 42 subject PDF and intra materials

- https://www.geeksforgeeks.org/c/c-programming-language/

- https://www.w3schools.com/c/

## Algorithm and Data Structure Choices

My ft_printf is based on a linear parsing of the format string. I read it character by character, printing normal characters directly, and when I encounter a %, I identify the specifier and dispatch it to a dedicated handler function.

I use va_list to retrieve arguments dynamically, depending on each specifier. The design is modular, with one function per conversion, which makes the code easier to maintain and extend.

I didn’t use complex data structures because the problem is sequential, so basic types and va_list are sufficient.

For numeric conversions, I use division by base—10 for decimals and 16 for hexadecimal—to build the output.

Finally, I handle edge cases like null strings, negative numbers, and pointers to closely match the behavior of the original printf.