# 0x15-file_io

This project contains C programs that demonstrate file input/output operations using the POSIX standard library.

## Files

* **0-read_textfile.c**: A program that reads a text file and prints it to the POSIX standard output.
* **1-create_file.c**: A program that creates a file with a specific mode.
* **2-append_text_to_file.c**: A program that appends text to the end of a file.
* **3-cp.c**: A program that copies the content of one file to another file.

## How to Use

To compile any of the programs, use the following command:

gcc -Wall -Werror -Wextra -pedantic <program-name>.c -o <program-name>


Replace <program-name> with the name of the program you want to compile.

To run the programs, use the following command:

./<program-name> <arguments>


Replace <program-name> with the name of the program you want to run, and <arguments> with any arguments required by the program.

## Examples

Here are some examples of how to use the programs:

### 0-read_textfile

./0-read_textfile example.txt 1024


This will read up to 1024 bytes from the file example.txt and print them to the standard output.

### 1-create_file

./1-create_file example.txt "Hello, world!"


This will create a file named example.txt with the content "Hello, world!".

### 2-append_text_to_file

./2-append_text_to_file example.txt "Hello again, world!"


This will append the text "Hello again, world!" to the end of the file example.txt.

### 3-cp

./3-cp file1.txt file2.txt


This will copy the content of file1.txt to file2.txt.

## Author

This project was created by [Michael khayo](https://github.com/khayo254)
