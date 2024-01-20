// using namespace std;

// int main(){
//     int i,j,k;
//     int ***a = new int**[2];
//     a[0] = new int* [2];
//     a[1] = new int* [2];
//     for (i = 0; i<2; i++){
//         for (j=0; j<2; j++){
//             a[i][j] = new int[5];
//             for (k=0; k<5; k++){
//                 a[i][j][k] = i + j + k;
//                 cout << a[i][j][k] << " ";
//             }
//             cout << endl;
//         }
//         cout << endl;
//     }
//     for (int i=0; i<2; i++){
//         for (int j=0; j<2; j++){
//             delete[] a[i][j];
//         }
//         delete[] a[i];
//     }
//     delete[] a;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Complex{
//     double re,im;
// public:
//     Complex(double r, double i){
//         re = r; 
//         im = i;
//     }
//     Complex(){re = 0; im = 0;}
//     Complex operator+(Complex& cpx){
//         Complex result((this->re+cpx.re) , (this->im+cpx.im));
//         return result;
//     }
//     Complex operator+(double x){
//         Complex result(this->re+x , this->im);
//         return result;
//     }
//     Complex operator-(Complex& cpx){
//         Complex result(this->re - cpx.re , this->im - cpx.im);
//         return result;
//     }
//     Complex operator-(double x){
//         Complex result(this->re - x, this->im);
//         return result;
//     }



//     void print(){
//         cout << re << "+ i" << im << endl;
//     }
// };

// int main(){
//     Complex a(.3,8.4), b(4.5,5.2), c(2.0,7.7);
//     Complex sum, dif;
//     sum = a + b + 3.0;
//     cout << "a+b+3.0=";
//     sum.print();

//     dif = a-b-2.0;
//     cout << "a-b-2.0=";
//     dif.print();

//     sum = a + b +5 - c -8;
//     cout << "a + b +5 - c -8=";
//     sum.print();
//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;
// template<typename T>
// class Point{
// public:
//     T x;
//     T y;
//     Point(T _x, T _y);

//     bool operator==(Point);

// };

// template<typename T>
// Point<T>::Point(T _x, T _y) {
//     this->x = _x;
//     this ->y = _y;
// }

// template<typename T>
// bool Point<T>::operator==(Point<T> other){
//     if(this->x == other.x && this->y == other.y){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// void get_command(string& _str){
//     do {
//         cout << "1)print 2)count 0)quit : ";
//         cin >> _str;
//     }
//     while(_str != "1" && _str != "2" && _str != "0");
// }

// template<typename T>
// void count_val(Point<T>* start, Point<T>* end){
//     int x,y;
//     cout << "count할 x와 y를 입력해주세요 : ";
//     cin >> x >> y;
//     int count = 0;
//     Point<T> temp(x,y);
//     for (auto iter = start; iter != end; iter++){
//         if (*iter == temp){
//             count++;
//         }
//     }
//     cout << "동일한 좌표값을 가지는 element의 갯수는 : " << count << " 입니다." << endl;
// }



// int main(){
//     Point<int> myPoints[] = {{1,2},{-1,5},{3,7},{2,4},{1,10},{1,2}};
//     string command;

//     while (1){
//         get_command(command);
//         if(command=="1"){
//             for_each(myPoints,myPoints+6,[](Point<int> other){cout << "("<< other.x << " " << other.y << ")" << endl;});
//         }
//         if (command=="2"){
//             count_val<int>(myPoints,myPoints+6);
//         }
//         if (command=="0"){
//             break;
//         }
//     }

//     cout << "Exit program.." << endl;
//     return 0;
// }

// #include<iostream>
// #include<string>
// #include<iomanip>
// using namespace std;

// class Student{
// private:
//     string name;
//     string id;
//     string code[100];
//     int numCourseTaken;
//     friend class KHUIS;
// public:
//     Student() : name(""), id(""), numCourseTaken(0) {}
//     Student(string _name, string _id) : name(_name), id(_id), numCourseTaken(0) {}
    
//     void setName(string _name){
//         this->name = _name;
//     }
//     void setId(string _id){
//         this->id = _id;
//     }
//     void addCourse(string _course){
//         this->code[this->numCourseTaken] = _course;
//         this->numCourseTaken++;
//     }
//     string getName(){return this->name;}
//     string getId(){return this->id;}
//     string getCode(int num){
//         return this->code[num];
//     }
//     friend ostream& operator<<(ostream& os, Student& _stu);
// };

// ostream& operator<<(ostream& os, Student& _stu){
//     os << "ID: " << _stu.id << endl;
//     os << "Name: " << _stu.name << endl;
//     os << "Course: ";
//     for (int i=0; i < _stu.numCourseTaken; i++){
//         os << _stu.code[i] << " ";
//     }
//     return os;
// }

// class Course{
// private:
//     string name;
//     string code;
//     friend class KHUIS;
// public:
//     void setName(string _name){
//         this->name = _name;
//     }
//     void setCode(string _code){
//         this->code = _code;
//     }
//     string getCode(){
//         return this->code;
//     }
//     string getName(){
//         return this->name;
//     }
//     friend ostream& operator<<(ostream& os ,const Course& _course);
    

