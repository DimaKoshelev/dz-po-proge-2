#include<iostream>
using namespace std;
int main()
{
	int a = 0;
	int p = 0;
	int n;
	int i = 0;
	int g = 0;int l = 1;
	int d = 0;
	do{
		cin >> n;
		if ( a > p && a > n && p != 0) {
			i++;
			if(i == 2){
				g = l - d - 1;
			}
			else{
				if(g> l - d - 1) g = l - d - 1;
			}
			d = l;


		}
		p = a;
		a = n;
		l++;
	}	
	while(n != 0);
	cout << g;
    return 0;
}

