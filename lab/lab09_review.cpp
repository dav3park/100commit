// #include <iostream>
// #include <vector>
// #include <iomanip>
// using namespace std;
// using Matrix = vector<vector<int>>;


// // 배열의 경우 주소값(시작주소, 끝주소)을 전달
// void print(int* begin, int* end) {
// 	// for (int* curr = begin; curr<end; curr++) //수업시간에 배운 주소값을 기준으로 for문 작성
// 	// cout << setw(4) << *curr;
	
// 	//  while문 구현 부분 - 수업시간에 배운 주소값을 기준으로 while문 작성
//     int* curr = begin;
//     while (curr != end) {
//         cout << setw(4) << *curr;
//         curr++;
//     }
// 	cout << endl;
// }

// // (+, -) for pointer: 주소값을 증가/감소 (다음 변수 위치)
// int main() {
// 	int list[3] = { 10, 20, 30 };
// 	cout << (list) << '\t' << *(list) << endl;
// 	cout << (list+1) << '\t' << *(list+1) << endl;
// 	cout << (list+2) << '\t' << *(list+2) << endl;

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
// 	// 	for (unsigned row = 0; row < mat.size(); row++) {
// 	// 		for (unsigned col = 0; col < mat[row].size(); col++) {
// 	// 			//mat.at(row).at(col);
// 	// 			cout << setw(4) << mat[row][col];
// 	// 		}
// 	// 		cout << endl;
// 	// 	}

// 	// vector 원소를 이용한 for 문 작성
//     // for (vector<int> row : mat) {
//     //     for (int col : row) {
//     //         cout << setw(4) << col;
//     //     }
//     //     cout << endl;
//     // }

// 	//유추 가능한 경우, 자료형 부분을 auto로 치환가능
// 	// vector<int> row = mat[0];
// 	//  ==    auto row = mat[0];
// 	// auto와 벡터 원소를 이용하여 for문 구현
// 	// for (auto row : mat) {
// 	// 	for (auto col : row) {
// 	// 		cout << setw(4) << col;
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
// 		if ((n % i) == 0)
//                 return false;// n을 i로 나눈 나머지가 0이면 false를 리턴
// 	return true;
// }

// vector<int> primes(int low, int high) {
// 	vector<int> result;
// 	for (int i = low; i <= high; i++)
// 		if (is_prime(i))
//             result.push_back(i); // 소수이면 (is_prime이 참이면) 뒤에 push
// 	return result;
// }

// void print(const vector<int>& v) {
// 	for (auto elem : v) //vector index가 아닌 원소를 이용한 for문
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
// // double* list2 = new double[length]

// 	int* begin = list2;
// 	int* end = list2+5;

// 	for (int* curr = begin; curr != end; curr++)
// 		cin >> *curr;

// 	for (int* curr = begin; curr != end; curr++)
// 		cout << *curr << '\t';
// 	cout << endl;

	
//     delete[] list2; //할당 해제

// 	return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// void print(int** m, int nRow, int nCol) {
// 	for (int row=0; row<nRow; row++){
// 		for (int col=0; col<nCol; col++){
// 			cout << m[row][col]<< "\t";
// 		}
// 		cout << endl;
// 	} //2중 for문과 index를 이용하여 배열 원소 출력 - 구분자 : '\t'
// }

// int main() {
// 	int nRow = 2, nCol = 2;
// 	int** matrix2;
// 	matrix2 = new int*[nRow]; // 동적배열 선언(행기준)
// 	for (int i = 0; i < nRow; i++)
// 		matrix2[i] = new int[nCol]; // 동적배열 선언(열기준)

// 	matrix2[0][0] = 1; matrix2[0][1] = 2;
// 	matrix2[1][0] = 3; matrix2[1][1] = 4;

// 	print(matrix2, nRow, nCol);


// 	for (int i = 0; i < nRow; i++)
// 		delete[] matrix2[i];

// 	delete[] matrix2;

// 	return 0;
// }


// # include <iostream>
// # include <vector>
// using namespace std;

