#ifndef schedule_h
#define schedule_h
#include<string>
#include<vector>
using namespace std;

class Schedule {
protected:

public:
	vector<string> schedule;
	Schedule();
	void addCourse(string a);
	void print(vector<string> a);
};
#endif