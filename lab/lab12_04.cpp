#include <iostream>
using namespace std;

class Train {
public:
	Train() {}
	Train(int people) {mPeople = people;}
	~Train() {}
	virtual int station(int takeOff, int takeOn) {

	}
protected:
	int mPeople; // 사람 수
};
class Ktx : public Train {
public:
	Ktx() : Train::Train(0) {}
	Ktx(int people) : Train::Train(people) {}
	~Ktx() {}
	// 기차에 사람이 타고 내리는 함수
	int station (int takeOff, int takeOn) override{
		bool over = false;
		bool less = false;
		int People = 0;
		mPeople = 0;
		for (int i=0; i<5; i++){
		cout << i + 1 << "번역: " ;
		cin >> takeOff >> takeOn;
		People += takeOn - takeOff;
		if (People > mPeople){
			mPeople = People;
		}
		if (People > 300){
			over = true;
			cout << "정원초과입니다" << endl;
			break;
		}
		if (People < 0){
			less = true;
			cout << "정원미달입니다" << endl;
			break;

		}
		}
		if (over == false && less == false){
			cout << "가장 많은 사람이 탑승 했을 때의 사람 수: " << getPeople();
		}
	}
	int getPeople() {return mPeople;}
};

int main()
{
	Ktx k;
	k.station(0,0);
	return 0;
}