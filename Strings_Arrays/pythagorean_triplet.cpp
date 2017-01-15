#include <iostream>
#include <algorithm>
#include <cmath>
// #include <bits/stdc++.h>

using namespace std;

void pythagorean_triplet(int* arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		arr[i] = arr[i] * arr[i];
	}

	sort(arr, arr+n);
	// reverse(arr, arr+n);
	int j, k;
	// cout<<*arr;
	
	
	for (int i = n -1; i > 1; --i)
	{
		j = i - 1;
		k = 0;
		while(k < j)
		{
			// cout<<i<<" "<<j<<" "<<k<<endl;
			if (arr[k] + arr[j] == arr[i])
			{
				cout << "Found"<<sqrt(arr[k])<<":"<<sqrt(arr[j])<<":"<<sqrt(arr[i])<<endl;
				i--;
			}
			else if (arr[k] + arr[j] < arr[i])
			{
				k++;
			}
			else if (arr[i] + arr[j] > arr[k])
			{
				j--;
			}
			else
				cout<<"Something wrong!!!"<<endl;
		}
		
	}

}


int main(int argc, char const *argv[])
{
	int arr[] = {3, 1, 4, 17, 6, 5, 8, 15};
	int size = sizeof(arr)/sizeof(arr[0]);

	pythagorean_triplet(arr, size)	;
	// for(int& a : arr)
	// {
	// 	cout<<a<<" ";
	// }
	return 0;
}