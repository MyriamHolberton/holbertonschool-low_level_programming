#ifndef HEADER_
#define HEADER_
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
 
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

 #endif
