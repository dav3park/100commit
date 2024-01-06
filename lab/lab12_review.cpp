// #include <iostream>
// #include <string>
// using namespace std;


// class Base {
// protected: //Base type
// 	void print_base() { cout << "Base" << endl; }
// };

// // Base type  |  상속 type   | Derived type
// // private    |  상관없음    | 접근 불가( Base함수로 접근)
// // protected  |  상관없음    | private
// // public     | private/protected | private
// // public     | public       | public

// class Derived : private Base {
// public:
// 	void print_derived() {
// 		print_base();
// 		cout << "Derived" << endl;
// 	}
// };

// int main() {
// 	Base base;
// 	Derived derived;

//     derived.print_derived();
	

// 	return 0;
// }






// #include <iostream>
// #include <string>
// using namespace std;



// // 함수 오버로딩: int    sum(int x, int y), 
// //                double sum(double x, double y)
// //                float  sum(float x, float y, float z)
// // 함수 오버라이딩 (상속의 특수한 경우 사용)
// //void Text::append(string _extra)
// //void Fancy::append(string _extra)

// class Text {
// private:
// 	string text;
// public:
// 	Text(string _t) : text(_t) {}
// 	virtual string get(){
//         return text;
//     } //get()함수 virtual 로 구현
// 	virtual void append(string _extra) { text += _extra; }
// };

// class FancyText : public Text {
// private:
// 	// string text;b접근이 안됨, Base Class에서 private
// 	string left_brac;
// 	string right_brac;
// 	string connector;
// public:
// 	// initialization list는 생성자를 호출할 수 있게 해준다.
// 	FancyText(string _t, string _lb, string _rb, string _con) :
// 		Text::Text(_t), left_brac(_lb), right_brac(_rb), connector(_con) {}
// 	string get() override{
//         return left_brac + Text::get() + right_brac; 
//     } //override 키워드 사용한 get()함수 구현, main함수 참고하여 출력화면처럼 되도록 구현
// 	void append(string _extra) override{
//         Text::append(_extra+connector);
//     } //override 키워드 사용한 append()함수 구현
// };

// class FixedText : public Text {
// public:
// 	FixedText() : Text::Text("FIXED") {}
// 	void append(string _extra) override{}
//     //override 키워드 사용한 append()함수 구현, main함수 참고하여 출력화면처럼 되도록 구현
// };

// int main() {
// 	Text t1("Plain");
// 	t1.append("A");
// 	cout << t1.get() << endl;

// 	FancyText t2("Fancy", "<<", ">>", "***");
// 	t2.append("A");
// 	cout << t2.get() << endl;

// 	FixedText t3;
// 	t3.append("A");
// 	cout << t3.get() << endl;
// 	t1 = t2; // Base <- Derived 가능
// 	//t2 = t1; // Derived <- Base 불가능

// 	return 0;
// }
// #include <iostream>
// using namespace std;

// class Polygon {
// public:
// 	Polygon() : mPoint(0), mLength(0) {}
// 	Polygon(int point, float length) {mPoint = point; mLength=length;}
// 	~Polygon() {}
// 	virtual void calcPerimeter() {
//         if (mPoint == 0 && mLength==0){
//             cout << "Perimeter: empty" << endl;
//         }
//         else{
//             cout << mPoint * mLength << endl;
//         }
//     }
// 	virtual void calcArea() {
//         if (mPoint == 0 && mLength==0){
//             cout << "Area: empty" << endl; 
//         }
//         else{
//             cout << "Area: " << endl;
//         }
//     }
// protected:
// 	int mPoint; // 꼭지점의 갯수
// 	double mLength; // 한 변의 길이
// };

// class Rectangle : public Polygon {
// public:
// 	Rectangle() {}
// 	Rectangle(int point, float length) : Polygon::Polygon(point,length)  {}
// 	~Rectangle() {}
// 	void calcPerimeter() override {
//         cout << "Perimeter: " <<mPoint * mLength << endl;
//     }
// 	void calcArea() override {
//         cout << "Area: "<<mLength * mLength << endl;
//     }
// };

// class Triangle : public Polygon{
// public:
// 	Triangle() {}
// 	Triangle(int point, float length) : Polygon::Polygon(point,length)  {}
// 	~Triangle() {}
// 	void calcPerimeter() override {
//         cout << "Perimeter: " << mPoint * mLength << endl;
//     }
// 	void calcArea() override {
//         cout << "Area: " << (mLength * mLength) / 2 << endl;
//     }
// };

// class Circle : public Polygon{
// public:
// 	Circle() {}
// 	Circle(int point, float length) : Polygon::Polygon(point,length)  {}
// 	~Circle() {}
// 	void calcPerimeter() override {
//         cout << "Perimeter: "<<2 * 3.14 * mLength << endl;
//     }
// 	void calcArea() override {
//         cout << "Area: " << 3.14 * mLength * mLength << endl;
//     }   
// };

