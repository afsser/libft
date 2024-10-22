# Libft

This is my first 42school project. An implementation of a library of useful C functions, which can be used as a foundation for various projects. The library implements several common functions for string manipulation, memory handling, linked lists, and numeric conversions.

## Functions

### String Conversion and Manipulation

- **ft_atoi.c**: Converts a string to an integer.
- **ft_itoa.c**: Converts an integer to a string.
- **ft_strchr.c**: Locates the first occurrence of a character in a string.
- **ft_strdup.c**: Duplicates a string by dynamically allocating memory.
- **ft_striteri.c**: Applies a function to each character of a string, with its index.
- **ft_strjoin.c**: Concatenates two strings by dynamically allocating memory.
- **ft_strlcat.c**: Concatenates strings, ensuring memory safety (size-limited).
- **ft_strlcpy.c**: Safely copies strings (with size limit).
- **ft_strlen.c**: Calculates the length of a string.
- **ft_strmapi.c**: Creates a new string by applying a function to each character of the original string.
- **ft_strncmp.c**: Compares two strings up to a specific number of characters.
- **ft_strnstr.c**: Locates a substring within another string.
- **ft_strrchr.c**: Locates the last occurrence of a character in a string.
- **ft_strtrim.c**: Removes specific characters from the start and end of a string.
- **ft_substr.c**: Extracts a substring from an original string.

### Memory Handling

- **ft_bzero.c**: Fills a memory area with zeros.
- **ft_calloc.c**: Allocates memory initialized with zeros for an array.
- **ft_memchr.c**: Searches for a specific byte in a memory area.
- **ft_memcmp.c**: Compares two memory areas.
- **ft_memcpy.c**: Copies one memory area to another.
- **ft_memmove.c**: Moves memory areas, allowing overlap.
- **ft_memset.c**: Fills a memory area with a specific value.

### File Descriptor Handling

- **ft_putchar_fd.c**: Writes a character to a file descriptor.
- **ft_putendl_fd.c**: Writes a string followed by a newline to a file descriptor.
- **ft_putnbr_fd.c**: Writes an integer to a file descriptor.
- **ft_putstr_fd.c**: Writes a string to a file descriptor.

### Linked List Functions (Bonus)

- **ft_lstadd_back_bonus.c**: Adds a new element to the end of a linked list.
- **ft_lstadd_front_bonus.c**: Adds a new element to the front of a linked list.
- **ft_lstclear_bonus.c**: Removes and frees all elements of a linked list.
- **ft_lstdelone_bonus.c**: Removes and frees a specific element of the linked list.
- **ft_lstiter_bonus.c**: Applies a function to each element of a linked list.
- **ft_lstlast_bonus.c**: Returns the last element of a linked list.
- **ft_lstmap_bonus.c**: Applies a function to each element of a list and creates a new list with the results.
- **ft_lstnew_bonus.c**: Creates a new linked list element.
- **ft_lstsize_bonus.c**: Returns the size of a linked list.

### Verification and Conversion Functions

- **ft_isalnum.c**: Checks if the character is alphanumeric.
- **ft_isalpha.c**: Checks if the character is a letter.
- **ft_isascii.c**: Checks if the character belongs to the ASCII table.
- **ft_isdigit.c**: Checks if the character is a digit.
- **ft_isprint.c**: Checks if the character is printable.
- **ft_tolower.c**: Converts a character to lowercase, if applicable.
- **ft_toupper.c**: Converts a character to uppercase, if applicable.

### Additional Functions

- **ft_split.c**: Splits a string into substrings based on a delimiter.
