#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int number = 23;
	string str_num = bitset<32>(number).to_string();
	bitset<32> bit_str_num(str_num);
	cout<<"before swapping:"<<bit_str_num<<endl;

	int even_bits = number & 0xAAAAAAAA;
	int odd_bits = number & 0x55555555;

	even_bits >>= 1;
	odd_bits <<= 1;
	cout<<(even_bits | odd_bits)<<endl;
	str_num = bitset<32>(even_bits|odd_bits).to_string();
	bitset<32> bit_str_num1(str_num);
	cout<<"after swapping:"<<bit_str_num1<<endl;

	return 0;
}