// bool found_char(const char* s, char ch) {
// 	while (*s != '\0'){
// 		if (*s == ch)
// 			return true;
// 		s++;
// 	}
// } 
// int main() {
// 	//                012345(6)
// 	const char* phrase = "phrase";// ch[]
// 				   // phrase(\0)==NULL 

// 	for (char ch = 'a'; ch <= 'z'; ch++) { // 'a' == 65, 'z' == 97
// 		cout << ch << " is ";
// 		if (!found_char(phrase, ch))
// 			cout << "NOT";
// 		cout << " in (" << phrase <<")"  << endl;
// 	}

// 	return 0;
// }


// #include <iostream>
// #include <vector>
// #include <iomanip>
// using namespace std;

// bool can_mult(const vector<vector<int>>& v1,const vector<vector<int>>& v2){
// 	if (v1[0].size() == v2.size()){
// 		return true;
// 	}
// }


// void create_random(vector<vector<int>>& v){
// 	for (int row=0; row<v.size(); row++){
// 		for (int col=0; col<v[0].size(); col++){
// 			v[row][col] = rand() % 19 -9;
// 		}
// 	}

// }
// void print(const vector<vector<int>>& v){
// 	for (int row=0; row<v.size(); row++){
// 		for (int col=0; col<v[0].size(); col++){
// 			cout << setw(4) <<v[row][col];
// 		}
// 		cout << endl;
// 	}

// }

// void mult(vector<vector<int>>& result,const vector<vector<int>>& v1,const vector<vector<int>>& v2){
// 	for (int row=0; row <v1.size(); row++){
// 		for (int col=0; col <v2[0].size(); col++){
// 			result[row][col] = 0;
// 			for (int newCol = 0; newCol < v2[0].size(); newCol++){
// 				result[row][col] += v1[row][newCol] * v2[newCol][col];
// 			}
// 		}
// 	}
	
	
// }

// int main(){
// 	int row1,col1,row2,col2;
// 	cout << "A의 행, 열 크기를 입력해주세요 : ";
// 	cin >> row1 >> col1;
// 	cout << "B의 행, 열 크기를 입력해주세요 : ";
// 	cin >> row2 >> col2;
// 	if (row1 ==0 ||row2 ==0 ||col1 ==0 ||col2 ==0){
// 		cout << endl;
// 		cout << "행렬을 생성할 수 없습니다.";
// 		return 0;
// 	}
// 	vector<vector<int>> v1(row1,(vector<int>(col1)));
// 	vector<vector<int>> v2(row2,(vector<int>(col2)));
// 	create_random(v1);
// 	create_random(v2);
// 	cout << endl;
// 	cout << "A 행렬 : " << endl;
// 	print(v1);
// 	cout << endl;
// 	cout << "B 행렬 : " << endl;
// 	print(v2);
// 	cout << endl;
// 	if (!can_mult(v1,v2)){
// 		cout << "두 행렬을 곱할 수 없습니다.";
// 		return 0;
// 	}
// 	vector<vector<int>> result(v1.size(), vector<int>(v2[0].size()));
// 	cout << "AB 곱행렬 : ";
// 	cout << endl;
// 	mult(result,v1,v2);
// 	print(result);
// 	cout << endl;
// 	return 0;
// }


#include <iostream>
using namespace std;

int* make_arr(int n) {
	int *array = new int[n];
	for (int i = 1; i<=n; i++){
		array[i-1] += (2*i-1);
	}
	return array;
}
void print_arr(int* a, int n) {
	cout << "\nOdd Number Array:" << endl;
	while (n) {
		cout << *a << " ";
		a++;
		n--;
	}
	cout << endl;
}
int sum_arr(int* a, int n) {
	int s = 0;
	for (int i = 0; i < n; i++)
		s += a[i];
	return s;
}

int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;

	int* arr = make_arr(n);
	print_arr(arr, n);

	int sum = sum_arr(arr, n);
	cout << "\nSum of the array: " << sum << endl;

	delete[] arr;
	return 0;
}

