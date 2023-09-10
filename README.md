# Custom Memset Implementation in C

## Overview

This repository contains a custom implementation of the `memset` function in C. The `memset` function is commonly used to set a block of memory to a specified byte value. This custom implementation aims to provide a functional alternative to the standard library `memset` function.

## Features

- **Custom Implementation**: This code provides a custom implementation of the `memset` function, allowing users to set a memory block to a specified value for a given number of bytes.

- **Error Handling**: The code includes error handling for cases where the input pointer is `NULL`. It returns `NULL` in such cases to indicate an error condition.

- **Conformance**: The code is designed to conform to common industry coding standards and practices, making it suitable for use in a variety of C projects.

## Usage

To use this custom `memset` implementation, you can include the provided header file in your C program and link it with your code. Then, call the `custom_memset` function, passing the appropriate arguments, to set memory to the desired value.

## Compilation

The code has been tested with the GCC compiler using the following flags:
```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 src.c memset_cpy.c -o <memset_cpy>
```

## Contributing

Contributions to this project are welcome. If you find issues or have improvements to suggest, please feel free to open an issue or create a pull request on GitHub.
