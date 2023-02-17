#include <stdio.h>
/**
 * main - A programs that alphabets in lower cases
 * Return:0 (success)
*/
int main(void)

{
	char lc = "a"

	while (lc <= "z")
	{
		putchar(lc);
		lc++;
	}
	putchar('\n');
	return (0);
}
