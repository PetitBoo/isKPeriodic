#include "isKPeriodic.h"
#include <iostream>
#include <array>
using namespace std;

int main()
{
	char arr1[10] = "abcabcabc";
	char arr2[101] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	char arr3[73] = "dsfkffhijfnhdvgkjnfdjknbvjkdfnjknfdckslnkjnvkjfdnjkbvfdnjkrdfsnvjkdfnvkj";
	char arr4[214] = "kekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkekkek";
	char arr5[101] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";

	cout << isKPeriodic(arr1, 3) << endl;
	cout << isKPeriodic(arr1, 0) << endl;
	cout << isKPeriodic(arr1, -546) << endl;
	cout << isKPeriodic(arr1, 12) << endl;
	cout << isKPeriodic(arr1, 100001) << endl;
	cout << isKPeriodic(arr1, 6) << endl;
	cout << isKPeriodic(arr1, 9) << endl;
	cout << isKPeriodic(arr2, 10) << endl;
	cout << isKPeriodic(arr2, 11) << endl;
	cout << isKPeriodic(arr2, 101) << endl;
	cout << isKPeriodic(arr3, 2) << endl;
	cout << isKPeriodic(arr3, 8) << endl;
	cout << isKPeriodic(arr3, 23) << endl;
	cout << isKPeriodic(arr4, 23) << endl;
	cout << isKPeriodic(arr4, 9) << endl;
	cout << isKPeriodic(arr4, 3) << endl;
	cout << isKPeriodic(arr4, 2) << endl;
	cout << isKPeriodic(arr5, 10) << endl;

	return 0;
}