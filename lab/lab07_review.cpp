// #include <iostream>
// #include <string> //string객체 사용
// #include <fstream> //ifstream ofstream
// #include <iomanip> // setw

// using namespace std;

// int main() {
// 	string s1 = "mouse";
// 	cout << s1 << endl;
// 	cout << s1.size() << ", " << s1.length() << endl << endl; //s1의 length, size 출력

// 	cout << s1.empty() << endl;
// 	s1.clear();// s1 = "";
// 	cout << s1.empty() << endl;

// 	s1 = "Good";
// 	s1 = s1 + "-bye";
// 	// Good-bye (string)
// 	// 01234567 (index)
// 	cout << s1 << endl;
// 	cout << s1[4] << ", " << s1.at(4) << endl; // 두가지 방법으로 index 4 값 출력
// 	cout << ("Good-bye" == s1) << endl; // s1과 Good-bye 비교 (bool 값 출력)
// 	cout << ("good-bye" == s1) << endl; // s1과 good-bye 비교 (bool 값 출력)
// 	cout << (s1 >= "z") << endl << endl; // s1이 “z”보다 크거나 같은지 비교 (bool 값 출력)

// 	cout << s1.substr(5,3) << endl; // s1의 index 5부터 3글자 출력
// 	cout << s1.substr(2,2) << endl; // s1의 index 2부터 2글자 출력
// 	cout << s1.find("od") << endl; // od 위치 출력
// 	cout << s1.find("od", 5) << endl; 
// 	int od_index = s1.find("od");
// 	cout << s1.find("od", od_index + 2);
// 	cout << (s1.find("korea") == string::npos) << endl;

// 	return 0;

// }


// #include <iostream>
// #include <string> //string객체 사용
// #include <fstream> //ifstream ofstream
// #include <iomanip> // setw

// using namespace std;

// int main() {
//     ofstream fout;  // processor->file 저장
// 	fout.open("example.txt");      // example.txt 열기

// 	string s2 = "Objective Oriented Programming";
// 	fout << s2 << endl;
// 	fout << "Random Variables" << endl;
// 	fout << "Linear Algebra" << endl;

// 	fout.close();     // fout 닫기      

// 	ifstream fin;
// 	string s1;
// 	fin.open("example.txt");        // example.txt 열기
// 	// if (!fin) {
// 	// 	cout << "Error, no such file exists" << endl;
// 	// 	exit(100);
// 	// }
	
//     //     while (getline(fin,s1)) { // line by line으로 example.txt에서 읽어와서 출력
// 	// 	cout << s1 << endl;
// 	// } 
      
        
        
//     while (1) { // 띄어쓰기 단위로 example.txt에서 읽어와서 출력
//         fin >> s1;
//         if (fin.eof()){
//             break;
//         }
//         cout << s1 << endl;
//     }
        
// 	fin.close();

// }


#include <iostream>
using namespace std;

// int main() {
// 	double d1 = 1.23456789;

// 	cout << d1 << endl;

// 	cout.width(10);  // 출력값 길이 10로 지정
// 	cout.precision(3);// 주요 자리수 3자리만 출력
// 	cout << d1 << endl;

//     char ch1;
// 	char ch2;
	
// 	// ch1, ch2 : enter “ z”. ( space + z )
// 	cin >> ch1;
// 	cout << "(" << ch1 << ")" << endl;

// 	cin.ignore(); // enter가 다음 cin으로 들어가지 않도록 해줌

// 	cin.unsetf(ios::skipws);  // space도 입력으로 생각하게 함
// 	cin >> ch2;
// 	cout << "(" << ch2 << ")" << endl;


// 	return 0;
// }

// #include <iostream>
// #include <fstream> //ifstream ofstream
// #include <iomanip>
// using namespace std;


// bool getStu(ifstream& fin, int& id, int& exam1, int& exam2, int& exam3) {
// 	fin >> id >> exam1 >> exam2 >> exam3;
// 	if (!fin)
// 		return false;
// 	return true;
// }

