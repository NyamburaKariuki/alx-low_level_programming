#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
    *op_add - function to add inetegres
    *@a: first inetegr
    *@b: second integer
    *Return: Always 0 (Success)
    */

int op_add(int a, int b)
{
	return (a + b);
}

/**
   *op_sub - function to get the difference of 2 inetegres
   *@a: first integer
   *@b:second integer
   *Return: Always 0 (Success)
   */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  *op_mul - function to multiply 2 numbers
  *@a: first integer
  *@b:second integer
  *Return: Always 0 (Success)
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  *op_div - function to get the results of dividing 2 integers
  *@a: first integer
  *@b:second integer
  *Return: Always 0 (Success)
  */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - function to get the remainder of division od a by b
 *@a: first integer
 *@b:second integer
 *Return: Always 0 (Success)
 */
int op_mod(int a, int b)
{
	return (a % b);
}
