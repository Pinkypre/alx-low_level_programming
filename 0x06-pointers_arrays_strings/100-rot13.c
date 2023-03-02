#include "main.h"

/**
 * rot13 - encoder rot13
 * @s:pointer to string params
 *
 * Return:*s
 */

char *rot13(char *S)
{
	int i;
	int j;
	char datal[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; S[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (S[i] == datal[j])
			{
				S[i] = datarot[j];
				break;
			}
		}
	}

	return (S);
}
