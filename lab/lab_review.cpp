// lab07

// #include <iostream>
// #include <string> //string객체 사용
// #include <fstream> //ifstream ofstream
// #include <iomanip> // setw

// using namespace std;

// int main() {
//     // ofstream fout;  // processor->file 저장
// 	// fout.open("example.txt");        // example.txt 열기

// 	// string s2 = "Objective Oriented Programming";
// 	// fout << s2 << endl;
// 	// fout << "Random Variables" << endl;
// 	// fout << "Linear Algebra" << endl;

// 	// fout.close();        // fout 닫기      

// 	ifstream fin;
// 	string s1;
// 	fin.open("example.txt");       // example.txt 열기
// 	if (!fin) {
// 		cout << "Error, no such file exists" << endl;
// 		exit(100);
// 	}
	
//         // while (getline(fin,s1)) { // line by line으로 example.txt에서 읽어와서 출력
// 		// cout << s1 << endl;
// 	// } 
//         while(1) {
//             string a;
//             fin >> a;
//             if (fin.eof())
//                 break;
// 			cout << a;
// 			cout << endl;
//         }
//     fin.close();
        
// 	}
// #include <iostream>
// #include <fstream> //ifstream ofstream
// #include <iomanip>
// using namespace std;


// bool getStu(ifstream& fin, int& id, int& exam1, int&exam2, int&exam3) {
// 	fin >> id >> exam1 >> exam2 >> exam3;
// 	if (!fin)
// 		return false;
// 	return true;
// }

// void calcAvgGrade(int exam1,int exam2, int exam3, int&avg, char&grade) {
// 	avg = (exam1 + exam2 + exam3) / 3;
// 	if (avg >= 90)
// 		grade = 'A';
// 	else if (avg >= 80)
// 		grade = 'B';
// 	else
// 		grade = 'F';
// }

// void writeStu(ofstream& fout, int id,int avg,char grade) {

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

// 	ifstream  fin("ch7STUFL.DAT"); // 강의 사이트에서 다운로드 가능
// 	ofstream  fout("grade.txt");
// 	int id, exam1, exam2, exam3, avg;
// 	char grade;

// 	while (getStu(fin,id,exam1,exam2,exam3)) { // getStu함수 사용
// 		calcAvgGrade(exam1,exam2,exam3,avg,grade); // calcAvgGrade함수 사용
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
// 	string keyword;
// 	string data = "사랑,프로그래밍,의자,사랑의바보,영통역,천년의사랑,냉장고,객체지향";
// 	cout << "키워드 : ";
// 	cin >> keyword;
// 	string result;
// 	cout << "검색결과 : ";
// 	while (data.find(",") != string :: npos){
// 		result = data.substr(0,data.find(","));
// 		if (result.find(keyword) != string :: npos){
// 			cout << result << " ";
// 		}
// 		data = data.substr(data.find(",")+1,data.length()-data.find(","));
// 	}
// 	if (data.find(keyword) != string :: npos){
// 		cout << data << " ";
// 	}

// }

// #include <iostream>
// #include <string>
// #include <fstream>
// using namespace std;

// int main(){
// 	ifstream fin("input3.txt");
// 	ofstream fout("output3.txt");
// 	int length;
// 	char ch;
// 	cout << "length = ";
// 	length = 30;
// 	int count = 0;
// 	while(fin.get(ch)){
// 		if (ch != '\n'){
// 			fout.put(ch);
// 			count ++;
// 			if ((count % length) == 0){
// 				fout << "\n";
// 				count = 0;
// 			}
// 		}
// 	}
// 	fin.close();
// 	fout.close();
// }

// lab08
// #include<iostream>
// using namespace std;

// //int &x = a; int &y = b; pass by reference
// //int *x = &a; int *y = &b; pass by address
// void swap(int* x, int* y) {
// 	int temp = *x;
// 	*x = *y;
// 	*y = temp;
// }

// int main() {
// 	int a = 10, b = 20;
// 	cout << a << ", " << b << endl;
// 	swap(a,b);
// 	cout << a << ", " << b << endl;
// 	return 0;
// }

// #include<iostream>
// using namespace std;

// int sum(int x, int y) { return x + y; }
// int mult(int x, int y) { return x * y; }
// // 함수 func의 포인터와 파라미터 x, y를 받아와서 함수 func의 실행값을 리턴해주는 함수
// int evaluate(int(*func)(int,int),int x, int y)
// {
// 	return func(x, y);
// }

