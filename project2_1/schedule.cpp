#include"schedule.h"
#include<iostream>
using namespace std;
Schedule::Schedule() {

}
void Schedule::addCourse(string a) {
	(this->schedule).push_back(a);

}
void Schedule::print(vector<string> a) {
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << endl;
	}

}