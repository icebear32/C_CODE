//do..while循环的break
#include <stdio.h>

int main()
{
	int i = 0;
	do
	{
		if (i == 5)
			break;
		printf("%d ", i);//打印0 1 2 3 4
		i++;
	} while (i <= 10);

	return 0;
}