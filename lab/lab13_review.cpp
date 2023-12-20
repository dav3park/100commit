// #include<iostream>
// #include<vector>
// using namespace std;

// template<typename T, typename H>
// bool less_than(T a, H b) { return a < b; }

// template<class T>
// T sum(const vector<T>& v) {
//     T total = 0;
//     for (T elem : v){
//         total += elem;
//     }
//     return total;
// }

// int main() {
// 	cout << less_than(2, 3) << endl;
// 	cout << less_than(2.1, 2.9) << endl;
// 	cout << less_than(2, 2.5) << endl;

// 	vector<int> v1{ 1, 2, 3, 4 };
// 	vector<double> v2{ 10.1, 20.2, 30.3, 40.4 };
// 	cout << sum(v1) << endl;
// 	cout << sum(v2) << endl;

// 	return 0;
// }

// #include<iostream>
// using namespace std;

// template<class T>
// class Point {
// private:
// 	T x;
// 	T y;
// public:
// 	Point(T _x, T _y);
// 	void setXY(T _x, T _y);
// 	T getX();
// 	T getY();
// 	void print();
// };

// template<class T>
// Point<T>::Point(T _x, T _y) : x(_x), y(_y) {}

// template<class T>
// void Point<T>::setXY(T _x, T _y) {
// 	x = _x;
// 	y = _y;
// }

// // getX() 구현
// template<class T>
// T Point<T>::getX(){return x;}

// // getY() 구현
// template<class T>
// T Point<T>::getY(){return y;}

// // print() 구현
// template<class T>
// void Point<T>::print(){
//     cout << getX() <<  ", " << getY() << endl;
// }

// int main() {
// 	Point<int> pt(1, 2);
// 	Point<double> pt2(1.1, 2.2);
// 	pt.print();
// 	pt2.print();
// }


// #include <iostream>
// #include <vector> // 빠른 search, 느린 pop/push
// #include <list>   // 느린 search, 빠른 pop/push
// using namespace std;


// int main() {
// 	list<int> myList{ 1, 2, 3, 4 };
// 	char command;
// 	int inputVal;
// 	bool finished = false;
// 	while (!finished) {
// 		//command를 입력받음
// 		cout << "I)nput, P)rint, L)ength, E)mpty, Q)uit>>";
// 		cin >> command;

// 		//command에따라 기능 수행
// 		switch (command) {
// 		case 'I':
// 		case 'i':
// 			cin >> inputVal;
//             myList.push_back(inputVal);
// 			// push_back 구현
// 			break;
// 		case 'P':
// 		case 'p':
// 			// simplified for로 list출력 구현
//             for (int elem : myList){
//                 cout << elem << '\t';
//             }
//             cout << endl;  
// 			break;
// 		case 'L':
// 		case 'l':
// 			cout << "Number of items: " << myList.size() << endl;
// 			break;
// 		case 'E':
// 		case 'e':
// 			myList.clear();
// 			break;
// 		case 'Q':
// 		case 'q':
// 			finished = true;
// 			cout << "Exit the program" << endl;
// 			break;
// 		default:
// 			cout << "Wrong command" << endl;
// 			break;
// 		}
// 	}

// 	return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
// 	int ary[] = { 1, 2, 3, 4 };
// 	int* pBegin, *pEnd;
// 	pBegin = ary;
// 	pEnd = ary + 4;
// for (auto pIter = pBegin; pIter != pEnd; pIter++)
// 		cout << *pIter << "\t";
// 	cout << endl;

// 	//auto, begin(), end()
// 	vector<int> v{ 10, 20, 30, 40 };
// 	auto iter_begin = begin(v);
// 	auto iter_end = end(v);
// 	for (auto iter = iter_begin; iter!=iter_end; iter++)
// 		cout << *iter << "\t";
// 	cout << endl;

// 	return 0;
// }


// #include <iostream>
// #include <vector> // 빠른 search, 느린 pop/push
// #include <list>   // 느린 search, 빠른 pop/push
// using namespace std;

// template<class T>
// void print(const T& iter_begin, const T& iter_end) {
// 	for (T iter = iter_begin; iter != iter_end; iter++)
// 		cout << *iter << "\t";
// 	cout << endl;
// }

