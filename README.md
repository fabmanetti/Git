<h1 align="center">
	📖 libft 📖
</h1>

<p align="center">
	<b><i>YOUR VERY FIRST OWN LIBRARY</i></b><br>
</p>

### This project is about coding a C library. It will contain a lot of general purpose functions your programs will rely upon.

![image](42_cursus_srcs/images/libft)

## Introduction

C programming can be very tedious when one doesn’t have access to the highly useful
standard functions. This project is about understanding the way these functions work,
implementing and learning to use them. Your will create your own library. It will be
helpful since you will use it in your next C school assignments.

## List of functions:

### Functions from `<ctype.h>` library

* [`ft_isascii`](srcs/ft_isascii.c)			- test for ASCII character.
* [`ft_isalnum`](srcs/ft_isalnum.c)			- alphanumeric character test.
* [`ft_isalpha`](srcs/ft_isalpha.c)			- alphabetic character test.
* [`ft_isdigit`](srcs/ft_isdigit.c)			- decimal-digit character test.
* [`ft_isprint`](srcs/ft_isprint.c)			- printing character test (space character inclusive).
* [`ft_tolower`](srcs/ft_tolower.c)			- upper case to lower case letter conversion.
* [`ft_toupper`](srcs/ft_toupper.c)			- lower case to upper case letter conversion.

### Functions from `<stdlib.h>` library

* [`ft_atoi`](srcs/ft_atoi.c)		- convert ASCII string to integer.
* [`ft_calloc`](srcs/ft_calloc.c)	- memory allocation.

### Functions from `<strings.h>` library

* [`ft_bzero`](srcs/ft_bzero.c)		- write zeroes to a byte string.
* [`ft_memset`](srcs/ft_memset.c)		- write a byte to a byte string.
* [`ft_memchr`](srcs/ft_memchr.c)		- locate byte in byte string.
* [`ft_memcmp`](srcs/ft_memcmp.c)		- compare byte string.
* [`ft_memmove`](srcs/ft_memmove.c)	- copy byte string.
* [`ft_memcpy`](srcs/ft_memcpy.c)		- copy memory area.

### Functions from `<string.h>` library

* [`ft_strlen`](srcs/ft_strlen.c)				- find length of string.
* [`ft_strchr`](srcs/ft_strchr.c)				- locate character in string (first occurrence).
* [`ft_strrchr`](srcs/ft_strrchr.c)			- locate character in string (last occurence).
* [`ft_strnstr`](srcs/ft_strnstr.c)			- locate a substring in a string (size-bounded).
* [`ft_strncmp`](srcs/ft_strncmp.c) 			- compare strings (size-bounded).
* [`ft_strdup`](srcs/ft_strdup.c)				- save a copy of a string (with malloc).
* [`ft_strlcpy`](srcs/ft_strlcpy.c)			- size-bounded string copying.
* [`ft_strlcat`](srcs/ft_strlcat.c)			- size-bounded string concatenation.

### Non-standard functions

* [`ft_itoa`](srcs/ft_itoa.c)					- convert integer to ASCII string.
* [`ft_substr`](srcs/ft_substr.c)				- extract substring from string.
* [`ft_strtrim`](srcs/ft_strtrim.c)			- trim beginning and end of string with the specified characters.
* [`ft_strjoin`](srcs/ft_strjoin.c)			- concatenate two strings into a new string (with malloc).
* [`ft_split`](srcs/ft_split.c)				- split string, with specified character as delimiter, into an array of strings.
* [`ft_strmapi`](srcs/ft_strmapi.c)			- create new string from modifying string with specified function.
* [`ft_striteri`](srcs/ft_striteri.c)			- 
* [`ft_putchar_fd`](srcs/ft_putchar_fd.c)		- output a character to given file.
* [`ft_putstr_fd`](srcs/ft_putstr_fd.c)		- output string to given file.
* [`ft_putendl_fd`](srcs/ft_putendl_fd.c)		- output string to given file with newline.
* [`ft_putnbr_fd`](srcs/ft_putnbr_fd.c)		- output integer to given file.

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

## Usage
