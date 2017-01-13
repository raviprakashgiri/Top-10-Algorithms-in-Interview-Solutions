#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int a[] = {1, 2, 4, 5, 6};

	int size = sizeof(a)/sizeof(a[0]);
	/* APPROACH 1*/
	// int x1 = a[0], x2 = 1;
	// for (int i = 1; i < size; ++i)
	// {
	// 	x1 ^= a[i];
	// }
	// for (int i = 2; i <= size + 1; ++i)
	// {
	// 	x2 ^= i;
	// }
	// cout<<(x1^x2)<<endl;

	/* APPROACH 2*/

	int sum = (size+1)*(size +2)/2;
	int temp = 0;

	for (int i = 0; i < size; ++i)
	{
		temp += a[i];
	}
	cout<<sum - temp;

	return 0;
}