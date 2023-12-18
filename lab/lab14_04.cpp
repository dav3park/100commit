#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class FilenotFound : public exception{
    string message;
public:
    FilenotFound(const string& filenam) : message("File \"" + filenam + "\" not found") {}
    virtual const char* what() const throw(){
        return message.c_str();
    }
};

int main()
{
	ofstream ofs;
	ofs.open("temp.txt");
	// 임의의 10x10 행렬 저장 구현
    for (int i=0; i<10; i++){
        for (int j=0; j<9; j++){
            int a = rand() % 100 +1;
            ofs << a;
            ofs << " ";
        }
        int b = rand() % 100 +1;
        ofs << b;
        ofs << endl;
    }
	ofs.close();

	// 파일이름 입력
    string filename;
    cout << "파일 이름 : ";
    cin >> filename;

    try{
        ifstream ifs(filename);
        if (!ifs) {
            throw FilenotFound(filename);
        }
        int row,col;
        cout << "출력할 행 크기 : ";
        cin >> row;
        cout << "출력할 열 크기 : ";
        cin >> col;
        vector<vector<int>> matrix(row,vector<int>(col));
        for (int i = 0; i < row; ++i) {
        vector<int> Row(row);
        for (int j = 0; j < col; ++j) {
            int num;
            ifs >> num;
            Row.at(j) = num ;
        }
        matrix.at(i) = Row;

        // 한 행을 읽고 나면 다음 행이 시작될 때까지 줄바꿈 문자 무시
        ifs.ignore(10000, '\n');
        }

        try{
            for (int i=0; i<row; i++){
                for (int j=0; j<col; j++){
                    cout << matrix.at(i).at(j) << " ";
                }
            cout << endl;
            }
        }
        catch(exception& e){
            cout << endl;
            cout << e.what();
        }
    }
    catch(exception& e){
        cout << endl;
        cout << e.what();
    }
    
  
    
    
	// 입력받은 파일이름에 맞는 파일을 읽어와 vector로 입력 후, 출력 구현
	return 0;
}