// int main() {
// 	int(*func)(int, int);
// 	func = sum; // sum 함수 주소값 대입
// 	cout << func(100, 200) << endl;
// 	func = mult; // mult 함수 주소값 대입
// 	cout << func(100, 200) << endl;
// 	cout << evaluate(&sum, 100, 200) << endl;
// 	cout << evaluate(&mult, 100, 200) << endl;
// 	return 0;
// }


// #include<iostream>
// using namespace std;

// void jegop(int* input){
// 	cout << (*input) * (*input);

// }

// int main(){
// 	int input;
// 	cout << "input> ";
// 	cin >> input;
// 	cout << "제곱값> ";
// 	jegop(&input);
// }

// #include <iostream>
// #include <string>
// using namespace std;

// void changegi(string *s){
// 	cout << "input> ";
// 	cin >> *s;
// }

// int main() {
// 	string str = "This is default value";
// 	cout << "기본값 출력> " << str << endl;
// 	changegi(&str);
// 	cout << "변환된 값 출력> " << str << endl;
// 	return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// void reversed(vector<int>& v){
// 	for (int i =0; i<v.size()/2; i++){
// 		int temp = v[i];
// 		v[i] = v[v.size()-1-i];
// 		v[v.size()-1-i] = temp;
// 	}
// }


// int main(){
// 	vector<int> v {1,2,3,4,5,6,7,8,9,10};
// 	cout << "기본 Vector 값:" << endl;
// 	for (int elem : v){
// 		cout << elem << " ";
// 	}
// 	cout << endl;
// 	cout << "함수 실행 후 Vector 값: " << endl;
// 	reversed(v);
// 	for (int elem : v){
// 		cout << elem << " ";
// 	}
// 	return 0;
// }
// #include <iostream>
// #include <vector>
// using namespace std;


// int inputGrade(float grade) {
// 	cin >> grade;
// 	if ((grade - (int)grade) != 0.0 || grade < 0 || grade > 100) {
// 		cout << "invalid input!!!" << endl;
// 		exit(EXIT_FAILURE);
// 	}
// 	else
// 		return (int)grade;
// }
// int topGrade(const vector<int>& grade) {
// 	int max = 0;
// 	for (int i=0; i<grade.size(); i++){
// 		if (grade[i] > max){
// 			max = grade[i];
// 		}
// 	}
// 	return max;
// }

// int main() {
// 	vector<int> grades;
// 	float _grade = 0;
// 	for(int i = 0; i < 3; i++) {
// 		cout << "Input " << i << "-th grade(0~100):";
// 		int grade = inputGrade(_grade);
// 		for (int i =0; i<3; i++){
// 			grades.push_back(grade);
// 		}
// }
// 	int result = topGrade(grades);
// 	cout << "Top Grade: " << result;
// 	return 0;
// }

// lab09
// #include <iostream>
// #include <vector>
// #include <iomanip>
// using namespace std;
// using Matrix = vector<vector<int>>;


// // 배열의 경우 주소값(시작주소, 끝주소)을 전달
// void print(int* begin, int* end) {
// 	// for (int *curr = begin; curr<end; curr++) //수업시간에 배운 주소값을 기준으로 for문 작성
// 	// cout << setw(4) << *curr;
	
// 	//  while문 구현 부분 - 수업시간에 배운 주소값을 기준으로 while문 작성
// 	int* curr = begin;
// 	while (curr != end) {
// 		cout << setw(4) << *curr;
// 		curr++;
// 	}
// 	cout << endl;
// }

// // (+, -) for pointer: 주소값을 증가/감소 (다음 변수 위치)
// int main() {
// 	int list[3] = { 10, 20, 30 };
// 	cout << list << '\t' << *(list) << endl;
// 	cout << list+1 << '\t' << *(list+1) << endl;
// 	cout << list+2 << '\t' << *(list+2) << endl;

// 	int *begin = list;
// 	int* end = list + 3;
// 	print(begin, end);

// 	return 0;
// }

// #include <iostream>
// #include <vector>
// #include <iomanip>
// using namespace std;
// using Matrix = vector<vector<int>>;


// void print(const Matrix& mat) {
// 	// vector index를 이용한 for 문 작성
// 	// for (unsigned row = 0; row < mat.size(); row++) {
// 	// 	for (unsigned col = 0; col < mat[row].size(); col++) {
// 	// 		//mat.at(row).at(col);
// 	// 		cout << setw(4) << mat[row][col];
// 	// 	}
// 	// 	cout << endl;
// 	// }

// 	// vector 원소를 이용한 for 문 작성
// 	// for (auto row : mat) {
// 	// 	for (auto col : row) {
// 	// 		cout << setw(4) << col;
// 	// 	}
// 	// 	cout << endl;
// 	// }

