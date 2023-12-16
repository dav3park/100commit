#ifndef student_h_
#define student_h_
#include<iostream>
#include<string>
#include <vector>
#include"schedule.h"
using namespace std;
class Student :public Schedule {
protected:
	string student_name;
	Schedule time_table;
public:
	Student();
	Student(string a);
	void print();
	vector<string> getSchedule();
	string get_student_name();
};
#endif