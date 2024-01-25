#include <iostream>
#include <string>
using namespace std;

class Text {
private:
	string text;
public:
	Text(string _t) : text(_t) {}
	virtual string get(){
		return text;
	} 
	//get()함수 virtual 로 구현
	virtual void append(string _extra) { text += _extra; }
};

class FancyText : public Text {
private:
	// string text;b접근이 안됨, Base Class에서 private
	string left_brac;
	string right_brac;
	string connector;
public:
	// initialization list는 생성자를 호출할 수 있게 해준다.
	FancyText(string _t, string _lb, string _rb, string _con) :
		Text::Text(_t), left_brac(_lb), right_brac(_rb), connector(_con) {}
	string get() override {
		return left_brac + Text::get() + right_brac;
	} //override 키워드 사용한 get()함수 구현, main함수 참고하여 출력화면처럼 되도록 구현
	void append(string _extra) override{
		Text::append(_extra + connector);
	} //override 키워드 사용한 append()함수 구현
};

class FixedText : public Text {
public:
	FixedText() : Text::Text("FIXED") {}
	void append(string _extra) override{} 
	//override 키워드 사용한 append()함수 구현, main함수 참고하여 출력화면처럼 되도록 구현
};