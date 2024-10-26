#include<iostream>
using namespace std;
int main() {
	int num, sum = 0;
	cout << "ENTER THE NATURAL NUMBERS :\n";
	cin >> num;
	for (int i= 1;  i<=num;  i++)
	{
		sum = sum + i;
	}
	cout << "THE SUM OF FIRST " << num << " NATURAL NUMBERS IS :" << sum << "\n";
	return 0;
}