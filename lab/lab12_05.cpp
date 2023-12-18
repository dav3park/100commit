#include <iostream>
using namespace std;

class Avengers {
public:
	Avengers() {
		name = "";
		attack_point = 0;
		defense_point = 0;
		health = 0;
	}
	~Avengers() {}
	// 캐릭터 설정 함수
	virtual void set(string _name, int _attack, int _defense, int _health) {}
	// 공격 함수
	virtual int attack() { return 0; }
	// 방어 함수
	virtual void defense(int _attack_point) { }
	// 캐릭터 정보 출력 함수
	virtual void print_info() { }
protected:
	string name;		// 캐릭터 이름
	int attack_point;	// 공격력
	int defense_point;	// 방어력
	int health;		// 체력
};

class Character : public Avengers {
public:
	void set(string _name, int _attack, int _defense, int _health) override{
		name = _name;
		attack_point = _attack;
		defense_point = _defense;
		health = _health;
	}
	void print_info() override{
		cout << "Name: " << name << endl;
		cout << "Attack_Point: " << attack_point << endl;
		cout << "Defense_Point: " << defense_point << endl;
		cout << "Health: " << health << endl;
	}
	int attack() override {
		return attack_point;
	}
	void defense(int _attack_point) override{
		health = health -(_attack_point - defense_point);
	}
	int get_health() { return health; }
};

int main() {
	Character my_char;
	Character enemy_char;
	
	cout << "Choose your character(IronMan, CaptainAmerica, Thor): ";
	string my_name;
	cin >> my_name;
	if (my_name == "IronMan"){
		my_char.set("IronMan",70,40,100);
		my_char.print_info();

	}
	if (my_name == "ChaptainAmerica"){
		my_char.set("ChaptainAmerica",60,50,100); 
		my_char.print_info();
	}
	if (my_name == "Thor"){
		my_char.set("Thor",80,30,100); 
		my_char.print_info();
	}
	int a = rand() % 3;
	if (a == 0){
		enemy_char.set("IronMan",70,40,100);
		enemy_char.print_info();
	}
	if (a == 1){
		enemy_char.set("ChaptainAmerica",60,50,100); 
		enemy_char.print_info();
	}
	if (a == 2){
		enemy_char.set("Thor",80,30,100); 
		enemy_char.print_info();
	}


	cout << endl << "--Battle--" << endl;
	cout << "My Life: " << my_char.get_health() << "\t"
	<< "Enemy Life:" << enemy_char.get_health() << endl;

	while (1) {
		int my_attack = my_char.attack();
		enemy_char.defense(my_attack);
		cout << "My Life: " << my_char.get_health() << "\t" 
		<< "Enemy Life:" << enemy_char.get_health() << endl;
		
		if (my_char.get_health() <= 0){
			cout << "You Lose.." << endl;
			break;
		}
		if (enemy_char.get_health() <= 0){
			cout << "You Win!" << endl;
			break;
		}

		int enemy_attack = enemy_char.attack();
		my_char.defense(enemy_attack);
		cout << "My Life: " << my_char.get_health() << "\t" 
		<< "Enemy Life:" << enemy_char.get_health() << endl;

		if (my_char.get_health() <= 0){
			cout << "You Lose.." << endl;
			break;
		}
		if (enemy_char.get_health() <= 0){
			cout << "You Win!" << endl;
			break;
		}
	}

	return 0;
}