// template<class T>
// void print_reverse(const T& iter_begin, const T& iter_end) {
// 	T iter = iter_end; // end는 원소의 끝이 아니라 원소 끝의 다음번째
// 	while (iter != iter_begin){
//         iter--;
//         cout << *iter << "\t";
//     }
// 	cout << endl;
// }

// int main() {
// 	vector<int> v{ 1, 2, 3, 4 };
// 	list<double> l{ 1.1, 2.2, 3.3 };
// 	int ary[] = { 100, 200, 300, 400 };

// 	print(begin(v), end(v));
// 	print(begin(l), end(l));
// 	print(begin(ary), end(ary));

// 	print_reverse(begin(v), end(v));
// 	print_reverse(begin(l), end(l));
// 	print_reverse(begin(ary), end(ary));

// 	return 0;
// }

 


 
// #include <iostream>
// using namespace std;

// int sum(int x, int y) { return x + y; }
// int mult(int x, int y) { return x * y; }
// int evaluate(int(*f)(int, int), int x, int y) {
// 	return f(x, y);
// }
// int main() {
// 	cout << evaluate(&sum, 2, 3) << endl;
// 	cout << evaluate(&mult, 2, 3) << endl;

// 	// lambda 함수: [](입력변수)->리턴타입 {본문}
// 	// sum(): [](int x, int y)->int { return x + y; }
// 	cout << evaluate([](int x, int y)->int {return x+y;}, 20, 30) << endl;

// 	// simplified lambda함수 표헌: [](입력변수) {본문}
// 	// mult(): [](int x, int y) { return x * y; }
// 	cout << evaluate([](int x, int y){return x*y;}, 20, 30) << endl;

// 	//생성과 호출을 동시에: 람다함수(입력값)
// 	[](int x, int y) {cout << x << ", " << y << endl;}(20, 30);

// 	auto f = [](int x, int y) { return x - y; };
// 	cout << f(1000, 2000) << endl;
	
// 	return 0;
// }
 

// #include <iostream>
// #include <functional> // function object
// using namespace std;

// //[closure]: 외부 변수를 lambda함수 내부로 전달
// //[a]: 변수 a를 call by value로 lambda함수에 전달
// //[&a]: 변수 a를 call by reference로 전달
// //[=]: 모든 외부 변수를 call by value로 전달
// //[&]: 모든 외부 변수를 call by ref.로 전달
// //  - 사용시 주의할 점: closure를 사용할 경우 function객체로 assign 받을 것
// int evaluate2(function<int(int,int)> f, int x, int y) {
// 	return f(x, y);
// }

// int main() {
// 	int a = 10, b = 20;

// 	//[a]: 변수 a를 call by value로 lambda함수에 전달
//     /* a + x + y 람다 함수 구현 */
// 	cout << evaluate2([a](int x, int y){return a + x + y ;}, 2, 3) << endl;

// 	//[&]: 모든 외부 변수를 call by ref.로 전달
// 	/* a = 20; a * x 람다 함수 구현 */
//     cout << evaluate2([&](int x,int y){a = 20; return a * x;}, 10, 1) << endl;
// 	cout << "a: " << a << endl;
// 	return 0;
// }
 

// #include <iostream>
// #include <functional>
// #include <algorithm> // for_each, copy, transform
// #include <vector>
// using namespace std;

// int main() {
// 	vector<int> v1 = { 1,2,3,4 };
// 	for (int& elem : v1) {
// 		cout << elem << '\t';
// 	}
// 	cout << endl;

// 	// for_each(시작위치(iter), 끝위치(iter), 람다함수)
// 	for_each(begin(v1),end(v1),[](int x){cout << x << "\t";}); // v1의 시작부터 끝까지 출력, (띄어쓰기는 탭으로)
// 	cout << endl;

// 	for_each(begin(v1), end(v1), [](int& x){ x++; } ); // v1의 시작부터 끝까지 모든 elem++
// 	for_each(begin(v1),end(v1),[](int x){cout << x << "\t";}); // v1의 시작부터 끝까지 출력, (띄어쓰기는 탭으로)
// 	cout << endl;

// 	int a = 10;
// 	for_each(begin(v1), end(v1), [a](int& x){x += a;}); // v1의 시작부터 끝까지 모든 elem+=a
// 	for_each(begin(v1),end(v1),[](int x){cout << x << "\t";}); // v1의 시작부터 끝까지 출력, (띄어쓰기는 탭으로)
// 	cout << endl;

