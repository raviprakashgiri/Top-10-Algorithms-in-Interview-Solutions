#include <iostream>

using namespace std;

int swap_(int* a, int* b)
{
	if(*a == *b)
		return 1;
	return *a ^= *b ^= *a ^= *b;
}

int main(int argc, char const *argv[])
{
	int arr[] = {34, 45, 23, 65, 762,3,4};
	int size = sizeof(arr)/sizeof(arr[0]);
	bool swapped;

	for (int i = 0; i < size - 1; ++i)
	{	
		swapped = false;
		for (int j = 0; j < size - i - 1; ++j)
		{
			if(arr[j] > arr[j+1])
			{
				swap_(&arr[j], &arr[j+1]);
				swapped = true;
			}	
		}
		if(!swapped)
			break;
	}
	for(int& a:arr)
		cout<<a<<":";
	return 0;
}