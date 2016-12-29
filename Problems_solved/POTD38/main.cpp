#include "func.h"

// .h and .cpp files seperate the declarations of the functions from the implementations. we could let the client see the .h file and they would be able to use the functions without knowing how they were implemented.

int main(){
    string key = secretKey();
    cout << "The encryption of the secret key is ";
    encrypt(key);
    return 0;
}