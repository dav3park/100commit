#include<iostream>
using namespace std;
#include"registrar.h"

Registrar::Registrar() {

}
void Registrar::enroll(Student &a, Course &b) {
	a.addCourse(b.get_course_name());
	b.addStudent(a.get_student_name());
}

