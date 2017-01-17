#include <iostream>
#include <climits>
using namespace std;


int main(int argc, char const *argv[])
{
	int arr[] = {10, 22, 28, 29, 30, 40}; // array is sorted
	int x = 54;
	int size = sizeof(arr)/sizeof(arr[0]);

	int min = INT_MAX;

	int l = 0, h = size -1;
	int l_value = 0, r_value = 0;


	while(l < h)
	{
		if(abs(arr[l] + arr[h] - x) < min)
		{
			min = abs(arr[l] + arr[h] - x);
			l_value = l;
			r_value = h;
		}	
		if (arr[l] + arr[h] > x)
			h--;
		else
			l++;
	}

	cout<<"r_value:"<<r_value<<"l_value:"<<l_value;

	return 0;
}