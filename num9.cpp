#include"pch.h"
#include<iostream>
using namespace std;
int main()
{
	int n;
	int a = 0;
	int b = 1;
	int c = 0;
	int i = 1;
	cin >> n;
	while (n > i) {
		c= a + b;
		a = b;
		b = c;
		i++;
	}
	cout << c;
	return 0;
}
