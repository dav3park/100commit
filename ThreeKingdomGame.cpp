#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

class ThreeKingdom {
public:
	ThreeKingdom() {
		name = "";
		attack_point = 0;
		defense_point = 0;
		health = 0;
	}
	~ThreeKingdom() {}
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

class Character : public ThreeKingdom {
public:
	void set(string _name, int _attack, int _defense, int _health) override{
		name = _name;
		attack_point = _attack;
		defense_point = _defense;
		health = _health;
	}
	void print_info() override{
		cout << "이름: " << name << endl;
		cout << "공격력: " << attack_point << endl;
		cout << "방어력: " << defense_point << endl;
		cout << "체력: " << health << endl;
	}
	int attack() override {
		return attack_point;
	}
	void defense(int _attack_point) override{
		health = health -(_attack_point - defense_point);
	}
    void heal(int _heal){
        health = health + _heal ;
    }
	int get_health() { return health; }
    string get_name() {return name;}
};

int main() {
	Character my_char;
	Character enemy_char;
	cout << "------------------------------------------" << endl;
	cout << "당신의 장군을 고르세요. (유비, 관우, 장비)";
    cout << endl;
    cout << "------------------------------------------" << endl;
    cout << "입력 : ";
	string my_name;
	cin >> my_name;
	if (my_name == "유비"){
		my_char.set("유비",70,40,130);
		my_char.print_info();

	}
	if (my_name == "관우"){
		my_char.set("관우",60,50,150); 
		my_char.print_info();
	}
	if (my_name == "장비"){
		my_char.set("장비",80,30,140); 
		my_char.print_info();
	}
    cout << "----------------------------------" << endl;
    chrono::seconds duration00(1);
    this_thread::sleep_for(duration00);
    cout << "적 장군 출진 준비중..." << endl;
    cout << "----------------------------------" << endl;
    chrono::seconds duration01(2);
    this_thread::sleep_for(duration01);
    cout << "저 지편에 북소리와 대군들의 함성소리가 들린다... 누구지...?" << endl;
    chrono::seconds duration0(2);
    this_thread::sleep_for(duration0);
    cout << "----------------------------------" << endl;
    srand((unsigned int)time(NULL));
	int a = rand() % 3;
	if (a == 0){
		enemy_char.set("조조",70,30,130);
		enemy_char.print_info();
	}
	if (a == 1){
		enemy_char.set("손권",60,50,150); 
		enemy_char.print_info();
	}
	if (a == 2){
		enemy_char.set("동탁",80,30,140); 
		enemy_char.print_info();
	}
    cout << "----------------------------------" << endl;
    cout << endl;
    chrono::seconds duration02(2);
    this_thread::sleep_for(duration02);
    if (my_char.get_name() == "유비"){
        cout << "유비 : 모든 것은 천하 만민을 위해...유현덕, 간다!" << endl;
    }
    if (my_char.get_name() == "관우"){
        cout << "관우 : 관운장, 가겠다! 모두 나를 따르라!" << endl;
    }
    if (my_char.get_name() == "장비"){
        cout << "장비 : 사모를 가지고 와라! 장익덕님의 출진이다!" << endl;
    }
    cout << endl;
    chrono::seconds duration03(2);
    this_thread::sleep_for(duration03);
    cout << "아니 저건..?!" << endl;
    chrono::seconds duration04(2);
    this_thread::sleep_for(duration04);
    cout << enemy_char.get_name() << "가(이) 나타났다!!!" << endl;
    cout << endl;
    chrono::seconds duration05(2);
    this_thread::sleep_for(duration05);
    if (enemy_char.get_name() == "조조"){
        cout << "조조 : 이 조맹덕에게 거역하면 어찌 되는지... 천하에 이를 알려주거라!" << endl;
    }
    if (enemy_char.get_name() == "손권"){
        cout << "손권 : 출진이다, 손가에 패배란 없다!" << endl;
    }
    if (enemy_char.get_name() == "동탁"){
        cout << "동탁 : 이 동중영에게 거역한 죄, 그 몸에 확실히 새겨 주마!" << endl;
    }
    chrono::seconds duration06(2);
    this_thread::sleep_for(duration06);


// 전투시작
	cout << endl << "---------------전투시작---------------" << endl;
	cout << my_char.get_name() <<"의 체력: " << my_char.get_health() << "    "
	<< enemy_char.get_name() << "의 체력: " << enemy_char.get_health() << endl;

	while (1) {
		int my_attack = my_char.attack();
		enemy_char.defense(my_attack);
        chrono::seconds duration0(1);
        this_thread::sleep_for(duration0);
		cout << my_char.get_name() <<"의 체력: " << my_char.get_health() << "    " 
        << enemy_char.get_name() << "의 체력: " << enemy_char.get_health() << endl;
        chrono::seconds duration1(1);
        this_thread::sleep_for(duration1);

		
		if (my_char.get_health() <= 0){
            cout << "----------------------------------" << endl;
			cout << my_char.get_name() << "가 졌습니다.." << endl;
            cout << "----------------------------------" << endl;
            cout << endl;
            chrono::seconds duration1(3);
            this_thread::sleep_for(duration1);
            if (enemy_char.get_name() == "조조"){
                cout << "조조 : 안타깝지만, 하늘은 나의 편인 것 같군!" << endl;
                chrono::seconds duration11(2);
                this_thread::sleep_for(duration11);
                cout << endl;
                cout << "조조 : 자신의 무능함을 부끄러워하라." << endl;
                cout << endl;
                cout << "----------------------------------" << endl;
            }
            if (enemy_char.get_name() == "손권"){
                cout << "손권 : 손가의 군략, 그 몸에 새기거라!" << endl;
                chrono::seconds duration10(2);
                this_thread::sleep_for(duration10);
                cout << endl;
                cout << "손권 : 등에 짊어진 것, 그 무게의 차이다." << endl;
                cout << endl;
                cout << "----------------------------------" << endl;
            }
            if (enemy_char.get_name() == "동탁"){
                cout << "동탁 : 크하하하핫. 이것이 바로 하늘의 뜻이다!" << endl;
                chrono::seconds duration12(2);
                this_thread::sleep_for(duration12);
                cout << endl;
                cout << "동탁 : 이게 바로 동중영에게 거역한 죄다! 크하하하." << endl;
                cout << endl;
                cout << "----------------------------------" << endl;
            }
			break;
		}
		if (enemy_char.get_health() <= 0){
            cout << "----------------------------------" << endl;
			cout << my_char.get_name() << "가 이겼습니다!" << endl;
            cout << "----------------------------------" << endl;
            cout << endl;
            if (my_char.get_name() == "유비"){
                cout << "유비 : 이 승리도 대의가 함께 했기 때문이다! 모두 잘 해 주었다!" << endl;
                cout << endl;
                cout << "----------------------------------" << endl;
            }
            if (my_char.get_name() == "관우"){
                cout << "관우 : 내 마음에 주저함이 없듯, 내 칼날에도 망설임이 없으리니!" << endl;
                chrono::seconds duration13(2);
                this_thread::sleep_for(duration13);
                cout << endl;
                cout << "관우 : 청룡언월도의 제물이 되어라!" << endl;
                cout << endl;
                cout << "----------------------------------" << endl;
            }
            if (my_char.get_name() == "장비"){
                cout << "장비 : 어떠냐, 이 몸에게 한 방 먹은 기분이!" << endl;
                chrono::seconds duration14(2);
                this_thread::sleep_for(duration14);
                cout << endl;
                cout << "장비 : 술잔을 가져와라! 연인 장비님의 대 승리다!" << endl;
                cout << endl;
                cout << "----------------------------------" << endl;
            }
            break;
		}
        //제갈량 참전
        int join1 = rand() % 10;
        if (join1 == 2){
            cout << "  ... ";
            chrono::seconds duration50(1);
            this_thread::sleep_for(duration50);
            cout <<"... ";
            chrono::seconds duration51(1);
            this_thread::sleep_for(duration51);
            cout << "..." << endl;
            chrono::seconds duration52(1);
            this_thread::sleep_for(duration52);
            cout << enemy_char.get_name() << " : " << "아니 저건 누구지..?"<< endl;
            cout << endl;
            chrono::seconds duration53(2);
            this_thread::sleep_for(duration53);
            cout << "제갈공명이 참전했다!" << endl;
            cout << endl;
            chrono::seconds duration55(2);
            this_thread::sleep_for(duration55);
            cout << "제갈량 : 전략전이 무엇인지 보여드리지요..." << endl;
            cout << endl;
            chrono::seconds duration54(2);
            this_thread::sleep_for(duration54);
            cout << my_char.get_name() << "의 체력이 20 상승합니다." << endl;
            my_char.heal(20);
            cout << "----------------------------------" << endl;
        }

		int enemy_attack = enemy_char.attack();
		my_char.defense(enemy_attack);
		cout << my_char.get_name() <<"의 체력: " << my_char.get_health() << "    " 
        << enemy_char.get_name() << "의 체력: " << enemy_char.get_health() << endl;
        chrono::seconds duration2(1);
        this_thread::sleep_for(duration2);

        


		if (my_char.get_health() <= 0){
            cout << "----------------------------------" << endl;
			cout << my_char.get_name() << "가 졌습니다.." << endl;
            cout << "----------------------------------" << endl;
            cout << endl;
            chrono::seconds duration1(3);
            this_thread::sleep_for(duration1);
            if (enemy_char.get_name() == "조조"){
                cout << "조조 : 안타깝지만, 하늘은 나의 편인 것 같군!" << endl;
                chrono::seconds duration11(2);
                this_thread::sleep_for(duration11);
                cout << endl;
                cout << "조조 : 자신의 무능함을 부끄러워하라." << endl;
                cout << endl;
                cout << "----------------------------------" << endl;
            }
            if (enemy_char.get_name() == "손권"){
                cout << "손권 : 손가의 군략, 그 몸에 새기거라!" << endl;
                chrono::seconds duration10(2);
                this_thread::sleep_for(duration10);
                cout << endl;
                cout << "손권 : 등에 짊어진 것, 그 무게의 차이다." << endl;
                cout << endl;
                cout << "----------------------------------" << endl;
            }
            if (enemy_char.get_name() == "동탁"){
                cout << "동탁 : 크하하하핫. 이것이 바로 하늘의 뜻이다!" << endl;
                chrono::seconds duration12(2);
                this_thread::sleep_for(duration12);
                cout << endl;
                cout << "동탁 : 이게 바로 동중영에게 거역한 죄다! 크하하하." << endl;
                cout << endl;
                cout << "----------------------------------" << endl;
            }
			break;
		}
		if (enemy_char.get_health() <= 0){
            cout << "----------------------------------" << endl;
			cout << my_char.get_name() << "가 이겼습니다!" << endl;
            cout << "----------------------------------" << endl;
            cout << endl;
            if (my_char.get_name() == "유비"){
                cout << "유비 : 이 승리도 대의가 함께 했기 때문이다! 모두 잘 해 주었다!" << endl;
                cout << endl;
                cout << "----------------------------------" << endl;
            }
            if (my_char.get_name() == "관우"){
                cout << "관우 : 내 마음에 주저함이 없듯, 내 칼날에도 망설임이 없으리니!" << endl;
                chrono::seconds duration13(2);
                this_thread::sleep_for(duration13);
                cout << endl;
                cout << "관우 : 청룡언월도의 제물이 되어라!" << endl;
                cout << endl;
                cout << "----------------------------------" << endl;
            }
            if (my_char.get_name() == "장비"){
                cout << "장비 : 어떠냐, 이 몸에게 한 방 먹은 기분이!" << endl;
                chrono::seconds duration14(2);
                this_thread::sleep_for(duration14);
                cout << endl;
                cout << "장비 : 술잔을 가져와라! 연인 장비님의 대 승리다!" << endl;
                cout << endl;
                cout << "----------------------------------" << endl;
            }
            break;
		}
        if (enemy_char.get_name() == "조조"){
            int join2 = rand() % 5;
            if (join2 == 2){
                cout << "  ... ";
                chrono::seconds duration50(1);
                this_thread::sleep_for(duration50);
                cout <<"... ";
                chrono::seconds duration51(1);
                this_thread::sleep_for(duration51);
                cout << "..." << endl;
                chrono::seconds duration52(1);
                this_thread::sleep_for(duration52);
                cout << my_char.get_name() << " : " << "아니 저건 누구지..?"<< endl;
                cout << endl;
                chrono::seconds duration53(2);
                this_thread::sleep_for(duration53);
                cout << "사마의가 참전했다!" << endl;
                cout << endl;
                chrono::seconds duration55(2);
                this_thread::sleep_for(duration55);
                cout << "사마의 : 싸움이 시작된 이상 이긴다. 그게 나 사마중달의 길임을 알라." << endl;
                cout << endl;
                chrono::seconds duration54(2);
                this_thread::sleep_for(duration54);
                cout << "사마의가 80의 공격력으로 공격합니다." << endl;
		        my_char.defense(80);
                cout << "----------------------------------" << endl;
            }
        }
        if (enemy_char.get_name() == "동탁"){
            int join3 = rand() % 5;
            if (join3 == 2){
                cout << "  ... ";
                chrono::seconds duration60(1);
                this_thread::sleep_for(duration60);
                cout <<"... ";
                chrono::seconds duration61(1);
                this_thread::sleep_for(duration61);
                cout << "..." << endl;
                chrono::seconds duration62(1);
                this_thread::sleep_for(duration62);
                cout << my_char.get_name() << " : " << "아니 저건 누구지..?"<< endl;
                cout << endl;
                chrono::seconds duration63(2);
                this_thread::sleep_for(duration63);
                cout << "여포가 참전했다...!" << endl;
                cout << endl;
                chrono::seconds duration65(2);
                this_thread::sleep_for(duration65);
                cout << "여포 : 모두 들어라! 이 여봉선이 직접 출진하겠다!" << endl;
                cout << endl;
                chrono::seconds duration64(2);
                this_thread::sleep_for(duration64);
                cout << "여포 : 조무래기가.. 격의 차이도 모르는건가." << endl;
                cout << "여포가 120의 공격력으로 공격합니다." << endl;
		        my_char.defense(120);
                cout << "----------------------------------" << endl;
            }
        }
        if (enemy_char.get_name() == "손권"){
            int join4 = rand() % 5;
            if (join4 == 2){
                cout << "  ... ";
                chrono::seconds duration70(1);
                this_thread::sleep_for(duration70);
                cout <<"... ";
                chrono::seconds duration71(1);
                this_thread::sleep_for(duration71);
                cout << "..." << endl;
                chrono::seconds duration72(1);
                this_thread::sleep_for(duration72);
                cout << my_char.get_name() << " : " << "아니 저건 누구지..?"<< endl;
                cout << endl;
                chrono::seconds duration73(2);
                this_thread::sleep_for(duration73);
                cout << "주유가 참전했다...!" << endl;
                cout << endl;
                chrono::seconds duration75(2);
                this_thread::sleep_for(duration75);
                cout << "주유 : 지휘는 물처럼, 마음은 불처럼...이 주공근의 전투에 패배란 없다!" << endl;
                cout << endl;
                chrono::seconds duration74(2);
                this_thread::sleep_for(duration74);
                cout << "주유 : 이것도 하나의 여흥. 이 주공근이 상대해 주마." << endl;
                cout << "주유가 80의 공격력으로 공격합니다." << endl;
		        my_char.defense(80);
                cout << "----------------------------------" << endl;
            }
        }
        
	}
	return 0;
}
