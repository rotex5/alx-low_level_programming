#include "main.h"
/**
 * main - Entry point
 *
 * Description : a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{      

        char alpha = 'a';
        

        while(alpha <= 'z')
        {       
                _putchar(alpha);
                alpha++;

        }
        _putchar('\n');
}
