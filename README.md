*This project has been created as part of the 42 curriculum by rihammou.*

# Libft

## Description

**Libft** is a C programming project from the 42 curriculum focused on creating a personal library of reusable functions. The project involves reimplementing standard C library functions and developing additional utilities for string manipulation, memory management, file descriptor output, and linked lists.

The goal is to gain a deeper understanding of how C functions work internally, particularly pointers, memory allocation, string operations, and data structures.

The result is **`libft.a`**, a static library containing 43 functions that can be reused in future C projects.

## Library Overview

The library contains **43 functions**, organized into three main categories.

### 1. Standard C Library Functions

Reimplementations of commonly used C functions, prefixed with `ft_`.

| Category | Functions | Purpose |
| --- | --- | --- |
| Character checks | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` | Classify characters |
| Character conversion | `ft_toupper`, `ft_tolower` | Convert letter case |
| String operations | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr` | Measure, copy, concatenate, compare, and search strings |
| Memory operations | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp` | Initialize, copy, move, search, and compare memory |
| Conversion | `ft_atoi` | Convert a string to an integer |
| Allocation | `ft_calloc`, `ft_strdup` | Allocate memory and duplicate strings |

### 2. Additional Functions

Utilities for manipulating strings, applying functions to characters, and writing to file descriptors.

| Function | Description |
| --- | --- |
| `ft_substr` | Creates a substring starting at a specified index |
| `ft_strjoin` | Concatenates two strings into a new string |
| `ft_strtrim` | Removes specified characters from both ends of a string |
| `ft_split` | Splits a string into a NULL-terminated array of strings |
| `ft_itoa` | Converts an integer into a string |
| `ft_strmapi` | Creates a new string by applying a function to each character |
| `ft_striteri` | Applies a function to each character of an existing string |
| `ft_putchar_fd` | Writes a character to a file descriptor |
| `ft_putstr_fd` | Writes a string to a file descriptor |
| `ft_putendl_fd` | Writes a string followed by a newline |
| `ft_putnbr_fd` | Writes an integer to a file descriptor |

### 3. Linked List Functions

Functions for creating, modifying, traversing, and freeing singly linked lists.

The linked list uses the following structure, defined in `libft.h`:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

Each node stores a pointer to its content and a pointer to the next node in the list.

| Function | Description |
| --- | --- |
| `ft_lstnew` | Allocates and initializes a new node |
| `ft_lstadd_front` | Adds a node to the beginning of a list |
| `ft_lstadd_back` | Adds a node to the end of a list |
| `ft_lstsize` | Counts the number of nodes |
| `ft_lstlast` | Returns the last node |
| `ft_lstdelone` | Deletes a single node and its content |
| `ft_lstclear` | Deletes a node and all following nodes |
| `ft_lstiter` | Applies a function to each node's content |
| `ft_lstmap` | Creates a new list by applying a function to each node's content |

## Technical Details

- **Language:** C
- **Library:** `libft.a` (static library)
- **Compiler:** `cc`
- **Compilation flags:** `-Wall -Wextra -Werror`
- **Build system:** Makefile
- **Header:** `libft.h`

The Makefile compiles the source files into object files (`.o`) and combines them into the static library using `ar rcs`.

Functions requiring dynamic memory allocation use `malloc` or `calloc` where permitted. Memory allocated by the library must be properly freed when no longer needed.

The library includes functions that operate directly on memory addresses, manipulate strings, and work with dynamically allocated linked lists.

## Instructions

### Compilation

Clone the repository and navigate to the project directory:

```bash
git clone <repository-url>
cd libft
```

Compile the library:

```bash
make
```

This creates `libft.a` in the project directory, containing all 43 functions.

### Makefile Commands

| Command | Description |
| --- | --- |
| `make` | Compiles the library |
| `make clean` | Removes object files (`.o`) |
| `make fclean` | Removes object files and `libft.a` |
| `make re` | Recompiles the library from scratch |

The Makefile tracks dependencies to avoid unnecessary recompilation.

### Usage

To use the library in another C program, include its header:

```c
#include "libft.h"
```

After compiling the library with `make`, compile your program and link it with `libft.a`:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

The `-L.` flag tells the linker to search the current directory for libraries, while `-lft` links the program with `libft.a`.

## Resources

The following resources were used to understand C functions, their expected behavior, and the compilation process:

- [Linux Manual Pages](https://man7.org/linux/man-pages/) — Documentation of standard C functions, their behavior, and edge cases.
- [GNU Make Manual](https://www.gnu.org/software/make/manual/) — Reference for Makefile syntax, dependencies, variables, and compilation rules.

### AI Usage

AI was used as a learning resource throughout the project to explain C programming concepts, clarify function specifications, discuss edge cases, review and debug implementations, prepare function tests, and assist with README documentation.
