#ifndef DIRECTOR_H
#define DIRECTOR_H
#include <string>
#include <iostream>
#include <cassert>
using namespace std;

class Vacation;

// 정적 멤버를 갖는 Director 클래스
class  Director
{
  public:
    static Vacation* vacation;
    static void book(int type); // 클라이언트는 이 함수만 호출 가능
};


class Vacation{
public:
    virtual ~Vacation() {}
    virtual void bookHotels()= 0 ;
    virtual void bookFlights()= 0 ;
    virtual void bookTours() = 0;

};

class Package1 : public Vacation{
    void bookHotels() override{
        cout << "Hotels are booked." << endl;
    }
    void bookFlights() override{
        cout  << "Flights are booked." << endl;
    }
    void bookTours() override{}
};

class Package2 : public Vacation{
    void bookHotels() override{
        cout << "Hotels are booked." << endl;
    }
    void bookFlights() override{}
    void bookTours() override{
        cout << "Tours are booked." << endl;
    }
};

class Package3 : public Vacation{
    void bookHotels() override{
        cout << "Hotels are booked." << endl;
    }
    void bookFlights() override{
        cout << "Flights are booked." << endl;
    }
    void bookTours() override{
        cout << "Tours are booked." << endl;
    }

};
#endif  