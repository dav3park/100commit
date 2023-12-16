#include"roster.h"
#include<iostream>
using namespace std;
Roster::Roster() {

}
void Roster::addStudent(string a) {
	(this->student_list).push_back(a);
}
void Roster::print(vector<string> a) {
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << endl;
	}

}