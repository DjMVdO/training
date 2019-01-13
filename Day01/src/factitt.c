#include "factitt.h"

long factitt(long n)
{
	long res =1;
	if (n==0)
	{
		res = 1;
	}
	for (long i=1; i<=n; ++i)
	{
		res *=i;
	}

	return res;

}
