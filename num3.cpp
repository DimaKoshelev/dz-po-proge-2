#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	char a = 'a', t;
	cout<< "+------+----+--------+----+"<<endl;
	cout<< "| Char |Dec |   Hex  |Oct |"<<endl;
	cout<< "+------+----+--------+----+"<<endl;
	for (int i = a; i <= 'z';i++){
		t = i;
		if(i < 100){
		
			cout <<"| "<< t <<"    |" <<dec<<t+0<<"  |" << hex <<t+0 <<"      |"<<oct<<t+0<<" |"<<endl;
			cout<< "+------+----+--------+----+"<<endl;
		}
		else{
			cout <<"| "<< t <<"    |" <<dec<<t+0<<" |" << hex <<t+0 <<"      |"<<oct<<t+0<<" |"<<endl;
			cout<< "+------+----+--------+----+"<<endl;
		}
	}
	a = '0';
	for(int i = a; i <= '9'; i++){
		t =  i;
		cout <<"| "<< t <<"    |" <<dec<<t+0<<"  |" << hex <<t+0 <<"      |"<<oct<<t+0<<"  |"<<endl;
		cout<< "+------+----+--------+----+"<<endl;
	}
    return 0;
}

