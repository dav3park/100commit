#include <iostream>
using namespace std;

class Vector2D{
    double x;
    double y;
public:
    Vector2D(double _x, double _y) : x(_x), y(_y) {}

    double getX(){
        return this->x;
    }
    double getY(){
        return this->y;
    }

    Vector2D operator+(Vector2D& other){
        Vector2D result( (this->x +other.getX()) , (this->y+ other.getY()));
        return result;
    }
    Vector2D operator-(Vector2D& other){
        Vector2D result( (this->x -other.getX()) , (this->y- other.getY()));
        return result;
    }
    Vector2D operator*(double num){
        Vector2D result( (this->x * num) , (this->y * num));
        return result;
    }
    friend ostream& operator<<(ostream& os, Vector2D vec);

};

ostream& operator<<(ostream& os, Vector2D vec){
    os << "(" << vec.x << ", " << vec.y << ")";
    return os;
}

int main(){
    Vector2D v1(1.0,2.0);
    Vector2D v2(3.0,4.0);

    Vector2D sum = v1 + v2;
    Vector2D difference = v1 - v2;
    Vector2D scaled = v1 * 2.5;

    cout << "v1:" << v1 << endl;
    cout << "v2:" << v2 << endl;
    cout  << "v1 + v2:" << sum << endl;
    cout  << "v1 - v2:" << difference << endl;
    cout  << "v1 * 2.5:" << scaled << endl;
    return 0;

}