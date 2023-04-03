#include "main.h"

/**
 * set_string - Function to set the value of a pointer to a char
 * @s: Pointer to pointer
 * @to: Pointer
 */

void set_string(char **s, char *to);
{
	*s = to;
}
