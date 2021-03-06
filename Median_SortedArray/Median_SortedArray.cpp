// Median_SortedArray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <algorithm>
using namespace std;

int median(int *a, int *b, int na, int nb)
{
	if (na <= 0) return -1;
	if (na == 1) return (a[0]+b[0])/2;
	if (na == 2) return ( max(a[0],b[0])+min(a[1],b[1]))/2;
	int ma = 0;
	if (na % 2 == 0)
	{
		int m1 = a[na / 2], m2 = a[na / 2 - 1];
		ma = (m1 + m2) / 2;
	}
	else
	{
		ma = a[na / 2];
	}
	int mb = 0;
	if (nb % 2 == 0)
	{
		int m1 = b[nb / 2], m2 = b[nb / 2 - 1];
		mb = (m1 + m2) / 2;
	}
	else
	{
		mb = b[nb/2];
	}
	if (ma == mb)
		return ma;
	if (ma < mb)
	{
		if (na % 2 == 1)
		{
			na = na / 2 + 1; 
		}
		else
		{
			na = na / 2 + 1;
		}
		if (nb % 2 == 1)
		{
			b = b + nb / 2; //nb=7 nb/2==3 b = b+3
			nb = nb / 2 + 1;
		}
		else
		{
			b = b + nb / 2 - 1; //nb=6 nb/2==3 b = b+2
			nb = nb / 2 + 1;
		}

	}
	else
	{
		if (na % 2 == 1)
		{
			a = a + nb / 2;
			na = na / 2 + 1;
		}
		else
		{
			a = a + na / 2 - 1;
			na = na / 2 + 1;
		}
		if (nb % 2 == 1)
		{
			nb = nb / 2 + 1;
		}
		else
		{
			nb = nb / 2 + 1;
		}
	}
	int ret = median(a,b,na,nb);
	return ret;
}
int main()
{
	int arr1[] = {1,2,3,6};
	int arr2[] = {4,6,8,10};
	int na = sizeof(arr1) / sizeof(int);
	int nb = sizeof(arr2) / sizeof(int);
	int ans = median(arr1, arr2, na, nb);
    return 0;
}

