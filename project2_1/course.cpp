#include"course.h"
#include<iostream>
using namespace std;
Course::Course(string a, int b) {
	this->course_name = a;
	this->max_size = b;
}
Course::Course() {
	this->max_size = 0;
}
void Course::print() {
	cout << "Course Name: " << this->course_name << endl;
	cout << "Number of Units: " << this->max_size << endl;
	cout << "List of Students" << endl;
	roster.print(this->getRoster());
	cout << endl;
}
vector<string> Course::getRoster() {
	return this->student_list;
}
string Course::get_course_name() {
	return this->course_name;
}