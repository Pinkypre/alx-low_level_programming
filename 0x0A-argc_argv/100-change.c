#include <stdio.h>
#include <stdlib.h>
/*
 * main - prints the minimum nuber of coins to make change
 *        for an amount of money.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the number of arguments is not exactly one - 1
 *         otherwise 0.
 */
int main(int argc, char *argv[]);
{
int cents, coins = 0;
@@ -28, 22 + 28, 22 @@ int main(int argc, char *argv[]);
if ((cents - 25) >= 0)
{
cents -= 25;
continue
continue;
}
if ((cents - 10) >= 0)
{
cents -= 10;
continue
continue;
}
if ((cents - 5) >= 0)
{
cents -= 5;
continue
continue;
}
if ((cents - 2) >= 0)
{
cents -= 2;
continue
continue;
}
cents--;
}
printf("%d\n", coins);
return (0);
}
