#include <iostream>
#include <cmath>
using namespace std;

int main(){
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int i;

	cout << "������� ���������: ";

	cin >> i;
	int j;

	cout << "������� �����������: ";

	cin >> j;

	cout << i <<" � ������� " << j << " = " << pow(i, j) << endl;

	return 0;
}