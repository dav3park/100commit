// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
// 	vector<int> v{ 1, 2, 3, 4 };

// 	int index;
// 	cin >> index;
// 	try { cout << v.at(index) << endl; } // v.at(index) VS v[index]
// 	catch (exception& e) {
// 		cout << e.what() << endl;
// 		cout << "인덱스 에러" << endl;
// 	}

// 	cout << "[Program is running]" << endl;
// 	return 0;
// }

// #include <iostream>
// #include <vector>
// #include <string>
// #include <fstream>
// using namespace std;

// //예외처리: try/catch구문, throw문
// //1. 예외가 발생하는 부분을 try에 넣는다
// //2. 예외가 발생하면 catch 구문이 실행된다
// class FileNotFoundException : public exception {
// 	string message;
// public:
// 	FileNotFoundException(string _m) :
// 		message("File not found: " + _m) {}
// 	virtual const char* what() const throw() {
// 		return message.c_str();
// 	}

// };
// vector<int> load_vector(string filename) {
// 	ifstream fin(filename);

// 	// 파일이 열리지 않으면(파일이 존재하지x)
// 	if (!fin) {
// 		// 예외처리 (throw)
// 		throw FileNotFoundException(filename);
// 	}

// 	vector<int> result;
// 	int num, value;
// 	// 파일로부터 값을 result에 저장
// 	// 파일의 form: size, elements (5 1 2 3 4 4)
// 	fin >> num;
// 	for (int i = 0; i < num; i++) {
//         int a;
//         fin >> a;
//         result.push_back(a);
//     }
// 	return result;
// }
// int main() {
// 	try {
// 		vector<int> v = load_vector("values.dat"); // values.dat 파일에서 vector 로드
// 		for (int elem : v)
// 			cout << elem << ' ';
// 		cout << endl;
// 	}
// 	catch (exception& e) {
// 		cout << e.what() << endl;
// 	}
// 	return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;




// int main() {
// 	vector<int> list;
// 	// vector를 1~100 사이의 random한 크기로 만들고 채우는 코드 구현
//     int size = rand() % 100 + 1;
//     list.resize(size);

// 	int cnt = -1;
// 	while (1) {
// 		cnt++;
// 		try {list.at(cnt) = cnt;}
// 		catch (exception& e) { cout << "현재 list는 "<< cnt << "의 크기를 가지고 있다" << endl;
//         break; }
// 	}
// 	return 0;
// }

// #include <iostream>
// #include <fstream>
// #include <vector>
// using namespace std;


// class FileNotFoundException : public exception {
// 	string message; // Identifies the exception and filename
// public:
// 	FileNotFoundException(const string& fname) :
// 		message("File \"" + fname + "\" not found") {}

// 	virtual const char* what() const throw () {
// 		return message.c_str();
// 	}
// };
// class CStudent
// {
// private:
// 	string m_Name;
// 	int m_Number;
// 	string m_Major;
// public:
// 	CStudent() {}
// 	~CStudent() {}
// 	void setAll(string _name, int _num, string _maj) {
// 		m_Name = _name;
// 		m_Number = _num;
// 		m_Major = _maj;
// 	}
// 	void Display() {
// 		cout << "이름: " << m_Name << endl;
// 		cout << "학번: " << m_Number << endl;
// 		cout << "전공: " << m_Major << endl << endl;
// 	}
// };
// vector<CStudent> read_file(string& filename) {
//     ifstream fin(filename);

//     if (!fin){
//         throw FileNotFoundException(filename);
//     }
//     else{
//         int num;
//         fin >> num;
//         vector<CStudent> v(num);
//         for (int i=0; i<num; i++){
//             string name;
//             int id;
//             string major;
//             fin >> name;
//             fin >> id;
//             fin >> major;
//             CStudent a;
//             a.setAll(name, id, major);
//             v.at(i) = a;
//         }
//         return v;
//     }

// }

// int main() {
// 	string str;

// 	cout << "파일 이름 : ";
// 	cin >> str;

// 	try {
// 		vector<CStudent> numbers = read_file(str);
// 		for (CStudent value : numbers)
// 			value.Display();
// 	}
// 	catch (std::exception& e) {
// 		cout << e.what() << '\n';
// 	}

// 	return 0;
// }

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class FilenotFound : public exception{
string message;
public:
    FilenotFound(string& _filename) : message("File\""+ _filename + "\"not found") {}
    
    virtual const char* what() const throw() {
        return message.c_str();
    }

};


int main()
{
	ofstream ofs;
	ofs.open("temp.txt");
	// 임의의 10x10 행렬 저장 구현
    


    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            int a = rand() % 100 + 1;
            ofs << a << " ";
        }
        ofs << '\n';
    }


	ofs.close();

	// 파일이름 입력
    cout << "파일 이름 : ";
    string filename;
    cin >> filename;
    try{
        ifstream fin(filename);
        if (!fin){
            throw FilenotFound(filename);
        }
        int row, col;
        cout << "출력 할 행 크기: ";
        cin >> row;
        cout << "출력 할 열 크기: ";
        cin >> col;
        vector<vector<int>> v (row, vector<int> (col));
        for (int i = 0; i < row; i++){
            for (int j=0; j < col; j++){
                int a;
                fin >> a;
                v.at(j) = a; 
            }
            v.at(i) 
        }
        

    }
    catch(exception& e){
        e.what();
    }

	// 입력받은 파일이름에 맞는 파일을 읽어와 vector로 입력 후, 출력 구현

	return 0;
}
