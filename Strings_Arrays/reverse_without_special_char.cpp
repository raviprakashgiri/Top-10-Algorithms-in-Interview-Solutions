#include <bits/stdc++.h>

using namespace std;

bool valid_alpha(char c)
{
	return ((c >='a' && c <= 'z') ||(c >='A' && c <= 'Z'));
}

void reverse_chars(char* str, int n)
{
	char* begin = str;
	char* end = begin + n -1;

	char temp;
	while(begin < end)
	{
		if (valid_alpha(*begin))
		{
			if (valid_alpha(*end))
			{
				temp = *begin;
				*begin++ = *end;
				*end-- = temp;
			}
			else
				*end--;
		}
		else
			*begin++;

	}
}

int main(int argc, char const *argv[])
{
	char arr[] = "a!!!b.c.d,e'f,ghi";
	int size = sizeof(arr)/sizeof(arr[0]);
	cout<<size<<endl;

	cout<<"chars becore reversal:"<<arr<<endl;

	reverse_chars(arr, size);

	cout<<"chars after reversal:"<<arr<<endl;

	return 0;
}