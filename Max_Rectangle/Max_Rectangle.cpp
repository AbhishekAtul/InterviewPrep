// Max_Rectangle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stack>
using namespace std;

int minrec(int *a, int sz)
{
	stack<int> st;
	int i = 0; int val = -1; int maxval = -1;
	while (i < sz)
	{
		if (st.empty() || (a[i] > a[st.top()]))
		{
			st.push(i);
			int d = st.top();
			i++;
		}
		else 
		{
			int p = st.top();
			st.pop();
			if(!st.empty())
			{
				int curr = st.top();
				val = curr - p + 1 + i - p -1;
			}
			else
			{
				val = p + 1 + i - p -1;
			}
		}
		if (maxval < val) maxval = val;
	}
	while (!st.empty())
	{
		int p = st.top();
		st.pop();
		if (!st.empty())
		{
			int curr = st.top();
			val = curr - p + 1 + i - p - 1;
		}
		else
		{
			val = p + 1 + i - p - 1;
		}
		if (maxval < val) 
			maxval = val;
	}
	return maxval;
}

int main()
{
	int a1[] = {1,2,3,4,5,6};
	int ans = minrec(a1, 6);
	int a2[] = {6,5,4,3,2,1};
	ans = minrec(a2,6);

	return 0;
}

