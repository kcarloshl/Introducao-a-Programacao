#include <iostream>


using namespace std;


int main(){
    string nomes [6];


    for(int i = 0; i < 6; i++) {
        cin >> nomes [i];
    }


    for(int i = 0; i <= 5; i++) {
        cout << nomes [i] << endl;
    }


    return 0;
}
