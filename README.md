## Printf Project

# <img src="http://www.controlprt.com/images/pip_ps__printing_1_main_708x432.jpg">

**Author: [Joann Vuong](https://www.linkedin.com/in/joann-vuong-954b3220/)**
**Author: [Steven Coyne](https://www.linkedin.com/in/steven-coyne-b9341b9a/)**

*Holberton School - May 2017 Batch 3*

## Synopsis

This project uses the C programming language to recreate some of the printf functions. Notably, %%, %c, %s, %d, and %i.

## Resources

- man `gcc`
- man (3) `printf`, `puts`, `putchar`
- [Secret of Printf](http://www.cypress.com/file/54761/download)

## What students should learn from this project

- At the end of this project you are expected to be able to explain:
	- how printf identifies conversions
	- once a conversion is identified, how a function is returned
	- how %c, %s, %d, %i, and %% are printed out

## Requirements for the Printf Project

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with gcc 4.8.4 (C90) using the flags -Wall -Werror -Wextra and -pedantic
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- In the following examples, the main.c files are showed as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one showed in the examples
- The prototypes of all your functions should be included in your header file called holberton.h
- Don't forget to push your header file
- All your header files should be include guarded
- Authorized functions and macros:
	- write (man 2 write)
	- malloc (man 3 malloc)
	- free (man 3 free)
	- va_start (man 3 va_start)
	- va_end (man 3 va_end)
	- va_copy (man 3 va_copy)
	- va_arg (man 3 va_arg)
- Note that we will not provide the *_putchar* function for this project

## Project Breakdown

| Task # | Type | Short description
| ---: | --- | --- |
|0| **Mandatory**  |<p>Write a function that produces output according to a format.</p> <ul><li>Returns: the number of characters printed (excluding the null byte used to end output to strings)</li><li>format is a character string. The format string is composed of zero or more directives</li><li>Handle conversion specifiers: c, s, %</li><li>You don't have to reproduce buffer, handle flags, field width, precision, or length modifiers</li></ul>|
|1| **Mandatory**  |<p>Handle the following conversion specifiers:</p> <ul><li>d</li><li>i</li></ul>|
|2| **Mandatory**  |<p>Write a man page for your function.</p>|
