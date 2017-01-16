#include <iostream>

using namespace std;

int find_pivot(int* arr, int low, int high)
{
	if(high < low)
		return -1;
	if(low == high)
		return low;
	int mid = (low + high)/2;
	if(arr[mid] > arr[mid + 1])
		return mid;
	else if (arr[mid] < arr[mid -1])
		return mid -1;
	else if(arr[low] > arr[mid])
		return find_pivot(arr, low, mid -1);
	else
		return find_pivot(arr, mid +1, high);

}

int find_min(int* arr, int size)
{
	int pivot = find_pivot(arr, 0, size -1 );

	if(pivot == -1 || size == 1 )
		return arr[0];
	else
		return arr[pivot + 1];
}

int main(int argc, char const *argv[])
{
	int arr[] = {-2,-8};
	int size = sizeof(arr)/sizeof(arr[0]);

	int min = find_min(arr, size);
	cout<<"min is:"<<min<<endl;
	return 0;
}