// 	vector<int> v2(v1.size());
// 	// copy: container1 (source)의 element를 container 2(destinstion)로 복사 
// 	// copy(src시작위치, src끝위치, dst시작위치)
// 	// v1: {1, 2, 3, 4}
// 	// v2: {0, 0, 2, 3}
// 	copy(begin(v1)+1, end(v1)-1, begin(v2)+2); // v1의 (시작+1) ~ (끝-1)을 v2의 (시작+2)위치부터 하나씩 복사
// 	for_each(begin(v2), end(v2), [](int x){cout << x << "\t";}); // v2의 시작부터 끝까지 출력, (띄어쓰기는 탭으로)
// 	cout << endl;

// 	// transform: cont1의 element를 변형한다음(람다함수) cont2에 복사
// 	// transform(src시작위치, src끝위치, dst시작위치, 람다함수)
// 	transform(begin(v1), end(v1), begin(v2), [](int& x){return x*x;}); // v1의 시작부터 끝까지 제곱해서 v2에 복사2
// 	for_each(begin(v2), end(v2), [](int x){cout << x << "\t";}); // v2의 시작부터 끝까지 출력, (띄어쓰기는 탭으로)
// 	cout << endl;
 
// 	return 0;
// }

// #include <iostream>
// #include <list>
// using namespace std;

// template <typename T>
// class CList
// {
// public:
// 	CList();
// 	~CList();

// 	bool IsEmpty();	// list가 비어 있으면 1, 아니면 0
// 	bool IsFull();	// list가 꽉 차 있으면 1, 아니면 0

// 	void Add(T data);		// list에 데이터 추가
// 	void Delete(T data);	// list에 데이터 삭제
// 	void Print();			// list에 데이터 출력

// private:
// 	T m_Array[5];	// 데이터를 저장할 공간
// 	int m_Length;	// list에 있는 데이터 수
// };

// template<class T>
// CList<T>::CList(){
//     m_Length = 0;
// }

// template<class T>
// CList<T>::~CList(){}

// template<class T>
// bool CList<T>::IsEmpty(){
//     if (m_Length == 0){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// template<class T>
// bool CList<T>::IsFull(){
//     if (m_Length == 5){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// template<class T>
// void CList<T>::Add(T data){
//     if (IsFull()){
//         cout << "List is full." << endl;
//     }
//     else{
//         bool IsDuplicated = false;
//         for (int i=0; i<m_Length; i++){
//             if(m_Array[i] == data){
//                 IsDuplicated = true;
//                 cout << "중복된 데이터가 존재합니다." << endl;
//                 break;
//             }
//         }
//         if (IsDuplicated == false){
//             m_Array[m_Length] = data;
//             m_Length++;
//             for (int i=m_Length-1; i > 0; i--){ //0까지 갈 일이 없음.
//                 if (m_Array[i] < m_Array[i-1]){
//                     swap(m_Array[i],m_Array[i-1]);
//                 }
//             }
            
//         }
//     }
// }

// template<class T>
// void CList<T>::Delete(T data){
//     if (IsEmpty()){
//         cout << "List is empty." << endl;
//     }
//     else{
//         int delete_index = -1;
//         for (int i=0; i < m_Length; i++){
//             if(m_Array[i] == data){
//                 delete_index = i;
//                 break;
//             }
//         }
//         if (delete_index != -1){
//             m_Array[delete_index] = m_Array[m_Length-1];
//             m_Length--;
//             for(int i = delete_index; i < m_Length; i++){
//                 if (m_Array[i] > m_Array[i+1]){
//                     swap(m_Array[i],m_Array[i+1]);
//                 }
//             }
//         }
        
//     }
// }

// template<class T>
// void CList<T>::Print(){
//     cout << "Current List" << endl;
//     for (int i=0; i<m_Length; i++){
//         cout << m_Array[i] << " ";
//     }
//     cout << endl;
// }



// int command()
// {
// 	int num;

