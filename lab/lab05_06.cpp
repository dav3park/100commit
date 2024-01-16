// #include <iostream>
// using namespace std;


// int main() {
//     char grade = 'X';
// 	int score;
// 	cout << "Enter your score: ";
// 	cin >> score;

// 	if (score>=0 && score<=100) {
// 		if (score >= 90 && score <=100){
//             grade = 'A';
//         }
//         else if (score >= 80 && score <=90){
//             grade = 'B';
//         }
//         else if (score >= 70 && score <=80){
//             grade = 'C';
//         }
//         else if (score >= 60 && score <=70){
//             grade = 'D';
//         }
//         else {
//             grade = 'F';
//         }

// 		cout << "Your grade is " << grade << endl;
// 	}
// 	else {
// 		cout << "The score (" << score << ") is invalid" << endl;
// 	}

// 	return 0;

// }
	

// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     int num = 1;
// 	int count = 1;
// 	cout.imbue(locale("")); // 세 자리(1,000)마다 쉼표 찍기위함.
// 	while (count <= 20) {
//         (num = num * 2);
// 		cout << count << '\t' << setw(10) << num << endl;
// 		count++;
// 	}
// 	return 0;

// }

// #include<iostream>
// #include<iomanip>
// using namespace std;

// int main() {
// 	int column = 1, row = 1;
// 	while (row <= 10) {
// 		while (column <= 10) {
// 			int num;
// 			if (row==column){
// 				num = 1;
// 			}
// 			else {
// 				num = 0;
// 			}
// 			cout << setw(4) << num;
// 			column++;
// 		}
// 		cout << endl;
// 		column = 1;
// 		row++;
// 	}
// 	return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
// 	int num;

// 	while (true) {
// 		cout << "Enter the number (0, 10]: ";
// 		cin >> num;
// 		if (num >= 0 && num <= 10){
// 			break;
// 		}
// 	}
// 	cout << "Success!" << endl;
// 	return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
// 	int num;
// 	do {
// 		cout << "Enter the number (0,10]: ";
// 		cin >> num;
// 	} while (num <= 0 || num > 10); //반드시 세미콜론 찍어줌
// 	cout << "Success!" << endl;
// 	return 0;
// }

// #include<iostream>
// #include<iomanip>
// using namespace std;

// int main() {
// 	int n, m;
// 	cout << "Enter n for n x m matrix: ";
// 	cin >> n;
// 	cout << "Enter m for n x m matrix: ";
// 	cin >> m;

// 	for (int row = 1; row <= n; row++){
// 		for(int column=1; column <=m; column++){
// 			cout<<setw(4)<<column*row;
// 		}
// 		cout << endl;
// 	}
// 	return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
// 	char key;
// 	cout << "Enter a key (p or q): ";
// 	cin >> key;
// 	switch (key) {
// 		case 'q':
// 		case 'Q':
// 			cout << "Quit";
// 		case 'p':
// 		case 'P':
// 			cout << "Pause";
// 		default:
// 			cout << "Default";
// 	}
// 	return 0;
// }

// #include <iostream>
// using namespace std;

// int num;
// int n = 1;
// int main(){
// 	while (n<=5){
// 		cout << n << "번째 변수 : ";
// 		cin >> num;
// 		if (num%2==0){
// 			cout << num << "은(는) 짝수입니다." << endl;
// 		}
// 		else{
// 			cout << num << "은(는) 홀수입니다." << endl;
// 		}
// 		n++;
// 	}
// }

// #include <iostream>
// using namespace std;

// int main(){
// 	cout << "number : ";
// 	int number;
// 	cin >> number;
// 	int total = 0;
// 	for (int start = 1; start <= number; start++){
// 		total = total + start;
// 	}
// 	cout << "Sum of 1 to " << number << " =" << total;
// }


// #include <iostream>
// using namespace std;

// int main(){
// 	cout << "number : ";
// 	int number;
// 	cin >> number;
// 	int total = 0;
// 	for (int start = 1; start <= number; start++){
// 		if (start % 2 != 0 && start % 3 != 0){
// 			total = total + start;
// 		}
// 	}
// 	cout << "sum : " << total;

// }

// #include <iostream>
// using namespace std;

// int main() {
// 	int dan;
// 	while (true){
// 		cout << "단을 입력해주세요 (프로그램 종료 : -1) : ";
// 		cin >> dan;
// 		if (dan >= 1 && dan <= 9){
// 			for (int start = 1; start <= 9; start++){
// 				cout << dan << "*" << start << " = "<< (dan*start) << endl; 
// 			}
// 		}
// 		else if (dan == -1){
// 			break;
// 		}
// 		else{
// 			cout << "1부터 9까지의 수를 입력해주세요.";
// 		}
// 	}
// 	cout << "프로그램을 종료합니다.";
// }

#include <iostream>
using namespace std;

int u(int num1,int num2){
	if (num2 == 0){
		return num1;
	}
	else{
		int num3;
		num3 = num1-num2;
		return u(num2,num3);
	}
}


int main() {
	cout << "x = ";
	int x;
	cin >> x;
	cout << "y = ";
	int y;
	cin >> y;
	cout << "gcd" << "(" << x << "," << y << ")" << " = " <<u(x,y);
	return 0;

}


