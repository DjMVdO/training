#include "insert_sort.h"

void insert_sort(int a[], size_t len)
{
	size_t i = 1;
	while (i<len)
	{
		size_t j =i;
		while (j>0) && (a[j-1]>a[j])
		{
			temp[j] = a[j];
			a[j] = a[j-1];
			a[j-1] = a[j];
		}
		++i;
	}
}