// 	cout << "\n\t---- menu ----" << endl;
// 	cout << "\t1. 리스트 추가" << endl;
// 	cout << "\t2. 리스트 삭제" << endl;
// 	cout << "\t3. 리스트 출력" << endl;
// 	cout << "\t4. 프로그램 종료" << endl;
// 	cout << "\n\t입력 --> ";
// 	cin >> num;
// 	return num;
// }
// int main()
// {
// 	CList<int> list; // type형으로 list 선언
// 	int input; // list에 입력 할 데이터
// 	int com; // 선택한 기능
// 	while (1)
// 	{	com = command(); // 기능을 선택
// 		switch (com)
// 		{
// 		case 1: // 추가
// 			cout << "\n추가할 데이터 : ";
// 			cin >> input;
// 			list.Add(input);
// 			break;
// 		case 2: // 삭제
// 			cout << "\n삭제할 데이터 : ";
// 			cin >> input;
// 			list.Delete(input);
// 			break;
// 		case 3: // 출력
// 			list.Print();
// 			break;
// 		case 4: // 프로그램 종료
// 			cout << "\n\t프로그램을 종료합니다\n";
// 			return 0;
// 			break;
// 		default:
// 			break;			
// 		}
// 	}	return 0;}


 
// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> v1(10);
//     vector<int> v2(10);

//     for (int i = 0; i<10; i++){
//         v1[i] = rand() % 11;
//         v2[i] = rand() % 21;
//     }

//     cout << "<vector 1>" << endl;
//     for (int i = 0; i<10; i++){
//         cout << v1[i] << " ";
//     }
//     cout << endl;
//     cout << "<vector 2>" << endl;
//     for (int i = 0; i<10; i++){
//         cout << v2[i] << " ";
//     }
//     cout << endl;
    
//     int v1_max = 0;
//     int v2_max = 0;
//     for (int i = 0; i<10; i++){
//         if (v1_max < v1[i]){
//             v1_max = v1[i];
//         }
//         if (v2_max < v2[i]){
//             v2_max = v2[i];
//         }
//     }
//     cout << "최댓값 = " << v1_max * v2_max << endl;

//     int v1_min = 11;
//     int v2_min = 21;
//     for (int i = 0; i<10; i++){
//         if (v1_min > v1[i]){
//             v1_min = v1[i];
//         }
//         if (v2_min > v2[i]){
//             v2_min = v2[i];
//         }
//     }
//     cout << "최솟값 = " << v1_min * v2_min << endl;

// }

// #include <iostream>
// #include <algorithm>
// using namespace std;

// void is_or_not(void (*f)(string, string), string input, string reversed){
//     f(input, reversed);
// }

// int main(){
//     while(1){
//         cout << "문자열 하나를 입력해주세요 : ";
//         string str;
//         cin >> str;
//         if (str == "Q" || str == "q"){
//             break;
//         }
//         string str_reverse = str;
//         reverse(begin(str_reverse), end(str_reverse));
//         cout << "입력하신 문자열의 역순 : " << str_reverse << endl;

//         is_or_not([](string _str, string rev_str){
//             if (_str == rev_str){
//                 cout << "이 문자는 회문입니다." << endl;
//             }
//             else{
//                 cout << "이 문자는 회문이 아닙니다." << endl;
//             }
//         },str,str_reverse);  
//     }
// }

// #include <iostream>
// #include <vector>
// #include <iomanip>
// using namespace std;

// int main(){
//     cout << "홀수 숫자를 하나 입력해주세요: ";
//     int num;
//     cin >> num;
//     vector<vector<int>> v (num+1, vector<int> (num+1));
//     int count = 1;
//     v[0][(num/2)+1] = count;
    
//     int row = num;
//     int col = (num/2)+1;
//     v[row][col] = count;
//     while(count < num*num){
//         row--;
//         col++;
        
//         bool IsCountOkay = true;
        

//         if (row == -1 && col == num+1){
//             row = row + 2;
//             col --;
        
//         }

//         if (col == num+1){
//             row++;
//             col = 0;
//             IsCountOkay = false;
//         }

//         if (row == -1){
//             row = num;
//             col --;
//             IsCountOkay = false;
//         }


//         if (v[row][col] != 0){
//             row = row + 2;
//             col--;
//         }

        

//         if (IsCountOkay == true){
//             count++;
//         }

//         v[row][col] = count;


//     }
//     for (int i=0; i<num; i++){
//         for (int j=1; j<num+1; j++){
//             cout << setw(3) <<v[i][j];
//         }
//         cout << endl;
//     }
    
// }

// #include <iostream>
// using namespace std;

// template<typename T>
// class Queue{
// private:
//     T * p_list; // 정수형 변수들을 가지는 배열
//     int size; //현재 저장된 변수들의 개수
//     int MAX_SIZE; // 최대로 저장할 수 있는 p_list의 크기

