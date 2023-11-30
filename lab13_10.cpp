#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1(10);
    vector<int> v2(10);

    for (int i = 0; i< v1.size(); i++){
        v1[i] = rand() % 11;
        v2[i] = rand() % 21;
    }
    cout << "<vector 1>"<< endl;
    for (int i = 0; i < v1.size(); i++){
        cout << v1[i] << " " ;
    }
    cout << endl;
    cout << "<vector 2>"<< endl;
    for (int i = 0; i < v2.size(); i++){
        cout << v2[i] << " " ;
    }
    cout << endl;
    
    int max = 0;
    for (int i = 0; i< v1.size(); i++){
        for (int j =0; j<v1.size(); j++){
            int save;
            save = v1[i] * v2[j];
            if (max < save){
                max = save;
            }
        }
    }
    int min = 0;
    for (int i = 0; i< v1.size(); i++){
        for (int j =0; j<v1.size(); j++){
            int save;
            save = v1[i] * v2[j];
            if (min > save){
                min = save;
            }
        }
    }
    cout << endl;
    cout << "최댓값 = " << max << endl;
    cout << "최솟값 = " << min << endl;
    
}