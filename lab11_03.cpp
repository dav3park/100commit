#include <iostream>
#include <string>
using namespace std;

class Account {
public:
	int id;
	string name;
	int balance;
	static int total_balance;
	

	Account(int _id, string _name, int _balanace) : id(_id), name(_name), balance(_balanace) {}
	Account() : id(0), name(""), balance(0) {} 
};

int Account::total_balance = 0;

int main(){
	cout << "총 학생 수 입력: ";
	int stu_num;
	cin >> stu_num;
	Account* Acnt[stu_num];
	for (int i=0; i< stu_num; i++){
		Acnt[i] = new Account();
	}
	for (int i=0; i< stu_num; i++){
		cout << i+1 << "번째 학생 계좌 입력 : 학번 : ";
		cin >> Acnt[i]->id;
		cout << endl;
		cout << "이름 : ";
		cin >> Acnt[i] -> name;
		cout << endl;
		cout << "잔액 : ";
		cin >> Acnt[i] -> balance;
		Account::total_balance += Acnt[i] -> balance;
		cout << "=============================" << endl;
		cout << endl;
	}
	cout << "회수된 금액 : " << Account::total_balance;
	
	for (int i =0; i< stu_num; i++) {
		delete Acnt[i];
	}
}