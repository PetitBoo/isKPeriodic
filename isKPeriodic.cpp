#include <iostream>
#include <array>

#define MAX 1000;
using namespace std;

bool isKPeriodic(char* arr, int K)
{
	if (K < 1)
	{
		cout << "K < 1" << endl;
		return false;
	}
	if (K > 1000)
	{
		cout << "K > MAX" << endl;
		return false;
	}
	int len = strlen(arr);
	if (len < K)
	{
		cout << "len < K" << endl;
		return false;
	}
	int a = len % K;
	if (a != 0)
	{
		cout << "len % K != 0" << endl;
		return false;
	}
	char temp;
	int i = 0;
	while (i < K)
	{
		a = len / K;
		temp = arr[i];
		int j = i;
		while (a > 1) 
		{
			if (arr[j] != arr[j + K])
			{
				cout << "K is not Periodic!" << endl;
				return false;
			}
			j += K;
			a--;
		}
		i++;
	}
	cout << "K is Periodic!" << endl;
	return true;
}