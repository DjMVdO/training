#include "digit_count.h"

size_t digit_count(int n)
{
	size_t res = 0;
	while (n != 0)
	{
		n = n/10;
		++res;
	}

	return res;
}
