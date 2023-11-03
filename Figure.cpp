#include <iostream>
#include <windows.h> 

class Figure {
protected:
	int num = 0;
	std::string name = "Фигура";
public:
	int sides() {
		return num;
	}

	std::string get_name() {
		return name;
	}
};

class Triangle : public Figure {
public:
	Triangle() : Triangle("Треугольник",3) { }
	Triangle(std::string name,int num) {
		this->name = name;
		this->num = num;
	}
};

class Quadrangle : public Figure {
public:
	Quadrangle() : Quadrangle("Четырехугольник", 4) { }
	Quadrangle(std::string name, int num){
		this->name = name;
		this->num = num;
	}
};

int main() {
	Figure fig1;
	Triangle fig2;
	Quadrangle fig3;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "Количество сторон:" << std::endl;
	std::cout << fig1.get_name() << ": " << fig1.sides() << std::endl;
	std::cout << fig2.get_name() << ": " << fig2.sides() << std::endl;
	std::cout << fig3.get_name() << ": " << fig3.sides() << std::endl;
}