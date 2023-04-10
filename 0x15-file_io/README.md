# 0x15. C - File I/O

In this project, we will learn about file input/output (I/O) in C programming language. We will learn how to read from and write to files, how to use system calls such as open, close, read, and write, and how to handle errors that may occur during file I/O operations.

## Resources

- [File descriptors](https://en.wikipedia.org/wiki/File_descriptor)
- [C Programming Tutorial - 22 - Reading and Writing Files](https://www.youtube.com/watch?v=Cpp9Oy9aM6o)
- [File I/O in C](https://www.tutorialspoint.com/cprogramming/c_file_io.htm)
- [man pages](https://linux.die.net/man/2/)

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

- Look for the right source of information online.
- How to create, open, close, read, and write files.
- What are file descriptors, and what is their purpose.
- What are the different types of file descriptors.
- What are the flags O_RDONLY, O_WRONLY, and O_RDWR.
- What is a system call.
- What is the difference between a function and a system call.
- How to manipulate file descriptors.
- What is the difference between a file descriptor and a file pointer.
- What is errno.
- How to use strerror.
- How to use the open system call.
- How to use the close system call.
- How to use the read system call.
- How to use the write system call.
- How to use the dprintf function.
- How to use the lseek system call.
- How to use the exit function.

## Requirements

### General

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free, open, close, read, write, dprintf, lseek, and exit
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called holberton.h
- Don't forget to push your header file
- All your header files should be include guarded

## More Info

You may want to look at the man or help pages of the following commands:

- open
- close
- read
- write
- dprintf
- lseek
- exit
- malloc
- free
- strerror
- errno

### Compilation

Your code will be compiled using the following command:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <files>.c -o <output file>


### Tasks

#### 0. Tread lightly, she is near

Write a function that reads a text file and prints it to the POSIX standard output.

- Prototype: ssize_t read_textfile(const char *filename, size_t letters);
- where letters is the number of letters it should read and print
- returns the actual number of letters it could read and print
- if the file can not be opened or read, return 0
- if filename is NULL return 0
- if write fails or does not write the expected amount of bytes, return 0

#### 1. Under the snow

Create a function that creates a file.

- Prototype: int create_file(const char *filename, char *text_content);
- where filename is the name of the file to create and text_content is a NULL terminated string to write to the file
- Returns: 1 on success, -1 on failure (file can not be created, file can not be written, write "fails", etc...)
- The created file must have those permissions: rw-------. If the file already exists, do not change the permissions.
- if the file already exists, truncate it
- if filename is NULL return -1
- if text_content is NULL create an empty file

#### 2. Speak g
