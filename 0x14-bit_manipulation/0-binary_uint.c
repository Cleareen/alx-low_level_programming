#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - binary can be converted through unsigned int
 * @b: A string that takes binary number or numbers
 * Return: A numbers that are coverted
 */

unsigned int binary_to_uint(const char *b)
{
        int alx;
        unsigned int abraham = 0;

        if (!b)
                return (0);
        for (alx = 0; b[alx]; alx++)
        {
                if (b[alx] < '0' || b[alx] > '1')
                        return (0);
                abraham = 2 * abraham + (b[alx] - '0');
        }
        return (abraham);
}


===============1-print_binary.c=========

#include "main.h"

/**
 * print_binary - equivalent of a decimal number that prints a binary
 * @n: the amount or number binary to be printed
 */

void print_binary(unsigned long int n)
{
        int leona, Sis_hoffmann = 0;
        unsigned long int new;

        for (leona = 63; leona >= 0; leona--)
        {
                new = n >> leona;
                if (new & 1)
                {
                        _putchar('1');
                        Sis_hoffmann++;
                }
                else if (new)
                        _putchar('0');
        }
        if (!new)
                _putchar('0');
}
