#include "main.h"
#include <unistd.h>
/**
        *_putchar - Writes the character c to standard output
	            *@c: the character to print
		    	            *Return: 1 on success
 		    	  *on error, retuns -1 and errno is set appopriately
			  	    */

int _putchar(char c)
{
		return (write(1, &c, 1));
}
