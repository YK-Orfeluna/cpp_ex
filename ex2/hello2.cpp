//hello2.cpp

#include <iostream>
#include <string>		//stringを使うための準備
using namespace std;

int main()
{
	string name;		//名前
	int age;			//年齢

	cout << "Hello. I am computer" << endl;
	cout << "Please input your name" << endl;
	
	cout << ">>";
	cin >> name;		//cinで入力

	cout << name << ", nice to meet you." << endl;

	cout << "Please input your age."  << endl;

	cout << ">>";
	cin >> age;

	cout << "O.K., you are " << age << "y.o." << endl;



}