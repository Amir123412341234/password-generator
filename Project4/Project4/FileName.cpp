#include <iostream>
#include <cmath>
using namespace std;

int main(){
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int i;

	cout << "Введите числитель: ";

	cin >> i;
	int j;

	cout << "Введите знаменатель: ";

	cin >> j;

	cout << i <<" В степени " << j << " = " << pow(i, j) << endl;

	return 0;
}