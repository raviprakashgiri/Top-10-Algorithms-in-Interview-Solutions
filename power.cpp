#include <iostream>
// #include <>

// order log n complexity

using namespace std;

long long power(int x, int y)
{
	long long int temp;
	if (y == 0)
		return 1;
	temp = power(x, y/2);

	if (y % 2 == 0)
		return temp*temp;
	else
		return x*temp*temp;


}

int main(int argc, char const *argv[])
{
	int x = 3, y = 5; //Caculate 2^5

	cout<<power(x, y)<<endl;

	return 0;
}