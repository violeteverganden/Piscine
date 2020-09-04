#include <stdio.h>

int	main()
{
	int table[10];

	for (int i = 0; i < 10; i++)
		table[i] = i;
	ft_rev_int_tab(table, 10);
	for (int i = 0; i < 10; i++)
		printf("%d", table[i]);
}

