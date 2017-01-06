// #include <iostream>
/*
** O(n^2)
**
*/
#include <bits/stdc++.h>

using namespace std;

int calculate_xor(int* arr, int arr_size)
{
	
	//cout<<arr_size<<endl;
	int max_xor = INT_MIN;

	for (int i = 0; i < arr_size; ++i)
	{
		int xor_init = 0;
		for (int j = i; j < arr_size; ++j)
			{
				xor_init ^= arr[j];
				max_xor = max(max_xor, xor_init);
			}	
	}
	return max_xor;
}


int main(int argc, char const *argv[])
{
	int arr[] = {1, 2, 12, 8};
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	int result = calculate_xor(arr, arr_size);
	cout<<"max xor is:"<<result<<endl;

	return 0;
}