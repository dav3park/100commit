#include <iostream>
using namespace std;

class Point {
private:
	int x;
	int y;
	static int numCreatedObjects;
public:
	Point() : x(0), y(0) {
		numCreatedObjects++;
	}

	// int _x 와 int _y를 입력으로 받는 생성자
	Point(int _x, int _y) : x(_x), y(_y) {
		numCreatedObjects++;
	}

	~Point() {
		cout << "Destructed..." << endl;
	}

	void setXY(int _x, int _y) {
		//this-> 사용한 초기화
		this->x = _x;
        this->y = _y;
	}

	int getX() const { return x; }
	int getY() const { return y; }

	// *this + pt2 -> 
	Point operator+(Point& pt2) {
		Point result(this->x + pt2.x, this->y + pt2.y);
		return result;
	}

	//operator overloading(연산자 오버로딩)
	Point& operator=(Point& pt) {
		this -> x = pt.x;
		this -> y = pt.y;
		return *this;
	}

	static int getNumCreatedObject() { return numCreatedObjects; }
	friend void print(const Point& pt);
	friend ostream& operator<<(ostream& cout, Point& pt);
	friend class SpyPoint;
};

//static 맴버 변수 초기화 (numCreatedObjects)
int Point::numCreatedObjects = 0;

//객체 call by reference시: const로 함수 입력시 const method만 함수에서 사용가능
// const: 객체 내부의 member data가 상수(변하지 않는다)
void print(const Point& pt) {
	cout << pt.getX() << ", " << pt.getY() << endl;
}

//Point operator+(Point& pt1, Point& pt2){
//  Point result(pt1.getX() + pt2.get(X), pt1.getY() + pt2.getY());
//  return result;
//}

ostream& operator<<(ostream& cout, Point& pt) {
	cout << pt.getX()<< ", " << pt.getY();
	return cout;
}

class SpyPoint {
public:
	//다음과 같이 출력 되도록 hack_all_info함수 구현

	//Hacked by SpyPoint
	//x: 40
	//y: 60
	//numCreatedObj.: 10

	void hack_all_info(const Point& pt){
		cout << "Hacked by SpyPoint" << endl;
		cout << "x: " << pt.x << endl;
		cout << "y: " << pt.y << endl;
		cout << "numCreatedObj.: " << pt.getNumCreatedObject() << endl;
	}
};

int main() {
	Point pt1(1, 2);
	cout << "pt1 : ";
	print(pt1);
	cout << endl;

	// 포인터
	Point* pPt1 = &pt1;
	// pPt1의 값을 통해 getX, getY를 호출하여 출력
	cout << "pt1 : ";
	cout << pPt1->getX() << ", " << pPt1->getY() << endl;
	// pPt1를 통해 호출 getX, getY를 호출하여 출력
	cout << "pt1 : ";
	cout << (*pPt1).getX() << ", " << (*pPt1).getY() << endl;

	cout << endl;

	//동적으로 Point* pPt2할당하여 10,20넣은 뒤 ->사용하여 출력(pt1 출력 참고)
	Point* pPt2 = new Point(10,20);
	cout << "pt2 : ";
	cout << pPt2 -> getX() << "," << pPt2 -> getY() << endl;
	cout << endl;
	
	//pPt1, pPt2의 메모리 해제
	delete pPt2;

	cout << "pt1 NumCreatedObject : ";
	cout << pt1.getNumCreatedObject() << endl;

	// 연산자 오버로딩없습니다
	//pt4 = pt2, pt3값 더하기
	Point pt2(10, 20);
	Point pt3(30, 40);
	Point pt4 = pt2 + pt3;
	cout << "pt2 : ";
	cout << pt2 << endl;
	cout << "pt3 : ";
	cout << pt3 << endl;
	cout << "pt4 : ";
	cout << pt4 << endl;

	cout << "pt1 NumCreatedObject : ";
	cout << pt1.getNumCreatedObject() << endl << endl;

	// object array
	Point* ptAry = new Point[5];
	cout << "pt2 NumCreatedObject : ";
	cout << pt2.getNumCreatedObject() << endl;
	cout << endl;

	// ptAry 메모리 해제
	delete[] ptAry;

	cout << endl;

	// friend class
	SpyPoint spy;
	cout << "pt1 info" << endl;
	spy.hack_all_info(pt1);
	cout << "pt4 info" << endl;
	spy.hack_all_info(pt4);

	return 0;
}

// #include <iostream>
// #include <cmath>
// using namespace std;
// class Point{
// int x;
// int y;
// public:
// 	Point() : x(0),y(0) {}
// 	Point(int x, int y) : x(x), y(y) {}
// 	void setPoint(int x, int y){
// 		this->x = x;
// 		this->y = y;
// 	}
	

// 	Point operator-(const Point& pt2) const {
// 		Point result(this->x - pt2.x, this->y - pt2.y);
// 		return result;
// 	}
// 	Point operator*(const Point& pt2) const {
// 		Point result(this->x * pt2.x, this->y * pt2.y);
// 		return result;
// 	}
// 	int getX() {return this->x;}
// 	int getY() {return this->y;}

// };

// int main() {
// 	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
// 	Point* pP1, * pP2, * pP3;

// 	cout << "첫번째 좌표(x1, y1)를 입력하세요 : ";
// 	cin >> x1 >> y1;

