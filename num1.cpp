
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int a;
	int b;
	int d;
	cout<<"Введите скорость:";
	cin >> a;
	cout << "Введите время:";
	cin >> b;
	while (b<0){
		cout<<"Время не может быть отрицательным,введите другое:";
			cin >> b;
	}
	cout << "Расстояние до отметки:";
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