// #include <iostream>
// using namespace std;
// void create(int *array,int n){
// 	for (int i = 0; i<n; i++){
// 		array[i] += rand() % n +1;
// 	}
// }

// void print(int *array, int n){
// 	for (int i=0; i<n; i++){
// 		cout << array[i] << " ";
// 	}
// 	cout << endl;
// }

// bool is_duplicated(int* array, int n){
// 	for (int i=0; i<n; i++){
// 		for (int j=0; j<n; j++){
// 			if (array[i] == array[j])
// 				return true;
// 			return false;
// 		}
// 	}
// }

// int main(){
// 	cout << "Please enter a number: ";
// 	int n;
// 	cin >> n;
// 	if (n/2 == 0){
// 		cout << "Wrong number!!!" << endl;
// 		return 0;
// 	}
// 	cout << "Size of random array: " << n/2 << endl;
// 	cout << "[ Array ]" << endl;
// 	int *array = new int[n];
// 	create(array,n/2);
// 	print(array,n/2);
// 	if (n/2 == 1){
// 		cout << "Duplicates not found." << endl;
// 		return 0;
// 	}
// 	if (is_duplicated(array,n/2)){
// 		cout << "Duplicates found."<< endl;
// 		return 0;
// 	}
// 	cout << "Duplicates not found." << endl;
// 	return 0;
// }

// #include<iostream>
// using namespace std;

// int** buildTable(int n) {
// 	int ** array = new int*[n];
// 	for (int i=0; i<n; i++){
// 		array[i] = new int[n];
// 	}
// 	for (int i=0; i<n; i++){
// 		for (int j =0; j<n; j++){
// 			array[i][j] += 0;
// 		}
// 	}
// 	return array;
// }

// void make_identity_matrix(int** table, int n) {
// 	for (int i=0; i<n; i++){
// 		for (int j=0; j<n; j++){
// 			if (i==j){
// 				table[i][j] += 1;
// 			}
// 		}
// 	}
// }
// void printTable(int** table, int n) {
// 	for (int i =0; i<n; i++){
// 		for (int j=0; j<n; j++){
// 			cout << table[i][j] << '\t'; 
// 		}
// 		cout << endl;
// 	}
// }

// int main() {
// 	int n = 0;
// 	cout << "N을 입력하시오: ";
// 	cin >> n;
// 	if (n < 1) {
// 		cout << "\n행렬을 생성할 수 없습니다.\n" << endl;
// 		exit(EXIT_FAILURE);
// 	}

// 	int** table = buildTable(n);
// 	make_identity_matrix(table, n);
// 	printTable(table, n);

// 	for (int i = 0; i < n; i++)
// 		delete[] table[i];
// 	delete[] table;

// 	return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// /*
// * print 
// * Prints the contents of a vector of integers
// * a is the vector to print; a is not modified
// */
// void print(const std::vector<int>& a) {
//     int n = a.size();
//     std::cout << "{";
//     if (n > 0) {
//     std::cout << a[0];  // Print the first element
//     for (int i = 1; i < n; i++)
//        std::cout << ',' << a[i];  // Print the rest
//     } 
//     std::cout << "}";
// }
// /*
//  *  Prints all the permutations of vector a in the
//  *  index range begin...end, inclusive.  The function's
//  *  behavior is undefined if begin or end
//  *  represents an index outside of the bounds of vector a.
//  */
// void permute(std::vector<int>& a, int begin, int end) {
// 	for (int i = begin; i<end; i++){
// 		for 

// 	}

// } 

// /*
//  *  Tests the permutation functions
// */
// int main() {
//     // Get number of values from the user
//     std::cout << "Please enter number of values to permute: ";
//     int number;
//     std::cin >> number;
//     // Create the vector to hold all the values
//     std::vector<int> list(number);
//     // Initialize the vector
//     for (int i = 0; i < number; i++)
// 		list[i] = i; 
//     // Print original list
//     print(list);
//     std::cout << "\n----------\n";
//     // Print all the permutations of list
//     permute(list, 0, number - 1);
//     std::cout << "\n----------\n";
//     // Print list after all the manipulations
//     print(list);
