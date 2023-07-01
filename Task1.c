#include "main.h"

int print_unsgined_number(unsigned int f)

{

	int check;

	int len;

	unsigned int num;



	check = 1;

	len = 0;



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
