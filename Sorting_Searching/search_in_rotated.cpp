#include <iostream>

using namespace std;

int find_piot(int* arr, int low, int high)
{
	if(low > high)
		return -1;
	if(low == high)
		return high;
	int mid = (low+high)/2;
	if(mid < high && arr[mid] > arr[mid + 1])
		return mid;
	if(mid > low && arr[mid] < arr[mid -1])
		return mid -1;
	if(arr[mid] <= arr[low])
		return find_piot(arr, low, mid -1);
	else 
		return find_piot(arr, mid + 1, high);

}

int binary_search(int* arr, int low, int high, int key)
{
	if(low > high)
		return false;
	int mid = (low + high)/2;
	if(arr[mid] == key)
		return true;
	else if(arr[mid] > key)
		return binary_search(arr, low, mid -1, key);
	else
		return binary_search(arr, mid + 1, high, key);
}

bool search_(int* arr, int begin, int end, int element)
{
	int piot = find_piot(arr, 0, end-1);

	if (piot == -1)
		return binary_search(arr, 0, end -1, element);
	if (arr[piot] == element)
		return true;
	else if (arr[0] < element)
		return binary_search(arr, 0, piot -1, element);
	else
		return binary_search(arr, piot +1, end -1, element);
}

int main(int argc, char const *argv[])
{
	int arr[] = {4, 5, 6, 7, 8, 9, 1, 2, 3};
	int size = sizeof(arr)/sizeof(arr[0]);
	int element = 6;

	search_(arr, 0, size, element)? cout<<"found"<<endl:cout<<"NOt found"<<endl;
	return 0;
}