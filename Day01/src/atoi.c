#include "atoi.h"


int atoi(char *str)
{
	int res = 0;
	for (int i = 0; str[i] != '\0';++i)
	{
		res = res*10 + str[i] - '\0';
	}

	return res;
