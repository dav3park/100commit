#ifndef roster_h_
#define roster_h_
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Roster {
protected:
	vector<string> student_list;
public:
	Roster();
	void addStudent(string a);
	void print(vector<string>a);
};

#endif