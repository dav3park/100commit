#include"student.h"
#include<iostream>
using namespace std;
Student::Student(string a) {
	this->student_name = a;
	this->time_table;
}
Student::Student() {
}

void Student::print() {
	cout << "Student name: " << this->student_name << endl;
	cout << "List of Courses" << endl;
	time_table.print(this->getSchedule());

	cout << endl;
}
vector<string> Student::getSchedule() {
	return this->schedule;
}
string Student::get_student_name() {
	return this->student_name;
}