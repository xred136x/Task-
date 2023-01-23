#include<iostream>
#include<string>
#include<map>

class Human {
public:
	Human() {
		std::cout << "����������� Human\n";
	}
	int _age; // ������� ��������
};
class Student : virtual public Human {
public:
	Student() {
		std::cout << "����������� Student\n";
	}
};
class Worker : virtual public Human {
public:
	Worker() {
		std::cout << "����������� Worker\n";
	}
};
class Driver : public Student, public Worker {// ���� �� � ������ Worker � Student �� ����������� ��
public:										  // ����������� ������������, �� ��� public ���� ������
	Driver() {								  // Human ��������� ������, � �.� � � ������ Human � ����
		std::cout << "����������� Driver\n";  // ������ �������, �� � Driver ���� �� 2 ��������, ��� �����������.
	}
};
int main() {
	setlocale(LC_ALL, "ru");
	Driver dr;

	return 0;
}