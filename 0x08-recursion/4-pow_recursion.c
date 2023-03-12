#include "main.h"
/**
 * _pow_recursion - Returns the value of x raised y.
 * @x: The number to be raised.
 * @y: The numbre raised.
 *
 * Return: The value of x raised y.
 */
int _pow_recursion(int x, int y)
{
int result = x;
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
result *= _pow_recursion(x, y - 1);
return (result);
}
