#include"pch.h"
#include<iostream>
using namespace std;
int main()
{
	int a;
	int b = 0;
	int c = 1;
	int d = 1;
	cin >> a;
	while (a != 0) {
		b = a;
		cin >> a;
		if (b == a) {
			c++;
		}
		else {
			if (c > d) {
				d = c;
			}
			c = 1;
		}
	}
	cout << d;
	return 0;
}