//
// Created by Sora on 2/10/2021.
//

#include "encryptor.hpp"
#include <string>
#include <cstring>

using namespace std;


string Encryptor::Encrypt(string originalWord){

    SetKey("jones");

//    char keyArray[GetKey().length()];
    int currentChar = 0;
//    strcpy(keyArray, originalWord.c_str());

    string keyArray = GetKey();

    char encryptedArray[10];

    for(int i = 0; i < originalWord.length(); i++)
    {
        int pos;
        int newPos;
        char newChar;
        pos = originalWord[i] - 97;
 //       newPos = currentChar + pos;
        newPos = keyArray[currentChar] + pos;
        if(newPos > 122)
        {
            newChar = 97 + (newPos - 123);
        }else{
            newChar = newPos;
        }
        if(currentChar < GetKey().length()-1)
        {
            currentChar++;
        }else{
            currentChar = 0;
        }
        encryptedArray[i] = newChar;
    }
    encryptedArray[9] = '\0';
    string password(encryptedArray);
    return password;

}
string Encryptor::GetKey()
{
    return key;
}

void Encryptor::SetKey(string k)
{
    key = k;
}

Encryptor::Encryptor() {
    //
}
