// find_base_squareroot.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int base_sqrt(int elem)
{
	int mid;
	int low = 0;
	int high = elem;
	int ans = low;
	while (low <= high)
	{
		mid = (low+high) / 2;
		if (mid*mid == elem) return mid;
		else if (mid*mid > elem)
		{
			high = mid-1;
		}
		else if(mid*mid < elem)
		{
			ans = mid;
			low = mid + 1; 
		}
	}
	return ans;
}


int main()
{
	for (int i = 100; i > 90; i--)
	{
		cout << base_sqrt(i)<<endl;
	}
    return 0;
}