// 	//유추 가능한 경우, 자료형 부분을 auto로 치환가능
// 	// vector<int> row = mat[0];
// 	//  ==    auto row = mat[0];
// 	// auto와 벡터 원소를 이용하여 for문 구현
// 	// for (auto i : mat) {
// 	// 	for (auto j : i) {
// 	// 		cout << setw(4) << j;
// 	// 	}
// 	// 	cout << endl;
// 	// }
// }



// int main() {
// 	// 2 x 3 matrix
// 	//	vector<vector<int>> mat(2, vector < int>(3) );
// 	Matrix mat{ { 1, 2, 3 },
// 	{ 4, 5, 6 } };

// 	mat[0][0] = 1;
// 	mat[0][1] = 2;
// 	mat[0][2] = 3;
// 	mat[1][0] = 4;
// 	mat[1][1] = 5;
// 	mat[1][2] = 6;

// 	print(mat);

// 	return 0;
// }


// #include <iostream>
// #include <vector>
// #include <iomanip>
// using namespace std;


// //소수 : 1과 자기자신을 제외하고는 약수가 없는 1보다 큰 정수
// bool is_prime(int n) {
// 	if (n < 2)
// 		return false;
// 	for (int i = 2; i < n; i++)
// 		if((n % i) == 0){
// 			return false;
// 		} // n을 i로 나눈 나머지가 0이면 false를 리턴
// 	return true;
// }

// vector<int> primes(int low, int high) {
// 	vector<int> result;
// 	for (int i = low; i <= high; i++){
// 		if(is_prime(i)){
// 			result.push_back(i);
// 		}
// 	} // 소수이면 (is_prime이 참이면) 뒤에 push
// 	return result;
// }

// void print(const vector<int>& v) {
// 	for (int elem : v) //vector index가 아닌 원소를 이용한 for문
// 		cout << setw(4) << elem;
// 	cout << endl;
// }

// int main() {
// 	int low, high;
// 	cin >> low >> high;
// 	vector<int> vec = primes(low, high);
// 	print(vec);

// 	return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// //정적 배열(static array):프로그램 실행중 크기가 고정되어 변경 불가
// //동적 배열(dynamic array): 프로그램 실행중(run time) 할당/해제가 가능
// int main() {
// 	const int size = 3;
// 	int list[size] = { 10, 20, 30 };

// 	int length = 3;
// 	cin >> length; // 키보드로부터 배열의 크기를 입력받음
// 	int* list2 = new int[length]; //동적 배열 선언
// 	// double* list2 = new double[length]

// 	int* begin = list2;
// 	int* end = list2 + length;

// 	for (int* curr = begin; curr != end; curr++)
// 		cin >> *curr;

// 	for (int* curr = begin; curr != end; curr++)
// 		cout << *curr << '\t';
// 	cout << endl;

// 	delete[] list2; //할당 해제

// 	return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// void print(int** m, int nRow, int nCol) {
// 	for (int row=0; row<nRow; row++){
// 		for (int col=0; col<nCol; col++){
// 			cout << m[row][col] << "\t";
// 		}
// 		cout << endl;
// 	} //2중 for문과 index를 이용하여 배열 원소 출력 - 구분자 : '\t'
// }

// int main() {
// 	int nRow = 2, nCol = 2;
// 	int** matrix2;
// 	matrix2 = new int*[nRow]; // 동적배열 선언(행기준)
// 	for (int i = 0; i < nRow; i++)
// 		matrix2[i] = new int[nRow]; // 동적배열 선언(열기준)

// 	matrix2[0][0] = 1; matrix2[0][1] = 2;
// 	matrix2[1][0] = 3; matrix2[1][1] = 4;

// 	print(matrix2, nRow, nCol);


// 	for (int i = 0; i < nRow; i++)
// 		delete[] matrix2[i];

// 	delete[] matrix2;

// 	return 0;
// }

# include <iostream>
# include <vector>
using namespace std;

bool found_char(const char* s, char ch) {
	while (*s != '\0'){
		if (ch == *s){
			return true;
			s ++;
		}
		s++;
	}  
	// s와 ch 만으로 (s,s+1, ...)에 ch가 있는지 true/false return
}
int main() {
	//                012345(6)
	const char* phrase = "phrase";// ch[]
				   // phrase(\0)==NULL 

	for (char ch = 'a'; ch <= 'z'; ch++) { // 'a' == 65, 'z' == 97
		cout << ch << " is ";
		if (!found_char(phrase, ch))
			cout << "NOT";
		cout << " in (" << phrase <<")"  << endl;
	}

	return 0;
}