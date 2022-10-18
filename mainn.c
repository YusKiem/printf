#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - entry
 * Return: Always returns  zero
 */
int main(void)
{
   int leng;
   int leng2;
   unsigned int ui;
   void *addrs;

   leng = _printf("Let's try to printf a simple sentence.\n");
   leng2 = printf("Let's try to printf a simple sentence.\n");
   ui = (unsigned int)INT_MAX + 1024;
   addrs = (void *)0x7ffe637541f0;
   _printf("Length:[%d, %i]\n", leng, leng);
   printf("Length:[%d, %i]\n", leng2, leng2);
   _printf("Negative:[%d]\n", -762534);
   printf("Negative:[%d]\n", -762534);
   _printf("Unsigned:[%u]\n", ui);
   printf("Unsigned:[%u]\n", ui);
   _printf("Unsigned octal:[%o]\n", ui);
   printf("Unsigned octal:[%o]\n", ui);
   _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
   printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
   _printf("Character:[%c]\n", 'H');
   printf("Character:[%c]\n", 'H');
   _printf("String:[%s]\n", "I am a string !");
   printf("String:[%s]\n", "I am a string !");
   _printf("Address:[%p]\n", addrs);
   printf("Address:[%p]\n", addrs);
   leng = _printf("Percent:[%%]\n");
   leng2 = printf("Percent:[%%]\n");
   _printf("Len:[%d]\n", leng);
   printf("Len:[%d]\n", leng2);
   _printf("Unknown:[%r]\n");
   printf("Unknown:[%r]\n");
   return (0);
}