// void calcAvgGrade(int exam1, int exam2, int exam3, char& grade, int& avg) {
// 	avg = (exam1 + exam2 + exam3) / 3;
// 	if (avg >= 90)
// 		grade = 'A';
// 	else if (avg >= 80)
// 		grade = 'B';
// 	else
// 		grade = 'F';
// }

// void writeStu(ofstream& fout,int id, int avg, char grade) {

// 	fout.fill('0');
// 	fout << setw(4) << id;
// 	fout.fill(' ');
// 	fout << setw(4) << avg;
// 	fout << setw(4) << grade << endl;
// }


// int main() {
// 	//반복: 모든 학생을 읽고 저장할 때까지
// 		//getStu 함수 = ch7STUFL.DAT에서 파일 읽기: id, exam1, exam2, exam3
// 		//calcAvgGrade 함수 = 평균,grade 계산: exam1, exam2, exam3 -> avg, grade
// 		//writeStu 함수 = grade.txt 저장: id, avg, grade

// 	ifstream fin("ch7STUFL.DAT"); // 강의 사이트에서 다운로드 가능
// 	ofstream  fout("grade.txt");
// 	int id, exam1, exam2, exam3, avg;
// 	char grade;

// 	while (getStu(fin,id,exam1,exam2,exam3)) { // getStu함수 사용
// 		calcAvgGrade(exam1,exam2,exam3,grade,avg); // calcAvgGrade함수 사용
// 		writeStu(fout,id,avg,grade); // writeStu함수 사용
// 	}

// 	fin.close();
// 	fout.close();

// 	cout << "end";

// 	return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
// 	string city,area,street,buiding;

// 	cout << "시 : " ; 
// 	cin >> city;
// 	cout << "구 : " ;
// 	cin >> area;
// 	cout << "로 : " ;
// 	cin >> street;
// 	cout << "건물명 : " ;
// 	cin >> buiding;

// 	cout << "집 주소 : ";
// 	cout << city+area+street+buiding;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
// 	string data = "사랑,프로그래밍,의자,사랑의바보,영통역,천년의사랑,냉장고,객체지향";
// 	cout << "키워드 : ";
// 	string keyword;
// 	cin >> keyword;
// 	cout << "검색결과 : ";
// 	string save;
// 	while (data.find(",") != string :: npos){
// 		save = data.substr(0,data.find(","));
// 		if (save.find(keyword) != string :: npos){
// 			cout << save << " " ;
// 		}
// 		data = data.substr(data.find(",")+1);
// 	}
// 	if (data.find(keyword) != string :: npos)
// 		cout << data;

// }

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// int main(){
// 	ofstream fout("temp.txt");
// 	for (int j = 0; j<10; j++){
// 		for (int i =0; i<10; i++){
// 			fout << rand() % 101 << " ";
// 		}
// 		fout << endl;
// 	}
	
// 	fout.close();
// }

// #include <iostream>
// #include <string>
// #include <fstream>
// using namespace std;

// int main(){
// 	ifstream fin1("input1.txt");
// 	ifstream fin2("input2.txt");
// 	ofstream fout("output.txt");

// 	string line;
// 	while (getline(fin1,line)){
// 		fout << line << endl;
// 	}
// 	while (getline(fin2,line)){
// 		fout << line << endl;
// 	}
// 	fin1.close();
// 	fin2.close();
// 	fout.close();
// }

// 다시해보기 !!
// #include <iostream>
// #include <string>
// #include <fstream>
// using namespace std;

// int main(){
// 	ifstream fin("input3.txt");
// 	ofstream fout("output2.txt");
// 	cout << "length = ";
// 	int length;
// 	char ch;
// 	int count;
// 	cin >> length;

// 	while (fin.get(ch)){
// 		if (ch != '\n'){
// 			fout.put(ch);
// 			count++;
// 			if((count % length) == 0){
// 				fout << '\n';
// 				count = 0;
// 			}
// 		}
		
		
// 	}
// }