// // int main() {
// // 	Polygon pol;
// // 	Rectangle rec(4, 10);

// // 	cout << "--- Polygon class ---" << endl;
// // 	pol.calcPerimeter();
// // 	pol.calcArea();
// // 	cout << "--- Rectangle class ---" << endl;
// // 	rec.calcPerimeter();
// // 	rec.calcArea();

// // 	return 0;
// // }

// int main() {
// 	Triangle tri(3, 10);
// 	Rectangle rec(4, 10);
// 	Circle cir(0, 5);
// 	cout << "--- Triangle class ---" << endl;
// 	tri.calcPerimeter();
// 	tri.calcArea();
// 	cout << "--- Rectangle class ---" << endl;
// 	rec.calcPerimeter();
// 	rec.calcArea();
// 	cout << "--- Circle class ---" << endl;
// 	cir.calcPerimeter();
// 	cir.calcArea();

// 	return 0;
// }

// #include <iostream>
// using namespace std;

// class Train {
// public:
// 	Train() {}
// 	Train(int people) { mPeople = people; }
// 	~Train() {}
// 	virtual int station(int takeOff, int takeOn) {}
// protected:
// 	int mPeople; // 사람 수
// };
// class Ktx : public Train {
// public:
// 	Ktx() : Train::Train(0) {}
// 	Ktx(int people) : Train::Train(people) {}
// 	~Ktx() {}
// 	// 기차에 사람이 타고 내리는 함수
// 	int station(int takeOff, int takeOn) {
//         int people = 0;
//         mPeople = 0;
//         bool over = false;
//         bool less = false;
//         for (int i=0; i<5; i++){
//             cout << i+1 << "번역: ";
//             cin >> takeOff >> takeOn;
//             people += takeOn;
//             people -= takeOff;
//             if (people > 300){
//                 over = true;
//                 cout << "정원초과입니다." << endl;
//                 break;
//             }
//             if (people < 0){
//                 less = true;
//                 cout << "정원미달입니다." << endl;
//                 break;
//             }
//             if (mPeople < people){
//                 mPeople = people;
//             }
//         }
//         if (!over && !less)
//             cout << "가장 많은 사람이 탑승 했을 때의 사람 수 : " << getPeople();
//     }
// 	int getPeople() {return mPeople;}
// };

// int main()
// {
// 	Ktx k;
//     k.station(0,0);
// 	return 0;
// }

#include<iostream>
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
	int attack() override {return attack_point;}
    void defense(int _attack_point) override {
        health = health - (_attack_point - defense_point);
    }
	int get_health() { return health; }
};

int main() {
    Character my_char;
	Character enemy_char;
	
	cout << "Choose your character(Ironman, Captainamerica, Thor): ";
    string my;
    cin >> my;
    cout << "--My Character--" << endl;
    if (my == "Ironman"){
        my_char.set("IronMan",70,40,100);
        my_char.print_info();
    }
    if (my == "Captainamerica"){
        my_char.set("CaptainAmerica",60,50,100);
        my_char.print_info();
    }
    if (my == "Thor"){
        my_char.set("Thor",80,30,100);
        my_char.print_info();
    }
    cout << endl;
    cout << "--Enemy Character--"<< endl;
    int i = rand() % 3;
    if (i == 0){
        enemy_char.set("IronMan",70,40,100);
        enemy_char.print_info();
    }
    if (i == 1){
        enemy_char.set("CaptainAmerica",60,50,100);
        enemy_char.print_info();
    }
    if (i == 2){
        enemy_char.set("Thor",80,30,100);
        enemy_char.print_info();
    }
    cout << endl;


	cout << endl << "--Battle--" << endl;
	cout << "My Life: " << my_char.get_health() << "\t"
	     << "Enemy Life:" << enemy_char.get_health() << endl;

	while (1) {
        enemy_char.defense(my_char.attack());
        cout << "My Life: " << my_char.get_health() << "\t"
	    << "Enemy Life:" << enemy_char.get_health() << endl;

        if (enemy_char.get_health() <= 0){
            cout << "You Win!" << endl;
            break;
        }
        if (my_char.get_health() <= 0){
            cout << "You Lose.." << endl;
            break;
        }

        my_char.defense(enemy_char.attack());
        cout << "My Life: " << my_char.get_health() << "\t"
	    << "Enemy Life:" << enemy_char.get_health() << endl;
        
        if (enemy_char.get_health() <= 0){
            cout << "You Win!" << endl;
            break;
        }
        if (my_char.get_health() <= 0){
            cout << "You Lose.." << endl;
            break;
        }

    }

	return 0;
}

