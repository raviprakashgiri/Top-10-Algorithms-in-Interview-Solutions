#include <iostream>
#define MAX_NUM 100
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[] = {11, 15, 6, 8, 9, 10};
	int size = sizeof(arr)/sizeof(arr[0]);
	int sum = 16;

	int binMap[MAX_NUM] = {0};
	int temp;
	for (int i = 0; i < size; ++i)
		{
			temp = sum - arr[i];	
			if (temp >= 0 && binMap[temp] ==1)
			{
				cout<<"found"<<temp<<":"<<arr[i]<<endl;
			}
			binMap[arr[i]] = 1;
		}	

	return 0;
}