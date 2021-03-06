// Rotated_Array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int retmin(int arr[7], int sz)
{
	int l = 0, h = sz - 1;
	int mid = (l + h) / 2;
	while (l <= h)
	{
		int mid = (l + h) / 2;
		if (l == h) return arr[l];
		else if (h - l == 1)
		{
			int el = arr[l];
			if (el > arr[h]) el = arr[h];
			return el;
		}
		if (arr[mid] < arr[mid - 1] && arr[mid] < arr[mid + 1])
			return arr[mid];
		if (arr[mid] > arr[h])
		{
			l = mid + 1;
		}
		else if (arr[mid] < arr[l])
		{
			h = mid - 1;
		}
		else if (arr[mid] > arr[l] && arr[mid] < arr[h])
		{
			h = mid - 1;
		}
	}
}
int main()
{
	int arr1[] = {1,2,3,4,5,6,7};
	int a = retmin(arr1, 7);
	cout << a << endl;
	int arr2[] = { 6,7,1,2,3,4,5 };
	a = retmin(arr2, 7);
	cout << a << endl;
	int arr3[] = { 5,6,7,1,2,3,4};
	a = retmin(arr3, 7);
	cout << a << endl;
	int arr4[] = { 4,5,6,7,1,2,3};
	 a = retmin(arr4, 7);
	cout << a << endl;
	int arr5[] = { 3,4,5,6,7,1,2};
	a = retmin(arr5, 7);
	cout << a << endl;
	int arr6[] = { 2,3,4,5,6,7,1};
	a = retmin(arr6, 7);
	cout << a << endl;
	int arr7[] = { 1,2,3,4,5,6,7};
	a = retmin(arr7, 7);
	cout << a << endl;
    return 0;
}

