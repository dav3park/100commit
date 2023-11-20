#include <iostream>
#include <string>
using namespace std;

	class Account{
	public:
		string name;
		string id;
		int balance;

		Account(string _name, string _id, int _balance) : 
		name(_name), id(_id), balance(_balance) {}

		Account operator+(const Account& ac) const{
			Account result(this->name,this->id, this->balance + ac.balance);
			return result;
		}
		Account operator-(const Account& ac) const{
			Account result(this->name,this->id, this->balance - ac.balance);
			return result;
		}
		friend ostream& operator<<(ostream& os, const Account& ac){
			os << "학번: "<< ac.id << ", " << "이름: " << ac.name << ", " << "잔액: " << ac.balance;
			return os;
		}
		


	};

	int main() {
		Account acnt[3] = {
			Account("장윤호", "2014", 10000),
			Account("김유민", "2019", 0),
			Account("박진배", "2013", 5000),
		};

		while(true){
			string id1, id2;
			bool is_not_exist = true;
			bool is_not_exist1 = true;
			bool is_not_exist2 = true;
			bool is_duplicate = false;
			bool balance_empty = false;

			cout << "돈을 보낼 학생의 학번을 입력하세요: ";
			cin >> id1;
			if (id1 == "종료"){
				break;
			}

			cout << "돈을 받을 학생의 학번을 입력하세요: ";
			cin >> id2;

			if (id1 == id2){
				is_duplicate = true;
				cout << "보내는 학생과 받는 학생의 학번이 같습니다.다시 입력해주세요." << endl;
			}
			
			for (int i=0; i<3; i++){
				if (acnt[i].id == id1){
					is_not_exist1 = false;
					break;	
				}
			}

			for (int i=0; i<3; i++){
				if (acnt[i].id == id1){
					is_not_exist2 = false;
					break;	
				}
			}

			if (is_not_exist1 || is_not_exist2){
				cout << "보내는 학생 혹은 받은 학생의 학번이 존재하지 않습니다.다시 입력해주세요." << endl;
				continue;
			}

			for (const auto& account : acnt){
				if (account.id == id1 && account.balance == 0){
					balance_empty = true;
					cout << "보내는 학생의 잔액이 부족합니다." << endl;
					break;	
				}
			}
			if ( !is_not_exist1 && !is_not_exist2 && !is_duplicate && !balance_empty){
				int num1 = -1;
				int num2 = -1;
				for (int i = 0; i<3; i++){
					if(acnt[i].id == id1){
						num1 = i;
					}
				}
				for (int i = 0; i<3; i++){
					if(acnt[i].id == id2){
						num2 = i;
					}
				}
				if(num1 != -1 && num2 != -1){
					acnt[num2] = acnt[num2] + acnt[num1];
					acnt[num1] = acnt[num1] - acnt[num1];
					cout << "보낸 학생의 잔액 => " << acnt[num1] << endl;
					cout << "보낼 학생의 잔액 => " << acnt[num2] << endl;
				}
			}
		}
		cout << "종료합니다." << endl;
		for (int i=0; i<3; i++){
			cout << acnt[i] << endl;
		}
	}
