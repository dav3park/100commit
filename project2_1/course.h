#ifndef course_h_
#define course_h_
#include<iostream>
#include<string>
#include <vector>
#include"roster.h"
using namespace std;
class Course :public Roster {
protected:
	string course_name;
	Roster roster;
	int max_size;
public:
	Course();
	Course(string a, int b);
	void print();
	vector<string> getRoster();
	string get_course_name();

};
#endif