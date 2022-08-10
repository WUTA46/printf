#include "main.h"

/**
 * get_print - selects the right print function
 * depending on conversion specifier
 * @s:character that holds conversion specifier
 * func_arr[] to find a match between specifier passed to print_f
 * Return: a pointer to printing function
 */

int (*get_printchar s))(va_list,flag_t*)
{
	ph func_arr[] = {
		{'i', print_int}, {'s', print_string},
		{'c', print_char}, {'d', print_int},
		{'u', print_unsigned}, {'x', print_hex},
		{'X', print_hex_big}, {'b', print_binary},
		{'o', print_octal}, {'R', print_rot13},
		{'r', print_rev}, {'S', print_bigS},
		{'p', print_address}, {'%' print_percent}
	};
	int flags = 14;
	register int i;
	for (i = 0; i < flags; i++)
		if (func_arr[i].c == s)
			return (func_arr[i].f);
	return (NULL);
}
