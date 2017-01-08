#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int arr[] = {233, 599, 45, 714, 93};
	int size = sizeof(arr)/sizeof(arr[0]);
	int first, second;

	first = second = INT_MAX;

	for (int i = 0; i < size; ++i)
	{
		if (arr[i] < first)
		{
			second = first;
			first = arr[i];
			
		}
		else if((arr[i] < second) && (arr[i] != first))
			second = arr[i];
	}
	if (second == INT_MAX)
	{
		cout<<"No second Smallest present!!!"<<endl;
	}
	else
		cout<<"first Smallest : "<<first<<"second Smallest :"<<second<<endl;


	return 0;
}