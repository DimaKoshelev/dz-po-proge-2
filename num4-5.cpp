// ConsoleApplication22.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

using namespace std;

int PrintDigits(unsigned int n);


int main()
{
	unsigned int n;
	cin >> n;
	if (n == PrintDigits(n)) cout << 1;
	//cout << "k=" << PrintDigitsR(12346) << endl;
	//system("pause");

	return 0;
}
int PrintDigits(unsigned int n) {
	int res = 0,t=0,g = 0;
	for (int m = n;m > 0;m /= 10, g++);
	for (;n > 0;n /= 10, res++) {
		t += (n % 10) * pow(10,g-1-res);
	}
	return t;
}

	