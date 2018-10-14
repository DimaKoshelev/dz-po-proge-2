#include<iostream>
using namespace std;
int main()
{
	int a = 0;
	int p = 0;
	int n;
	int i = 0;
	do{
		cin >> n;
		if ( a > p && a > n && p != 0) i++;
		p = a;
		a = n;
	}
	while(n != 0);
	cout << i;
    return 0;
}
