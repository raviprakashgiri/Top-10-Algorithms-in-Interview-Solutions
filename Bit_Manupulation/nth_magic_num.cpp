#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	long number = 6;

	long result = 0;
	int count = 0;

	while(number)
	{	count++;
		
		long temp = number & 1L;
		if (temp)
		{
			result += temp * pow(5, count);
		}
		
		number >>= 1;
	}

	cout<< result<<endl;

	return 0;
}