#include "main.h"
/**
 * print_number - Prints a number
 * @args: arguments
 * @f: number of type va_arg
 * @check: 
 * @len: length
 * @num: nuber
 * Return: length
 */
int print_number(va_list args)

{

	int f;

	int check;

	int len;

	unsigned int num;



	f  = va_arg(args, int);

	check = 1;

	len = 0;



	if (f < 0)

	{

		len += _putchar('-');

		num = f * -1;

	}

	else

		num = f;



	for (; num / check > 9; )

		check *= 10;



	for (; check != 0; )

	{

		len += _putchar('0' + num / check);

		num %= check;

		check /= 10;

	}



	return (len);

}
