#include <bits/stdc++.h>

using namespace std;

void swap_int(int* a, int* b)
{
	if(*a == *b)
		return ;
	*a ^= *b ^= *a ^= *b;	
}
int main(int argc, char const *argv[])
{
	int arr[] = {1, 4, 3, 2};
	int size = sizeof(arr)/sizeof(arr[0]);

	for (int i = 0; i < size - 1; ++i)//check the limit
	{
		if (i % 2)
		{
			if (arr[i] < arr[i+1])
				swap_int(&arr[i], &arr[i+1]);
		}
		else
		{
			if (arr[i] > arr[i+1])
				swap_int(&arr[i], &arr[i+1]);
			
		}
	}
	for(int& a : arr)
	{
		cout<<a<<" ";
	}

	return 0;
}