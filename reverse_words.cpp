// #include <iostream>
/*
** Leaving the extra call to reverse when more than one spaces are there
**
*/

#include <bits/stdc++.h>

using namespace std;

void reverse(char* begin, char* end)
{
	char temp;
	while(end > begin)
	{
		temp = *begin;
		*begin = *end;
		*end = temp;
		begin++;
		end--;
	}
}

void reverse_words(char* arr)
{
	char* arr_copy = arr;
	char* word_start = arr;

	while(*arr_copy) 
	{
		arr_copy++;
		if (*arr_copy == '\0')
		{
			reverse(word_start, arr_copy - 1);
		}
		else if (*arr_copy == ' ')
		{
			reverse(word_start, arr_copy - 1);
			word_start = arr_copy + 1;
		}
	}
	reverse(arr, arr_copy - 1);
}


int main(int argc, char const *argv[])
{
	
	char arr[] = "  Ravi      Prakash Giri";
	cout<< "before reversal:"<<arr<<endl;
	reverse_words(arr);
	cout<< "after reversal:"<<arr<<endl;
	
	return 0;
}