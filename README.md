# get_next_line

`get_next_line` is a project in the 42 curriculum that involves creating a function to read a line from a file descriptor. This project helps you understand file I/O, buffer management, and dynamic memory allocation in C.

## Overview

`get_next_line` is a function designed to read a line from a file descriptor (such as `stdin` or a file) and return it without the newline character. The function is capable of handling multiple file descriptors and reading from them concurrently.

## Features

- **Reading Lines:** Implement a function that reads a line from a file descriptor until a newline character (`\n`) is encountered.
- **Buffer Management:** Manage a static buffer to store read data efficiently and handle cases where the line exceeds the buffer size.
- **Dynamic Memory Allocation:** Allocate memory dynamically to store the read line and resize it as needed.
- **File Descriptor Handling:** Support reading from multiple file descriptors and handle end-of-file (EOF) conditions gracefully.

## Getting Started

To get started with `get_next_line`, clone the repository and compile the program using the provided Makefile:

```bash
git clone https://github.com/BenjaminLarger/get_next_line.git
cd get_next_line
make
./get_next_line
