#include <unistd.h>

/**
 *this is 0x08 c putchat.c
 */
int _putchar(char c)
{
	return write(STDOUT_FILENO,&c, 1);
}
