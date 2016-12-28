#include "func.h"

string secretKey(){
    cout << "The secret key is purplerocks" << endl;
    return "purplerocks";
}

void encrypt(string str){
    for(int i = 0; i < str.length(); i++)
        cout << (char)(str[i] + 3);
    cout << endl;
}
