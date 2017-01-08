#include <bits/stdc++.h>

using namespace std;

int find_different(int * arr, int n)
{
	int int_size = sizeof(int) * 8;
	int count, res = 0;
	// cout<<int_size<<endl;
	for (int i = 0; i < int_size; ++i)
	{
		count = 0;
		for (int j = 0; j < n; ++j)
		{
			if (arr[j] & 1 << i)
			{
				count++;
			}
			// (arr[i] & 1 << i)?count++:;
		}
		// (count % 3)?res |= 1 << i:;
		// cout<<count<<endl;
		if (count % 3)
		{
			res |= (1 << i);
		}
	}
	return res;
}

int main(int argc, char const *argv[])
{
	int array[] = {12, 1, 12, 3, 12, 1, 1, 2, 3, 2, 2, 3, 7};

	int size = sizeof(array)/sizeof(array[0]);

	int result = find_different(array, size);
	cout<<result<<endl;

	return 0;
}