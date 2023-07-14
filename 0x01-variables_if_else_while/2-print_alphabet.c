#include <stdio.h>
/**printing lowercase letters
 *return:always (success)
 **/
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
	putchar(c);
	c++;
	}
	putchar('\n');
	return (0);
}
