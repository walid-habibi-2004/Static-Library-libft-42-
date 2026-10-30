*This project has been created as part of the 42 curriculum by wahabibi.*

# Libft

## Description

Libft is the first project of the 42 curriculum. The goal is to build your own C library, `libft.a`, by re-implementing a set of standard C library functions and adding a few extra utility functions. The library is then reused in later 42 projects.

The library is split into three groups:

### 1. Re-implemented libc functions

| Category | Functions |
|---|---|
| Character checks | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| Character conversion | `ft_toupper`, `ft_tolower` |
| Memory | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` |
| Strings | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` |
| Conversion | `ft_atoi` |

### 2. Additional functions

| Function | Description |
|---|---|
| `ft_substr` | Returns a substring of a string, allocated with `malloc`. |
| `ft_strjoin` | Concatenates two strings into a new allocated string. |
| `ft_strtrim` | Removes the characters of a given set from the start and end of a string. |
| `ft_split` | Splits a string into an array of strings using a delimiter character. |
| `ft_itoa` | Converts an integer to an allocated string. |
| `ft_strmapi` | Applies a function to each character of a string and returns the new string. |
| `ft_striteri` | Applies a function to each character of a string, passing its index. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

### 3. Linked list functions

The library defines a singly linked list type in `libft.h`:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new node. |
| `ft_lstadd_front` | Adds a node at the beginning of the list. |
| `ft_lstadd_back` | Adds a node at the end of the list. |
| `ft_lstsize` | Counts the nodes of the list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstdelone` | Frees one node's content with a given function, then the node. |
| `ft_lstclear` | Deletes and frees a node and all the nodes after it. |
| `ft_lstiter` | Applies a function to the content of each node. |
| `ft_lstmap` | Applies a function to each node and builds a new list from the results. |

## Instructions

### Compilation

The library is compiled with `cc` and the flags `-Wall -Wextra -Werror`.

```bash
make        # builds libft.a
make clean  # removes the object files
make fclean # removes the object files and libft.a
make re     # fclean followed by all
```

### Usage in your own project

Include the header in your source files:

```c
#include "libft.h"
```

Then compile and link against the library:

```bash
cc -Wall -Wextra -Werror main.c libft.a -o program 
```

## Resources

- `man` pages of the re-implemented functions (`man 3 strlcpy`, `man 3 memmove`, `man 3 calloc`, etc.)
- [GNU Make Manual](https://www.gnu.org/software/make/manual/make.html)
- [W3Schools C Tutorial](https://www.w3schools.com/c/)
- [Stack Overflow](https://stackoverflow.com/), to understand specific errors and C concepts
- [YouTube](https://www.youtube.com/), tutorials on C, pointers, memory allocation and linked lists
- The 42 Libft subject (PDF)

### Use of AI

AI was used in during this project to ask questions about algorithms and C concepts, and to understand problems I faced in my code. I asked for explanations and hints only, not ready-made code.