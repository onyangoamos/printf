#include "main.h"

/**
 * get_width - Calculates the width for printing
 * @format: Formatted string in which to print the arguments.
 * @m: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: width.
 */
int get_width(const char *format, int *m, va_list list)
{
	int curr_m;
	int width = 0;

	for (curr_m = *m + 1; format[curr_m] != '\0'; curr_m++)
	{
		if (is_digit(format[curr_m]))
		{
			width *= 10;
			width += format[curr_m] - '0';
		}
		else if (format[curr_m] == '*')
		{
			curr_m++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*m = curr_i=m - 1;

	return (width);
}
