#include <bits/stdc++.h>

using namespace std;

int find_triplet_(int* arr, int sum, int size)
{
	cout<<size<<endl;
	sort(arr, arr + size);
	// cout<<arr[2];
	int j, k, count = 0;
	for (int i = 0; i < size - 2; ++i)
	{
		j = i+1; k = size - 1;
		while(j < k)
		{
			if (arr[i] + arr[j] + arr[k] < sum)
			{
				count += k - j;
				j++;
			}
			else 
				k--;
		}
	}
	cout<<count<<endl;
	return 0;
}

int main(int argc, char const *argv[])
{
	int arr[] = {5, 1, 3, 4, 7};
	// cout<<arr<<endl;
	int size = sizeof(arr)/sizeof(arr[0]);

	int sum = 12;
	find_triplet_(arr, sum, size);
	return 0;
}
