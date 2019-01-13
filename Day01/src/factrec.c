#include "factrec.h"

long factrec(long n)
{
	long res = 1;
	if (n==0)
	{
		res = 1;
	}
	else
	{
		res = n*factrec(n-1);
	}

	return res;
}
