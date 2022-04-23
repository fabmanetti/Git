<h1 align="center">
	📖 libft 📖
</h1>

<p align="center">
	<b><i>CURSUS: 2019 - AUTHOR: fmanetti - GRADE: 107 - FINISHED: 29/11/2019</i></b><br>
</p>

<p align="center">
	This project is about coding a C library. It will contain a lot of general purpose functions your programs will rely upon.
</p>

![image](https://github.com/manettifabrizio/42cursus_srcs/blob/main/images/libft.gif)

## Introduction

C programming can be very tedious when one doesn’t have access to the highly useful
standard functions. This project is about understanding the way these functions work,
implementing and learning to use them. Your will create your own library. It will be
helpful since you will use it in your next C school assignments.

For more detailed information, look at the [**subject of this project**](https://github.com/manettifabrizio/42cursus_srcs/blob/main/subjects/libft/fr.subject_11_2019.pdf).

### Disclaimer

At 42 school when we program in C we are subject to a set of rules called [**the norm**](), so if the code is not 100% optimized this is the reason. This project was coded following norminette v2.

## List of functions:

### Functions from `<ctype.h>` library

* [`ft_isascii`](srcs/ft_isascii.c)					- test for ASCII character.
* [`ft_isalnum`](srcs/ft_isalnum.c)					- alphanumeric character test.
* [`ft_isalpha`](srcs/ft_isalpha.c)					- alphabetic character test.
* [`ft_isdigit`](srcs/ft_isdigit.c)					- decimal-digit character test.
* [`ft_isprint`](srcs/ft_isprint.c)					- printing character test (space character inclusive).
* [`ft_tolower`](srcs/ft_tolower.c)					- upper case to lower case letter conversion.
* [`ft_toupper`](srcs/ft_toupper.c)					- lower case to upper case letter conversion.
* [`ft_isspace`](srcs/ft_isspace.c)					- white-space character test.

### Functions from `<stdlib.h>` library

* [`ft_atoi`](srcs/ft_atoi.c)						- convert ASCII string to integer.
* [`ft_calloc`](srcs/ft_calloc.c)					- memory allocation.

### Functions from `<strings.h>` library

* [`ft_bzero`](srcs/ft_bzero.c)						- write zeroes to a byte string.
* [`ft_memset`](srcs/ft_memset.c)					- write a byte to a byte string.
* [`ft_memchr`](srcs/ft_memchr.c)					- locate byte in byte string.
* [`ft_memcmp`](srcs/ft_memcmp.c)					- compare byte string.
* [`ft_memmove`](srcs/ft_memmove.c)					- copy byte string.
* [`ft_memcpy`](srcs/ft_memcpy.c)					- copy memory area.

### Functions from `<string.h>` library

* [`ft_strlen`](srcs/ft_strlen.c)					- find length of string.
* [`ft_strchr`](srcs/ft_strchr.c)					- locate character in string (first occurrence).
* [`ft_strrchr`](srcs/ft_strrchr.c)					- locate character in string (last occurence).
* [`ft_strstr`](srcs/ft_strstr.c)					- locate a substring in a string.
* [`ft_strnstr`](srcs/ft_strnstr.c)					- locate a substring in a string (size-bounded).
* [`ft_strcmp`](srcs/ft_strcmp.c) 					- compare strings.
* [`ft_strncmp`](srcs/ft_strncmp.c) 				- compare strings (size-bounded).
* [`ft_strdup`](srcs/ft_strdup.c)					- save a copy of a string (with malloc).
* [`ft_strlcpy`](srcs/ft_strlcpy.c)					- string copying (size-bounded).
* [`ft_strcat`](srcs/ft_strcat.c)					- string concatenation.
* [`ft_strncat`](srcs/ft_strncat.c) 				- string concatenation (size-bounded).
* [`ft_strlcat`](srcs/ft_strlcat.c)					- secured [`ft_strncat`](srcs/ft_strncat.c).

### Additional functions

* [`ft_itoa`](srcs/ft_itoa.c)						- convert integer to ASCII string.
* [`ft_substr`](srcs/ft_substr.c)					- extract substring from string.
* [`ft_strtrim`](srcs/ft_strtrim.c)					- trim beginning and end of string with the specified characters.
* [`ft_strjoin`](srcs/ft_strjoin.c)					- concatenate two strings into a new string (with malloc).
* [`ft_split`](srcs/ft_split.c)						- split string, with specified character as delimiter, into an array of strings.
* [`ft_strmapi`](srcs/ft_strmapi.c)					- create new string from modifying string with specified function.
* [`ft_putchar_fd`](srcs/ft_putchar_fd.c)			- output a character to given file.
* [`ft_putstr_fd`](srcs/ft_putstr_fd.c)				- output string to given file.
* [`ft_putendl_fd`](srcs/ft_putendl_fd.c)			- output string to given file with newline.
* [`ft_putnbr_fd`](srcs/ft_putnbr_fd.c)				- output integer to given file.

### Linked list functions (bonus)

* [`ft_lstnew`](srcs_bonus/ft_lstnew.c)				- create new list.
* [`ft_lstsize`](srcs_bonus/ft_lstsize.c)			- count elements of a list.
* [`ft_lstlast`](srcs_bonus/ft_lstlast.c)			- find last element of list.
* [`ft_lstadd_back`](srcs_bonus/ft_lstadd_back.c)	- add new element at end of list.
* [`ft_lstadd_front`](srcs_bonus/ft_lstadd_front.c)	- add new element at beginning of list.
* [`ft_lstdelone`](srcs_bonus/ft_lstdelone.c)		- delete element from list.
* [`ft_lstclear`](srcs_bonus/ft_lstclear.c)			- delete sequence of elements of list from a starting point.
* [`ft_lstiter`](srcs_bonus/ft_lstiter.c)			- apply function to content of all list's elements.
* [`ft_lstmap`](srcs_bonus/ft_lstmap.c)				- apply function to content of all list's elements into new list.

### Custom functions (added later)

* [`ft_arrlen`](srcs_custom/ft_arrlen.c)			- find length of char array.
* [`ft_atof`](srcs_custom/ft_atof.c)				- convert string to float.
* [`ft_free_array`](srcs_custom/ft_free_array.c)	- free array of strings.
* [`ft_memalloc`](srcs_custom/ft_memalloc.c)		- reserve memory using malloc and initialize it using [`ft_bzero`](srcs/ft_bzero.c).
* [`ft_memdel`](srcs_custom/ft_memdel.c)			- free pointer and set to NULL.
* [`ft_merge`](srcs_custom/ft_merge.c)				- merge a string array in one string and free it using [`ft_free_array`](srcs_custom/ft_free_array.c).
* [`ft_print_array`](srcs_custom/ft_print_array.c)	- print int/string array using write derived functions (ft_put*).
* [`ft_sort_array`](srcs_custom/ft_sort_array.c)	- sort int array in ascending order and string array using [`ft_strcmp`](srcs/ft_strcmp.c).
* [`ft_strjoin_ln`](srcs_custom/ft_strjoin_ln.c)	- [`ft_strjoin`](srcs/ft_strjoin.c)	but freeing second string using a tmp.
* [`ft_strjoin_nl`](srcs_custom/ft_strjoin_nl.c)	- [`ft_strjoin`](srcs/ft_strjoin.c)	but freeing first string using a tmp.
* [`ft_swap`](srcs_custom/ft_swap.c)				- swap int/string/float using pointers.
* [`get_next_line`](srcs_custom/get_next_line.c)	- second project of 42cursus see [**repository**](https://github.com/manettifabrizio/42cursus_get_next_line) for details.

## Usage

### Requirements

The library is written in C language and needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Compiling the library**

To compile the library, go to its path and run:

For all mandatory functions:

```shell
$ make
```

For bonus functions:

```shell
$ make bonus
```

**2. Cleaning all binary (.o) and executable files (.a)**

To clean all files generated while doing a make, go to the path and run:

```shell
$ make fclean
```

**3. Using it in your code**

To use the library functions in your code, simply include its header:

```C
#include "libft.h"
```

## Testing

You can use any of this third party testers to test the project

* [Tripouille/libfTester](https://github.com/Tripouille/libftTester)
* [ska42/libft-war-machine](https://github.com/ska42/libft-war-machine)
* [alelievr/libft-unit-test](https://github.com/alelievr/libft-unit-test)

