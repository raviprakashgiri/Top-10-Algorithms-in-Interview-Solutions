#include <bits/stdc++.h>
#define char_size_max  256

using namespace std;

bool anagram(string&  str1, string& str2)
{
	
	int arr[char_size_max] = {0};
	int i;
	for ( i = 0; str1[i], str2[i]; ++i)
	{
		arr[str1[i]]++;
		arr[str2[i]]--;
	}
	// cout<<arr<<endl;
	if (str1[i] || str2[i])
	{
		return false;
	}
	for (int i = 0; i < char_size_max; ++i)
	{
		if (arr[i])
		{
			return false;
		}
	}
	return true;

}

int main(int argc, char const *argv[])
{
	string str1 = "ravi$prak ashgi.ri";
	string str2 = "giri $raviprak.ahs";

	bool res = anagram(str1, str2);

	res?cout<<"It's an Anagram"<<endl:cout<<"Not an Anagram:"<<endl;

	return 0;
}
