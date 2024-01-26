#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Student{
private:
    string name;
    string id;
    string code[100];
    int numCourseTaken;
    friend class KHUIS;
public:
    Student() : name(""), id(""), numCourseTaken(0) {}
    Student(string _name, string _id) : name(_name), id(_id), numCourseTaken(0) {}
    
    void setName(string _name){
        this->name = _name;
    }
    void setId(string _id){
        this->id = _id;
    }
    void addCourse(string _course){
        this->code[this->numCourseTaken] = _course;
        this->numCourseTaken++;
    }
    string getName(){return this->name;}
    string getId(){return this->id;}
    string getCode(int num){
        return this->code[num];
    }
    friend ostream& operator<<(ostream& os, Student& _stu);
};

ostream& operator<<(ostream& os, Student& _stu){
    os << "ID: " << _stu.id << endl;
    os << "Name: " << _stu.name << endl;
    os << "Course: ";
    for (int i=0; i < _stu.numCourseTaken; i++){
        os << _stu.code[i] << " ";
    }
    return os;
}

class Course{
private:
    string name;
    string code;
    friend class KHUIS;
public:
    void setName(string _name){
        this->name = _name;
    }
    void setCode(string _code){
        this->code = _code;
    }
    string getCode(){
        return this->code;
    }
    string getName(){
        return this->name;
    }
    friend ostream& operator<<(ostream& os ,const Course& _course);
    

};
ostream& operator<<(ostream& os ,const Course& _course){
        os << "name : " << _course.name << "\t" << "Code : "<< _course.code;
        return os;
}

class KHUIS{
public:
    void printInfo(Student& _stu, Course* _course, int numCourse);
};

void KHUIS::printInfo(Student& _stu, Course* _course, int numCourse){
    cout << "student infomation : " << endl;
    cout << _stu << endl;
    for (int i=0; i<_stu.numCourseTaken; i++){
        for (int j=0; j<numCourse; j++){
            if(_stu.code[i] == _course[j].code){
                cout << _course[j] << endl;
            }
        }
    }
    
}

int main(){
    int numTotalCourse = 3;
    Course *pCourse = new Course[numTotalCourse];
    pCourse[0].setName("객체지향프로그래밍");
    pCourse[0].setCode("CSE100");
    pCourse[1].setName("영상처리");
    pCourse[1].setCode("CSE200");
    pCourse[2].setName("머신러닝");
    pCourse[2].setCode("CSE300");

    cout << pCourse[0].getCode() << "\t" << pCourse->getName() << endl;
    cout << setw(50) << setfill('-') <<"" << endl;

    cout << pCourse[0] << endl;
    cout << pCourse[1] << endl;
    cout << pCourse[2] << endl;
    cout << setw(50) << setfill('-') << "" << endl;

    Student stu1("홍길동","20181004"),stu2;
    stu1.addCourse("CSE100");
    stu2.addCourse("CSE200");

    stu2.setName("김영희");
    stu2.setId("20182000");
    stu2.addCourse("CSE100");
    stu2.addCourse("CSE300");

    cout << stu1.getId() << '\t' << stu1.getName() << '\t' << stu1.getCode(0) << endl;
    cout << setw(50) << setfill('-') << "" << endl;

    KHUIS khuis;
    khuis.printInfo(stu1,pCourse,numTotalCourse);
    khuis.printInfo(stu2,pCourse,numTotalCourse);

    //pCourse 할당해제
    delete[] pCourse;
    return 0;

}