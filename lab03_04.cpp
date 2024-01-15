#include <iostream>
using namespace std;

// int main() {
//     double F;
//     cout << "Please enter Fahrenheit value :";
//     cin >> F;
//     cout << "Celsius value is : " << (5.0/9.0) * (F - 32) << endl;
// }

int square(int p) {
    return p * p;
}

int main() {
    int x;
    x = 5;
    cout << square(x) << endl;
}


// int get_num();
// int myadd(int x, int y);
// int mysub(int x, int y);
// int mymul(int x, int y);
// float mydiv(int x, int y);

// int main() {
// 	int x, y;
// 	x = get_num(); //키보드로부터 값 입력
// 	y = get_num();
// 	cout << "x = " << x << ", y = " << y << endl;
// 	cout << "x + y = " << myadd(x,y) << endl;
// 	cout << "x - y = " << mysub(x,y)<< endl;
// 	cout << "x * y = " << mymul(x,y) << endl;
// 	cout << "x / y = " << mydiv(x,y) << endl;

// 	return 0;
// }

// int get_num() {
// 	int num;
// 	cout << "Enter a number: ";
// 	cin >> num;
// 	return num;
// }
// int myadd(int x, int y) {
// 	return (x + y); }
// int mysub(int x, int y) {
//     	return (x-y); }
// int mymul(int x, int y) {
// 	return (x*y); }
// float mydiv(int x, int y) {
// 	return (double(x)/y); //소수점 출력되도록 
// }

// #include <cmath>

// int main() {
// 	double value;
// 	value = 5;
// 	cout << sqrt(value)<< endl; //제곱근
// 	cout << exp(value)<< endl; //e의 지수 값 연산
// 	cout << log10(value) << endl; //로그연산(밑:10)
// 	cout << cos(value) << endl; //cosine

// 	return 0;
// }


// void applePrice(int a = 1000) {
// 	cout << "Price of an apple is " << a << endl;
// }
// // default augment 중요!
// int main() {
// 	applePrice(1500);
//     applePrice(500) ;
//     applePrice(1000);
//     applePrice();

// 	return 0;
// }

// int get_num() {
// 	int num;
// 	cout << "Enter a number: ";
// 	cin >> num;
// 	return num;
// }

// int num() {
//     int n;
//     cout << "Enter a number: " ;
//     cin >> n;
//     return n;
// }
// int addmul(int x, int y, int z) {
//     return (x + y) * z ;
// }
// double muldiv(int x, int y, int z) {
//     return double(x * y) / z ;
// }
// int addmuladd(int x, int y, int z) {
//     return (x + y) * (y + z);
// }
// double subdivsub(int x, int y, int z) {
//     return double(x - y) / (y - z);
// }

// int main() {
//     int x,y,z;
//     x = num();
//     y = num();
//     z = num();
//     cout << "x = " << x << ", ";
//     cout << "y = " << y << ", ";
//     cout << "z = " << z << endl;
//     cout << "(x + y) * z = " << addmul(x,y,z) << endl;
//     cout << "(x * y) / z = " << muldiv(x,y,z) << endl;
//     cout << "(x + y) * (y + z) = " << addmuladd(x,y,z) << endl;
//     cout << "(x - y) / (y - z) = " << subdivsub(x,y,z) << endl;
//     return 0;
// }



// int print_DOB(int year = 1900, int month = 1, int day = 1) {

//     cout << "생년월일은 " << year << "년" << month << "월 " << day << "일입니다." << endl;
// }

// int main() {
//     int x,y,z;
//     print_DOB();
//     cout << "year 입력 :";
//     cin >> x;
//     cout << "month 입력 :";
//     cin >> y;
//     cout << "day 입력 :";
//     cin >> z;
//     print_DOB(x,y,z);
//     return 0;
// }

// #include <cmath>


// int main() {
//     double 
// }


// #include <iostream>
// using namespace std;

// int myadd(int x, int y) {
// 	return (x + y); }
// int mysub(int x, int y) {
//     	return (x-y); }
// int mymul(int x, int y) {
// 	return (x*y); }
// float mydiv(int x, int y) {
// 	return (double(x)/y); 
// }

// int num() {
//     int n;
//     cout << "Enter a number: " ;
//     cin >> n;
//     return n;
// }
// int addmul(int x, int y, int z) {
//     return myadd(x,y) * z ;
// }
// double muldiv(int x, int y, int z) {
//     return double(mymul(x,y)) / z ;
// }
// int addmuladd(int x, int y, int z) {
//     return myadd(x,y) * myadd(y,z);
// }
// double subdivsub(int x, int y, int z) {
//     return double(mysub(x,y)) / mysub(y,z);
// }

// int main() {
//     int x,y,z;
//     x = num();
//     y = num();
//     z = num();
//     cout << "x = " << x << ", ";
//     cout << "y = " << y << ", ";
//     cout << "z = " << z << endl;
//     cout << "(x + y) * z = " << addmul(x,y,z) << endl;
//     cout << "(x * y) / z = " << muldiv(x,y,z) << endl;
//     cout << "(x + y) * (y + z) = " << addmuladd(x,y,z) << endl;
//     cout << "(x - y) / (y - z) = " << subdivsub(x,y,z) << endl;
// }

// #include <cmath>
// int main() {
    
//     double x,y;

//     cout << "x = " ;
//     cin >> x;
//     cout << "y = " ;
//     cin >> y;
//     double a;
//     a = (x-y);
//     cout << "Rounding up number of" << x << ":" << ceil(x) << endl;
//     cout << "Rounding down number of" << x << ":" << floor(x) << endl;
//     cout << "Rounding number of" << x << ":" << round(x) << endl;
//     cout << "Maximum number between " << x << " and " << y << ":" << max(x,y) << endl;
//     cout << y << "-th root of " << x << ": " << pow(x,1/y) << endl;
//     cout << "|" << x << "-" << y << "| = " << fabs(a) << endl;
//     return 0;
// }





// void swap_call_by_value(int a, int b) {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }
// void swap_call_by_reference(int& a, int& b) {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }
// void get_data(int& x, int& y) {
//     cout << "x입력 : ";
//     cin >> x;
//     cout << "y입력 : ";
//     cin >> y;
// }


// int main() {
//     int x,y;
//     get_data(x,y);
//     int xcopy = x;
//     int ycopy = y;
//     cout << "swap_call_by_value 함수 사용 전" << endl;
//     cout << "x = " << xcopy << ", y = " << ycopy << endl;
//     swap_call_by_value(xcopy,ycopy);
//     cout << "swap_call_by_value 함수 사용 후" << endl;
//     cout << "x = " << xcopy << ", y = " << ycopy << endl;
//     cout << "swap_call_by_reference 함수 사용 전" << endl;
//     cout << "x = " << x << ", y = " << y << endl;    
//     swap_call_by_reference(x,y);
//     cout << "swap_call_by_reference 함수 사용 후" << endl;
//     cout << "x = " << x << ", y = " << y << endl;   
//     return 0; 
    
// }