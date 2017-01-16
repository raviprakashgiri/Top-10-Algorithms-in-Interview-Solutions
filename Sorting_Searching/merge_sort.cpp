#include <iostream>

using namespace std;

int merge(int* arr, int low, int mid, int high)
{
	int n1 = mid - low + 1;
	int n2 = high - mid;
	int L[n1], R[n2];
	int i;

	for (i = 0; i < n1; ++i)
	{
		L[i] = arr[low + i];
	}
	for (i = 0; i < n2; ++i)
	{
		R[i] = arr[mid + 1 + i];
	}
	i = 0; int j = 0, k = low;
	while( i < n1 && j < n2)
	{
		if(L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	
	while( i < n1)
	{
		arr[k] = L[i];
		i++; k++;
	}
	while( j < n2)
	{
		arr[k] = R[j];
		j++; k++;
	}

}

int merge_sort(int* arr, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid = low + (high-low)/2;
		merge_sort(arr, low, mid);
		merge_sort(arr, mid+1, high);

		merge(arr, low, mid, high);
	}
}


int main(int argc, char const *argv[])
{
	int arr[] = {12, 11, 13, 5, 6, 7};
	int size = sizeof(arr)/sizeof(arr[0]);

	merge_sort(arr, 0, size -1);
	for(int& a: arr)
		cout<<a<<":";

	return 0;
}