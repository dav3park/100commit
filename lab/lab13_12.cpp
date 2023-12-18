#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int num;
    cout << "홀수 숫자를 하나 입력해 주세요 : ";
    cin >> num;

    vector<vector<int>> v(num+1, vector<int>(num+1, 0));
    
    int count = 1;
    int col = ((num+1)/2);
    int row = num;
    v[0][col] = 1; // 맨 윗칸 가운데 1설정 v[0][가운데]
    v[row][col] = 1; // 맨 아래 가운데 1설정

    while(count != num*num){
        bool IsCountOkay = true;
        bool both = false;
        col++;
        row--;
        if (col == num+1 && row == -1){
            col --;
            row = row + 2;
            both = true;
        }

        if (col == num+1 && both == false){
            col = 0;
            row ++;
            IsCountOkay = false;
        }
        if (row == -1 && both == false){
            col--;
            row = num;
            IsCountOkay = false;
        }
        
        if (IsCountOkay){
            count++;
        }
        
        if (v[row][col] != 0){
            col--;
            row = row + 2;
        }

        v[row][col] = count;
        
    }
    for (int i=0; i<num; i++){
        for(int j=1; j<num+1; j++){
            cout << setw(3) <<v[i][j]; 
        }
        cout << endl;
    }
}