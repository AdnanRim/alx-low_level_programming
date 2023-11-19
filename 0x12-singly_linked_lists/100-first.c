#include <stdio.h>

/**
 * 100-first.c - Prints text before main is called
 * This file contains a function called print_before() that prints a short
 * passage of text.
 * The print_before() function is defined to execute before the main()
 * function in another file (100-main.c). When the code is compiled and
 * linked, print_before() will be called automatically before entering main().
 * This allows code to run and output to be displayed prior to the main
 * program logic. In this example, it sets up a story preamble that main()
 * continues.
 * By defining and calling functions in a particular order during compilation,
 * we can control the sequence that code executes even across source files.
 */
void print_before(void) {
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
