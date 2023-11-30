#include <iostream>
#include <string>
using namespace std;

int main(){
    while(1){
        cout << "문자열 하나를 입력해주세요 : " ;
        string str;
        cin >> str;
        if (str == "Q" || str == "q"){
            break;
        }
        string reverse_str = "";
        for (int i=str.size()-1; i >= 0; i--){
            reverse_str += str[i];
        }
        cout << "입력하신 문자열의 역순 : "<< reverse_str << endl;
        bool IsSame = true;
        for (int i=0; i<str.size(); i++){
            if(str[i] != reverse_str[i]){
                IsSame = false;
                break;
            }
        }
        if (!IsSame){
            cout << "이 문자는 회문이 아닙니다." << endl;
            cout << endl;
        }
        if (IsSame){
            cout << "이 문자는 회문입니다." << endl;
            cout << endl;
        }
    }
}