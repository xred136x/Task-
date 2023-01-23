#include<iostream>
#include<string>
#include<map>

class Human {
public:
	Human() {
		std::cout << " онструктор Human\n";
	}
	int _age; // возраст человека
};
class Student : virtual public Human {
public:
	Student() {
		std::cout << " онструктор Student\n";
	}
};
class Worker : virtual public Human {
public:
	Worker() {
		std::cout << " онструктор Worker\n";
	}
};
class Driver : public Student, public Worker {// если бы к классу Worker и Student не примен€лось бы
public:										  // виртуальное наследование, то все public пол€ класса
	Driver() {								  // Human вызвались дважды, а т.к в у класса Human в поле
		std::cout << " онструктор Driver\n";  // указан возраст, то у Driver было бы 2 возраста, что неприемлемо.
	}
};
int main() {
	setlocale(LC_ALL, "ru");
	Driver dr;

	return 0;
}