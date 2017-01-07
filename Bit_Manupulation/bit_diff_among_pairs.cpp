#include <bits/stdc++.h>

/*
** For 32-bit of integer
**
*/

using namespace std;

int main(int argc, char const *argv[])
{
	
	int arr[] = {1, 3, 5};
	int size = sizeof(arr)/sizeof(arr[0]);
	int result = 0;

	for (int i = 0; i < 32; ++i)
	{
		int count = 0;
		for (int j = 0; j < size; ++j)
		{
			if(arr[j] & 1 << i)
				count++;
		}
		result += count * (size-count) * 2;
	}

	cout<<result<<endl;

	return 0;
}