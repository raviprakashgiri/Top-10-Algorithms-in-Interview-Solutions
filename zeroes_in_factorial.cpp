#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	
	int number = 5;
	int temp, twoes = 0, fives = 0;
	for (int i = 2; i <= number; ++i)
	{
		temp = i;
		
			while ( temp % 2 == 0 || temp % 5 == 0)
			{
				if (temp % 2 == 0)
				{
					twoes++;
					temp /= 2;
				}
				else{
					fives++;
					temp /= 5;	
				}
				
			}	
		

	}
	(twoes > fives)? cout<<fives : cout<<twoes ;

	return 0;
}