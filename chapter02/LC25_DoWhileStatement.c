//do..whileÑ­»·µÄbreak
#include <stdio.h>

int main()
{
	int i = 0;
	do
	{
		if (i == 5)
			break;
		printf("%d ", i);//´òÓ¡0 1 2 3 4
		i++;
	} while (i <= 10);

	return 0;
}