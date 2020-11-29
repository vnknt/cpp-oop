#include<iostream>


class Shape {
protected:
	double A, C;
	std::string shape;

public:
	virtual void type() {
	}
	virtual void area() {
	}
	virtual void perimeter() {
	};


	double get_area() {
		return A;

	}

	double get_perimeter() {
		return C;
	}
	std::string get_shape() {
		return shape;
	}


};


class Circle : public Shape {
private:
	double r;
public:
	Circle(double r) {
		this->r = r;

	}

	void type() {
		this->shape = "Circle";
		std::cout << this->get_shape() << std::endl;

	}

	void area() override {
		this->A = (3.14) * r * r;
		std::cout << this->get_area()<<std::endl;
	}

	void perimeter() override {
		this->C = 2 * 3.14 * r;
		std::cout << this->get_perimeter()<<std::endl;
	}
};



class Square : public Shape {
private:
	int x ,  y;
public:
	Square(int x, int y) {
		this->x = x;
		this->y = y;

	}

	void type() {
		this->shape = "Square";
		std::cout << this->get_shape() << std::endl;

	}

	void area() override {
		this->A = x*y;
		std::cout << this->get_area() << std::endl;
	}

	void perimeter() override {
		this->C = 2 * (x+y);
		std::cout << this->get_perimeter() << std::endl;
	}


};


class Triangle : public Shape {
private:
	int a, h;
public :
	Triangle(int a, int h) {
		this->a = a;
		this->h = h;
	}
	void type() {
		this->shape = "Triangle";
		std::cout << this->get_shape() << std::endl;

	}

	void area() override {
		this->A =a*h/2;
		std::cout << this->get_area() << std::endl;
	}


	void perimeter() override {

		std::cout << "Perimeter of " << this->get_shape() << " is not calculated" << std::endl;

	}









};







int main() {



	Circle circle(1);
	circle.type();
	circle.area();
	circle.perimeter();


	Square kare(5, 3);
	kare.type();
	kare.area();
	kare.perimeter();




	Triangle ucgen(5,10);
	ucgen.type();
	ucgen.area();
	ucgen.perimeter();


	
	
}











void clear() {
	int x;
	for (x = 0; x < 50; x++) {
		std::cout << std::endl;
		
	}
}