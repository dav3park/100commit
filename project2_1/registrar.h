#ifndef registrar_h
#define registrar_h
#include<string>
#include<vector>
#include"student.h"
#include"course.h"
using namespace std;

class Registrar:public Student,Course
{
protected:
	Student students;
	Course courses;
public:
	Registrar();
	void enroll(Student& a , Course& b);
	
};

#endif