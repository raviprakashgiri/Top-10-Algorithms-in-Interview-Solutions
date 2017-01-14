#include <iostream>
// #include <>

// order log n complexity

using namespace std;

float power(float x, int y)
{
	/* For positive integers only */

	// long long int temp;
	// if (y == 0)
	// 	return 1;
	// temp = power(x, y/2);

	// if (y % 2 == 0)
	// 	return temp*temp;
	// else
	// 	return x*temp*temp;

	/* For Float and negative numbers */

	float temp;
	if (y == 0)
	{
		return 1;
	}
	temp = power(x , y/2);
	
	if (y % 2 == 0)
	{
		return temp * temp;
	}
	else
	{
		if (y > 0)
		{
			return x * temp * temp;
		}
		else
			return (temp * temp) / x;
	}


}

int main(int argc, char const *argv[])
{
	int x = 3, y = 5; //Caculate 2^5

	cout<<power(x, y)<<endl;

	return 0;
}