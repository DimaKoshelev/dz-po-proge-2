
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int a;
	int b;
	int d;
	cout<<"������� ��������:";
	cin >> a;
	cout << "������� �����:";
	cin >> b;
	while (b<0){
		cout<<"����� �� ����� ���� �������������,������� ������:";
			cin >> b;
	}
	cout << "���������� �� �������:";
		d=a * b;
		if (d < 0) d = d * (-1);
		while (d>=109)
		{
			d = d - 109;
		}
		
		
		if (d > 0) cout << "" << d;
		if (d = 0)  cout << "0";




	return 0;


}


