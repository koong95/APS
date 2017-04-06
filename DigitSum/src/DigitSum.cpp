//============================================================================
// Name        : DigitSum.cpp
// Author      : koong
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int digit_sum(int num);
int main() {
	int num = 2345;
	int sum = digit_sum(num);

	cout << "digit sum of "<< num << " : " << sum << endl;
	return 0;
}

int digit_sum(int num)
{
	if(num == 0) return 0;
	else
		return num%10 + digit_sum(num/10);
}
