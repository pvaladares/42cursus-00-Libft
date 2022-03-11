<h1 align="center">
	42cursus' libft
</h1>

<p align="center">
	<b><i>Development repo for 42cursus' libft project</i></b><br>
	For further information about 42cursus and its projects, please refer to <a href="https://github.com/pvaladares/42cursus"><b>42cursus repo</b></a>.
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/pvaladares/42cursus-00-Libft?color=blueviolet" />
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/pvaladares/42cursus-00-Libft?color=blueviolet" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/pvaladares/42cursus-00-Libft?color=blue" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/pvaladares/42cursus-00-Libft?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/pvaladares/42cursus-00-Libft?color=brightgreen" />
</p>

---

## 🗣️ About

> _The aim of this project is to code a C library recoding usual functions that you'll be allowed to use in all your other projects._

For detailed information and comments, refer to the [**subject of this project**](pdf/42Cursus_Libft_v15.pdf).

	🚀 TLDR: this project consists of coding basic C functions (see below), which are then compiled
	into a library for use in other projects of the cursus.

## Mandatory Part

### Functions from `<ctype.h>` library

* [`ft_isalpha`](ft_isalpha.c)			- alphabetic character test.
* [`ft_isdigit`](ft_isdigit.c)			- decimal-digit character test.
* [`ft_isalnum`](ft_isalnum.c)			- alphanumeric character test.
* [`ft_isascii`](ft_isascii.c)			- test for ASCII character.
* [`ft_isprint`](ft_isprint.c)			- printing character test (space character inclusive).
* [`ft_toupper`](ft_toupper.c)			- lower case to upper case letter conversion.
* [`ft_tolower`](ft_tolower.c)			- upper case to lower case letter conversion.

### Functions from `<stdlib.h>` library

* [`ft_atoi`](ft_atoi.c)		- convert ASCII string to integer.
* [`ft_calloc`](ft_calloc.c)	- memory allocation (with malloc).

### Functions from `<strings.h>` library
* [`ft_bzero`](ft_bzero.c)		- write zeroes to a byte string.

### Functions from `<string.h>` library

* [`ft_strlen`](ft_strlen.c)				- find length of string.
* [`ft_memset`](ft_memset.c)		- write a byte to a byte string.
* [`ft_memcpy`](ft_memcpy.c)		- copy memory area.
* [`ft_memmove`](ft_memmove.c)	- copy byte string.
* [`ft_strlcpy`](ft_strlcpy.c)			- size-bounded string copying.
* [`ft_strlcat`](ft_strlcat.c)			- size-bounded string concatenation.
* [`ft_strchr`](ft_strchr.c)				- locate character in string (first occurrence).
* [`ft_strrchr`](ft_strrchr.c)			- locate character in string (last occurence).
* [`ft_strncmp`](ft_strncmp.c) 			- compare strings (size-bounded).
* [`ft_memchr`](ft_memchr.c)		- locate byte in byte string.
* [`ft_memcmp`](ft_memcmp.c)		- compare byte string.
* [`ft_strnstr`](ft_strnstr.c)			- locate a substring in a string (size-bounded).
* [`ft_strdup`](ft_strdup.c)				- save a copy of a string (with malloc).

### Non-standard functions

* [`ft_substr`](ft_substr.c)				- save substring from string (with malloc).
* [`ft_strjoin`](ft_strjoin.c)			- concatenate two strings into a new string (with malloc).
* [`ft_strtrim`](ft_strtrim.c)			- trim beginning and end of string with the specified characters with malloc).
* [`ft_split`](ft_split.c)				- split string, with specified character as delimiter, into an array of strings.
* [`ft_itoa`](ft_itoa.c)					- convert integer to ASCII string.
* [`ft_strmapi`](ft_strmapi.c)			- create new string from modifying string with specified function.
* [`ft_striteri`](ft_striteri.c)			- modifies string with specific function.
* [`ft_putchar_fd`](ft_putchar_fd.c)		- output a character to given file.
* [`ft_putstr_fd`](ft_putstr_fd.c)		- output string to given file.
* [`ft_putendl_fd`](ft_putendl_fd.c)		- output string to given file with newline.
* [`ft_putnbr_fd`](ft_putnbr_fd.c)		- output integer to given file.

## Bonus part

### Linked list functions

* [`ft_lstnew`](ft_lstnew.c)				- create a new list (with malloc).
* [`ft_lstadd_front`](ft_lstadd_front.c)	- add new element at the beginning of the list.
* [`ft_lstsize`](ft_lstsize.c)			- count the elements in a list.
* [`ft_lstlast`](ft_lstlast.c)			- find the last element of the list.
* [`ft_lstadd_back`](ft_lstadd_back.c)	- add new element at end of the list.
* [`ft_lstdelone`](ft_lstdelone.c)		- delete element from the list.
* [`ft_lstclear`](ft_lstclear.c)			- delete a sequence of elements of the list from a starting element.
* [`ft_lstiter`](ft_lstiter.c)			- apply function to all the elements of the list.
* [`ft_lstmap`](ft_lstmap.c)				- apply function to all the elements of the list and create a new list (with malloc).

## 🛠️ Testing

### Makefile and re-link

Mandatory part
```shell
git clone https://github.com/pvaladares/42cursus-00-Libft.git && cd 42cursus-00-Libft && make
```
Typing again `make` should show the following message:
> make: `libft.a' is up to date.

Mandatory part + bonus
```shell
make bonus
```
Typing again `make bonus` should show the following message:
> make[1]: `libft.a' is up to date.

### Third-party testers
* [y3ll0w42 / libft-war-machine](https://github.com/y3ll0w42/libft-war-machine)
* [Tripouille / libftTester](https://github.com/Tripouille/libftTester)
* [alelievr / libft-unit-test](https://github.com/alelievr/libft-unit-test)
* [jtoty / Libftest](https://github.com/jtoty/Libftest)
* [xicodomingues / francinette](https://github.com/xicodomingues/francinette)