// };
// ostream& operator<<(ostream& os ,const Course& _course){
//         os << "name : " << _course.name << "\t" << "Code : "<< _course.code;
//         return os;
// }

// class KHUIS{
// public:
//     void printInfo(Student& _stu, Course* _course, int numCourse);
// };

// void KHUIS::printInfo(Student& _stu, Course* _course, int numCourse){
//     cout << "student infomation : " << endl;
//     cout << _stu << endl;
//     for (int i=0; i<_stu.numCourseTaken; i++){
//         for (int j=0; j<numCourse; j++){
//             if(_stu.code[i] == _course[j].code){
//                 cout << _course[j] << endl;
//             }
//         }
//     }
    
// }

// int main(){
//     int numTotalCourse = 3;
//     Course *pCourse = new Course[numTotalCourse];
//     pCourse[0].setName("객체지향프로그래밍");
//     pCourse[0].setCode("CSE100");
//     pCourse[1].setName("영상처리");
//     pCourse[1].setCode("CSE200");
//     pCourse[2].setName("머신러닝");
//     pCourse[2].setCode("CSE300");

//     cout << pCourse[0].getCode() << "\t" << pCourse->getName() << endl;
//     cout << setw(50) << setfill('-') <<"" << endl;

//     cout << pCourse[0] << endl;
//     cout << pCourse[1] << endl;
//     cout << pCourse[2] << endl;
//     cout << setw(50) << setfill('-') << "" << endl;

//     Student stu1("홍길동","20181004"),stu2;
//     stu1.addCourse("CSE100");
//     stu2.addCourse("CSE200");

//     stu2.setName("김영희");
//     stu2.setId("20182000");
//     stu2.addCourse("CSE100");
//     stu2.addCourse("CSE300");

//     cout << stu1.getId() << '\t' << stu1.getName() << '\t' << stu1.getCode(0) << endl;
//     cout << setw(50) << setfill('-') << "" << endl;

//     KHUIS khuis;
//     khuis.printInfo(stu1,pCourse,numTotalCourse);
//     khuis.printInfo(stu2,pCourse,numTotalCourse);

//     //pCourse 할당해제
//     delete[] pCourse;
//     return 0;

// }

// #include <vector>

// #include <iostream>

// #include <iomanip>

 

// using namespace std;

 

// class VectorList {

//        vector<double*> vItem; //Item (array)의 pointer저장

//        vector<int> vLength; //각 Item(array)의 길이 저장

// public:

//        ~VectorList() {
//            for (int i=0; i<vItem.size(); i++){
//                delete[] vItem[i];
//            }
//        }

//        void append(double* _pArray, int _length) {
//            vItem.push_back(_pArray);
//            vLength.push_back(_length);
//        }

//        int findVector(double* _pArray, int _length) {
//            for (int i=0; i<vLength.size(); i++){
//                if (_length == vLength[i]){
//                    return i;
//                }
//            }
//            return -1;
//        }

//        void print_single_vector(int idx) {
//            if (idx>vLength.size()){
//                cout << "[Wrong index]" << endl;
//            }
//            else{
//                 for (int i=0; i<vLength[idx]; i++){
//                     cout << vItem[idx][i] << " ";
//                 }
//                 cout << endl;  
//            }
//        }

//        void print_all_vectors() {
//            for (int i=0; i<vLength.size(); i++){
//                for (int j=0; j<vLength[i]; j++){
//                    cout << vItem[i][j] << " ";
//                }
//                cout << endl;
//            }
//        }

// };

// int main() {

//        VectorList vectorList;

//        double* pTemp = new double[3]{ 1.1, 2.2, 3.3 };

//        vectorList.append(pTemp, 3); // 아이템 추가

 

//        pTemp = new double[5]{ 10.1, 10.2, 10.3, 10.4, 10.5 };

//        vectorList.append(pTemp, 5); // 아이템 추가

 

//        pTemp = new double[2]{ 4.5, 5.5 };

//        vectorList.append(pTemp, 2); // 아이템 추가

 

//        vectorList.print_single_vector(-1); // 1) -1번째 index의 vector를 화면에 출력

//        vectorList.print_single_vector(0);  // 2)  0번째 index의 vector를 화면에 출력

//        cout << endl;

 

//        vectorList.print_all_vectors(); // 3) 모든 vector들을 화면에 출력

//        cout << endl;

 

//        double* pTemp1 = new double[2]{ 4.5, 5.5 };

//        double* pTemp2 = new double[4]{ 1.1, 2.2, 5.5, 4.4 };

 

//        cout << "Index of vector{4.5, 5.5} :" << vectorList.findVector(pTemp1, 2) << endl;

//        cout << "Index of vector{1.1, 2.2, 5.5, 4.4} :" << vectorList.findVector(pTemp2, 4) << endl;

 

//        delete[] pTemp;

//        delete[] pTemp1;

//        delete[] pTemp2;

 

//        return 0;

// }