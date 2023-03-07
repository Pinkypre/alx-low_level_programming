#include"main.h"
/**
 * _strchr - Entry poiny
 * @s: input
 *@c: input
 *Return Always 0 (Success)
 */
char*_strchr(char*s,char c)
{
	int i = 0;
	
	for (; s[i] &gt;= &#39;\0&#39;; i++)
	{
		if(s[i] == c)
			return (&s[i]);
	}
	return (0);
}
