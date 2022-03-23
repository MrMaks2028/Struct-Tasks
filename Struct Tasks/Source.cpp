#include <iostream>
#include <math.h> // �������� � ���� ������� sqrt � pow()
using namespace std;

struct person {
		string name;
		int age;
		int coins[5];
	};

void showPerson(person &P) {
	cout << "���: " << P.name << endl;
	cout << "�������: " << P.age << endl;
	cout << "������: ";
	for (int i = 0; i < 5; i++)
		cout << P.coins[i] << ", ";
	cout << "\b\b \n";
}
inline int yearOfBirth(person &P, int year) {
	return year - P.age;
}
int cash(person &P) {
	int sum = 0;
	for (int i = 0; i < 5; i++)
		sum += P.coins[i];
	return sum;
}

struct coord {
	int X;
	int Y;
};

int compareDistance(coord &A, coord &B) {
	double distA = sqrt(pow(A.X, 2) + pow(A.Y, 2));
	double distB = sqrt(pow(B.X, 2) + pow(B.Y, 2));
	if (distA > distB)
		return 1;
	if (distB > distA)
		return -1;
	return 0;
}

int main() {
	setlocale(LC_ALL, "Russian");
	  
	//������ 1
	cout << "������ 1.\n�������� �� �������:\n";
	person Maks = { "MrMaksutka 2028", 22, {10,20,30,40,50} };
	showPerson(Maks);
	cout << "��� ��������: " << yearOfBirth(Maks, 2022) << endl;
	cout << "����� ����������: " << cash(Maks) << "\n\n";

	//������ 2
	cout << "������ 2.\n";
	coord pointA = { 4,2 }; coord pointB = { 7,-8 };
	cout << compareDistance(pointA, pointB) << "\n\n";
	
	return 0;
}