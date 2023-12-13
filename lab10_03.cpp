#include <iostream>
#include <string>
using namespace std;

class CStudent{
private:
    int StudentId;
    string name;
    string major;
public:
    CStudent() : StudentId(2018000000), name("홍길동"), major("컴퓨터공학과") {}
    CStudent(int _StudentId, string _name, string _major) : StudentId(_StudentId), name(_name), major(_major){}

    void Display(){
        cout << "학번 :" << StudentId << endl;
        cout << "이름 :" << name << endl;
        cout << "전공 :" << major << endl;
        cout << endl;
    }

    void setNumber(int num){
        StudentId = num;
    }
    void setName(string _name){
        name = _name;
    }
    void setMajor(string _major){
        major = _major;
    }
    int getNumber(){
        return StudentId;
    }
    string getName(){
        return name;
    }
    string getMajor(){
        return major;
    }
};


int main() {
	CStudent s[3]; // 3명의 학생정보를 저장할 class 배열
	int inputNumber; // 키보드로 학번을 입력 받을 변수 
	string inputName, inputMajor; // 키보드로 이름, 전공을 입력 받을 변수
	int length = 0; // 현재 입력된 학생의 수

	while (1) {
        for (int i=0; i < 3; i++){
            cout << i+1 << " 번째 학생 입력" << endl;
            cout << "학번 : ";
            cin >> inputNumber;
            cout << "이름 : ";
            cin >> inputName;
            cout << "전공 : ";
            cin >> inputMajor;
            bool duplicate = false;
            for (int k = 0; k<=i; k++){
                if (inputNumber == s[k].getNumber()){
                    duplicate = true;
                    break;
                }
            }

            if (duplicate == true){
                cout << "※중복된 학번이 존재합니다." << endl;
                cout << endl;
                i--;
            }
            else{
                cout << "※입력 완료" << endl;
                cout << endl;
                s[i].setName(inputName);
                s[i].setNumber(inputNumber);
                s[i].setMajor(inputMajor);
            }
        }
        cout << "---모든입력이 완료되었습니다----" << endl;
        for (int l = 0; l<3; l++){
            cout << l+1 << "학생정보"<< endl;
            s[l].Display();
        }
        break;
    }

	return 0;
}