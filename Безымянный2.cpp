#include <iostream>
#include <string>
using namespace std;

int main(){
	setlocale(0, "rus");

	float a;
	float b;
	int s;
	cout <<"1 �����";
	cin >> a;
	cin.ignore();
	cout <<"2 �����";
	cin >> b;
	cin.ignore();
	cout << "����� �������� " << endl << "1 - +"<< endl << "2 - -"<< endl << "3 - *"<< endl << "4 - /";
	cin  >> s;
	cin.ignore();
	switch(s){
		case 1:
			cout << a+b;
			break;
		case 2:
			cout << a-b;
			break;
		case 3:
			cout << a*b;
			break;
		case 4:
			cout <<a/b;
			break;
	}
	cin.get();
}
