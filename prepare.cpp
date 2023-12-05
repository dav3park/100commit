// #include <iostream>
// #include <vector>
// using namespace std;

// // 3번 문제 
// int main(){
    
//     // 3-1
//     // int a[10];
//     // for (int i=0; i < 10; i++)
//     //     a[i] = 0;
//     // // a[4] = 5;
//     // *(a+4) = 5;
//     // for (int i=0; i < 10; i++)
//     //     cout << a[i] << " ";
    
    
//     // 3-2
//     int a[5][10];
//     for (int i=0; i< 5; i++ ){
//         for (int j=0; j<10; j++)
//             a[i][j] = 0;
//     }
//     *(*(a+3)+4) = 5;
//     for (int i=0; i< 5; i++ ){
//         for (int j=0; j<10; j++){
//             cout << a[i][j] << " ";}
//         cout << endl;
//     }
    
// }


// 4번 문제
// #include <iostream>
// using namespace std;
// int f(int a, int b){
//     return a+b;
// }

// int g (int (*f)(int,int), int x, int y){
//     return 2 * (*f)(x,y);
// }
// int main(){
//     cout << g(f, 2, 3) <<endl;
// }

// //  (1) 함수 g의 /*fill in here*/에 들어갈 내용은?
// // int (*f)(int,int)
// //  (2) 화면에 출력되는 값은 무엇인가? 
// // 10

// 5번 문제 

// #include <iostream>
// using namespace std;

// int** create_integer_matrix(int n){
//     int **M = new int*[n];
//     for (int i =0; i<n; i++){
//         M[i] = new int[n];
//     }
//     for (int i =0; i<n; i++){
//         for (int j=0; j<n; j++){
//             M[i][j] = i+j;
//         }
//     }
//     return M;
// }
// void destroy_integer_matrix(int** arr,int n){
//     for (int i=0; i < n; i++){
//         delete[] arr[i];
//     }
//     delete[] arr;
// }

// int main() {
//     int i,j, **M;
//     M = create_integer_matrix(3);
//     for (i=0; i<3; i++) {
//         for (j=0; j<3; j++) {
//             cout << M[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
//     destroy_integer_matrix(M, 3);
//     return 0;
// }

// 6번 문제

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
void get_command(string& command) {
    cout << "1. Generate matrix" << endl;
    cout << "2. Print matrix" << endl;
    cout << "3. Sort matrix" << endl;
    cout << "4. Save matrix" << endl;
    cout << "0. Exit program" << endl;
    cout << ">>";
    cin >> command;
}
void get_size(int &size) {
    cout << "Enter the size in (size x size): ";
    cin >> size;
}
int** gen_matrix(int n) {
    int** arr = new int*[n];
    for (int i =0; i<n; i++){
        arr[i] = new int[n];
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            arr[i][j] = rand() %101;
        }
    }
    return arr;
}

void swap(int* a, int* b);
void sort_array(int* ary, int size);
void sort_matrix_row(int** m, int size) {
    for (int i = 0; i<size; i++)
        sort_array(m[i],size);
    cout << "Completed" << endl;
}

void print_matrix(int** m, int n) {
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << m[i][j] << " "; 
        }
        cout << endl;
    }
}

void save_matrix(int** m, int n) {
    ofstream fout("matrix.txt");
    fout << n << endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            fout << m[i][j] << " ";
        }
        fout << endl;
    }
    fout << "Saved" << endl;
}
void free_matrix(int** m, int n) {
    for (int i=0; i<n; i++){
        delete[] m[i];
    }
    delete[] m;
}
int main() {
    ofstream temp;
    string command;
    int** matrix = NULL;
    int size = 0;
    while (1) {
        get_command(command);
        if (command == "1") {
            get_size(size);
            matrix = gen_matrix(size);
        }
        else if (command == "2") {
            print_matrix(matrix, size);
        }
        else if (command == "3") {
            sort_matrix_row(matrix, size);
        }
        else if (command == "4") {
            save_matrix(matrix, size);
        }
        else if (command == "0") {
            free_matrix(matrix, size);
            cout << "Exit the program.." << endl;
            exit(104);
} else {
            cout << "Wrong command" << endl << endl;
        }
}
return 0; }
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp; }

void sort_array(int* ary, int size) {
    for (int i=0; i<size-1; i++){
        for (int j=0; j<size-1; j++){
            if (ary[j]>ary[j+1])
                swap(ary[j],ary[j+1]);
        }
    }
}   
