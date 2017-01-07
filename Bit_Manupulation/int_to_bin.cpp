#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int number = 4;
	int size = sizeof(number)*8;
	// cout<<size<<endl;
	int temp = 1 << 31;
	int curr = 0;
	int count = 0;
	while(number)
	{
		curr = number & temp;
		curr?cout << "1": cout << "0";
		number <<= 1;
	// 	string str = bitset<32>(number).to_string();
	// bitset<32> _print(str);
	// cout<<_print<<endl;
		count++;
	}
	while(count++ < size)
		cout<<"0";

	return 0;
}