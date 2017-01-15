#include <iostream>
#include <algorithm>
using namespace std;

bool binary_search(int* arr, int begin, int end, int element)
{
	if (begin < end)
	{
		if (element == arr[(begin+end)/2])
		{
			return true;
		}
		else if (element < arr[(begin+end)/2])
		{
			binary_search(arr, begin, (begin+end)/2, element);
		}
		else
			binary_search(arr, ((begin+end)/2) +1, end, element);
	}
	else
		return false;
	
}

int main(int argc, char const *argv[])
{
	int arr[] = {2, 4, 5, 23, 434, 12, 45, 65 , 34};
	int size = sizeof(arr)/sizeof(arr[0]);
	sort(arr, arr + size);
	int element = 34;
	binary_search(arr, 0, size, element)? cout<<"Found"<<endl:cout<<"Not found"<<endl;

	return 0;
}