// 	cout << "두번째 좌표(x2, y2)를 입력하세요 : ";
// 	cin >> x2 >> y2;

// 	pP1 = new Point(x1, y1);
// 	pP2 = new Point(x2, y2);
// 	pP3 = new Point(); //x,y가 0으로 초기화

// 	/* 아래의 방식으로도 x, y값 설정이 가능해야 함 */
// 	//pP1->setPoint(x1, y1);
// 	//pP1->setPoint(x2, y2);
// 	/***********************************************/

// 	*pP3 = (*pP1 - *pP2) * (*pP1 - *pP2);

// 	/* pP3을 활용하여 거리값을 구함 */
// 	cout << "두 좌표 사이의 길이는 " << sqrt(pP3->getX() + pP3->getY()) << "입니다." << endl;

// 	return 0;
// }
// #include <iostream>
// using namespace std;
// class Account{
// string name;
// string id;
// int balance;

// public:
// 	Account() : name(""), id(""), balance(0) {}
// 	Account(string _name, string _id, int _balance) : name(_name), id(_id), balance(_balance) {}
// 	string getID(){return id;}
// 	string getName(){return name;}
// 	int getBalance(){return balance;}
// 	void info(){
// 		cout << "학번: " << getID() << ", 이름: " << getName() << ", 잔액: " << getBalance() <<endl;
// 	}
// 	Account operator+(Account& pt) const{
// 		Account result(this->name,this->id,this->balance + pt.balance);
// 		return result;
// 	}
// 	Account operator-(Account& pt) const{
// 		Account result(this->name,this->id,0);
// 		return result;
// 	}
// 	friend ostream& operator<<(ostream& cout, Account& pt) {
// 		cout << "학번: " << pt.getID() << ", 이름: " << pt.getName() << ", 잔액: " << pt.getBalance() <<endl;
// 		return cout;
// 	}

// 	void setID(string _id){
// 		id = _id;
// 	}
// 	void setName(string _name){
// 		name = _name;
// 	}
// 	void setBalance(int _balance){
// 		balance = _balance;
// 	}
// };




// int main() {
// 	Account acnt[3] = {
// 		Account("장윤호", "2014", 10000),
// 		Account("김유민", "2019", 0),
// 		Account("박진배", "2013", 5000),
// 	};

// 	while(1){
// 		cout << "돈을 보낼 학생의 학번을 입력하세요: ";
// 		string GiveId;
// 		cin >> GiveId;
// 		if (GiveId == "종료"){
// 			cout << "종료합니다." << endl;
// 			for (int i=0; i<3; i++){
// 				cout << acnt[i];
// 			}
// 			return 0;
// 		}
// 		cout << "돈을 받을 학생의 학번을 입력하세요: ";
// 		string TakeId;
// 		cin >> TakeId;
// 		if (GiveId == TakeId){
// 			cout << "돈을 보낼 학생과 돈을 받을 학생의 학번이 동일합니다." << endl;
// 			continue;
// 		}
// 		bool exast = false;
		

// 		for (int i=0; i<3; i++){
// 			for(int j=0; j<3; j++){
// 				if(acnt[i].getID() == GiveId && acnt[j].getID() == TakeId){
// 					exast = true;
// 				}
// 			}
// 		}
		
// 		if (exast == false){
// 			cout << "보내는 학생 혹은 받은 학생의 학번이 존재하지 않습니다.다시 입력해주세요." << endl;
// 			continue;
// 		}

// 		if (exast == true){
// 			for (int i=0; i<3; i++){
// 				if(acnt[i].getID() == GiveId){
// 					if(acnt[i].getBalance() == 0){
// 						cout << "보내는 학생의 잔액이 부족합니다." << endl;
// 						continue;
// 					}
// 					else if (acnt[i].getBalance() > 0){
// 						for (int j=0; j<3; j++){
// 							if (acnt[j].getID()==TakeId){
// 								acnt[j] = acnt[j] + acnt[i];
// 								acnt[i] = acnt[i] - acnt[j];
// 							}
// 						}
// 						cout << "보낸 학생의 잔액 => ";
// 						acnt[i].info();
// 						for (int j=0; j<3; j++){
// 							if (acnt[j].getID()==TakeId){
// 								cout << "받은 학생의 잔액 =>";
// 								acnt[j].info();
// 							}
// 						}
// 					}
// 				}
// 			}
			
// 		}
// 	}
// }


// int main(){
// 	cout << "총 학생 수 입력 : ";
// 	int num;
// 	cin  >> num;
// 	Account acnt[num];
// 	int total = 0;
// 	for (int i=0; i < num; i++){
// 		cout << i+1 << "번째 학생 계좌 입력 : ";
// 		cout << "학번 : ";
// 		string id;
// 		cin >> id;
// 		cout << endl;
// 		cout << "이름 : ";
// 		string name;
// 		cin >> name;
// 		cout << endl;
// 		cout << "잔액 : ";
// 		int balance;
// 		cin >> balance;
// 		total += balance;
// 		acnt[i].setID(id);
// 		acnt[i].setName(name);
// 		acnt[i].setBalance(balance);
// 		cout << "========================"<< endl;
// 	}
// 	cout << endl;
// 	cout << "회수된 금액 : " << total;

// }