#include <iostream>
#include <string>
#include <cmath>
using namespace std;


class Polygon {
public:
	Polygon() : mPoint(0), mLength(0.0) {}
	Polygon(int point, float length) : mPoint(point) , mLength(length) {}
	~Polygon() {}
	virtual void calcPerimeter() 
	{if (mPoint ==0 && mLength ==0){
		cout << "Perimeter : empty" << endl;
	}
	else{
		cout << "Perimeter : " << mPoint * mLength << endl;
	}}
	virtual void calcArea() 
	{if (mPoint ==0 && mLength ==0){
		cout << "Area : empty" << endl;
	}
	else{
		cout << "Area : " << endl;
	}}
protected:
	int mPoint; // 꼭지점의 갯수
	double mLength; // 한 변의 길이
};

class Rectangle : public Polygon {
public:
	Rectangle() {}
	Rectangle(int point, float length) : Polygon::Polygon(point, length) {}
	~Rectangle() {}
	void calcPerimeter() override {cout << "Perimeter : " << mPoint * mLength << endl;}
	void calcArea() override {cout << "Area : " << mLength * mLength << endl;}
};

class Triangle : public Polygon{
public:
	Triangle() {}
	Triangle(int point, float length) : Polygon::Polygon(point, length) {}
	~Triangle() {}
	void calcPerimeter() override {cout << "Perimeter : " << mPoint * mLength << endl;}
	void calcArea() override {cout << "Area : " << sqrt(3)/4 * mLength * mLength << endl;} 

};

class Circle : public Polygon{
public:
	Circle() {}
	Circle(int point, float length) : Polygon::Polygon(point, length) {}
	~Circle() {}
	void calcPerimeter() override {cout << "Perimeter : " << 2 * 3.14 * mLength << endl;}
	void calcArea() override {cout << "Area : " << 3.14 * mLength * mLength << endl;} 

};

int main() {
	Triangle tri(3, 10);
	Rectangle rec(4, 10);
	Circle cir(0, 5);
	cout << "--- Triangle class ---" << endl;
	tri.calcPerimeter();
	tri.calcArea();
	cout << "--- Rectangle class ---" << endl;
	rec.calcPerimeter();
	rec.calcArea();
	cout << "--- Circle class ---" << endl;
	cir.calcPerimeter();
	cir.calcArea();

	return 0;
}