// public:
//     Queue(int _MAX_SIZE = 1000) : MAX_SIZE(_MAX_SIZE){
//         size = 0;
//         p_list = new T[size];
//     }
//     //생성자: p_list의 크기를 MAX_SIZE만큼 동적 할당. 
//     ~Queue()  {
//         delete[] p_list;
//     } 
//     // 소멸자: p_list의 동적 할당을 해제
//     int find_index(T _item) {
//         for (int i = 0; i<size; i++){
//             if (p_list[i] == _item){
//                 return i;
//             }
//         }
//         return -1;
//     }
//     // p_list에서 _item과 동일한 값이 있는지 검색 후 발견시 index를 반환한다 만약 발견하지 못하면 -1을 반환한다
//     void Enqueue(T _item) {
//         int index = find_index(_item);
//         if (index == -1){
//             p_list[size] = _item;
//             size++;
//         }
//         if (index != -1){
//             cout << "Error: out of memory" << endl;
//         }
//     }
//     // 입력item을 p_list의 끝에 저장한다. 만약 _item과 동일한 값이 p_list에 존재할 경우 p_list에 _입력 item을 추가하지 않는다. (힌트: find_index 함수를 사용해서 중복된 값이 p_list에 있는지 조사후 없는 경우에 입력 item을 p_list에 추가). size가 MAX_SIZE보다 크면 item을 추가하지 않는다.("Error: out of memory"출력)
//     T Dequeue() {
//         if (size==0){
//             cout << "Error: No item exists in the list" << endl;
//         }
//         else{
//             for (int i=0; i<size; i++){
//                 swap(p_list[i],p_list[i+1]);
//             }
//             size--;
//         }
//     }
//     // p_list에 있는 첫번째 item을 제거한다음 그 아이템을 return한다 (힌트:size 값을 줄이면 p_list의 아이템을 제거한 것과 동일한 효과) size가 0일 때는 item을 제거하지 않는다. ( "Error: No item exists in the list"출력)
//     void print() const {
//         cout << "Items in the list : " << endl;
//         for (int i=0; i<size; i++){
//             cout << p_list[i] << ", ";
//         }
//         cout << endl;
//     }
//     // Queue 객체의 item들을 출력한다
//     int get_size() {
//         return size;
//     }
//     //Queue 객체의 크기를 출력한다
//     T get_item(int _index) {
//         return p_list[_index];
//     }
//     // p_list의 해당 index에 있는 item 값을 리턴한다.
// };





// int main()
// {
// 	Queue<int> int_queue;
// 	Queue<float> float_queue;
// 	Queue<char> char_queue;

// 	int_queue.Enqueue(1);
// 	int_queue.Enqueue(2);
// 	int_queue.Enqueue(2);
// 	int_queue.Enqueue(5);

// 	float_queue.Enqueue(4.3);
// 	float_queue.Enqueue(2.5);
// 	float_queue.Enqueue(3.7);
// 	float_queue.Enqueue(3.7);

// 	char_queue.Enqueue('b');
// 	char_queue.Enqueue('b');
// 	char_queue.Enqueue('c');
// 	char_queue.Enqueue('a');

// 	cout << "<Before Dequeue>" << endl;
// 	int_queue.print();
// 	float_queue.print();
// 	char_queue.print();

// 	int_queue.Dequeue();
// 	float_queue.Dequeue();
// 	float_queue.Dequeue();
// 	char_queue.Dequeue();
// 	char_queue.Dequeue();
// 	char_queue.Dequeue();
// 	char_queue.Dequeue();

// 	cout << "<After Dequeue>" << endl;
// 	int_queue.print();
// 	float_queue.print();
// 	char_queue.print();

// 	return 0;
// }
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
// 	vector<int> list{ 10, 20, 30, 40, 50 };
// 	int num; // 출력할 list의 수
// 	while (1) {
//         cout << "출력 할 숫자의 수 : ";
//         int num;
//         cin  >> num;
//         if (num == -1){
//             break;
//         }
        
//         for (int i=0; i<num; i++){
//             try{
//                 cout << list.at(i) << " ";
//             }
//             catch(exception& e){
//                 cout << endl;
//                 cout << "Index is out of range. Please try again." << endl;
//                 break;
//             }
//         }
//         cout << endl;
//     }
// 	cout << "Program exit..." << endl;
// 	return 0;
// }

