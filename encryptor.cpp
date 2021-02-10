//
// Created by Sora on 2/10/2021.
//

#include "encryptor.hpp"
#include <string>
#include <cstring>

using namespace std;


string Encryptor::Encrypt(string originalWord){

    char keyArray[GetKey().length()];
    int currentChar = 0;
    strcpy(keyArray, originalWord.c_str());

    char encryptedArray[9];

    for(int i = 0; i < originalWord.length(); i++)
    {
        int pos;
        int newPos;
        char newChar;
        pos = originalWord[i] - 97;
        newPos = currentChar + pos;
        keyArray[currentChar] + newPos;
        if(newPos > 122)
        {
            newChar = 97 + (newPos - 122);
        }else{
            newChar = newPos;
        }
        if(currentChar < GetKey().length())
        {
            currentChar++;
        }else{
            currentChar = 0;
        }
        encryptedArray[i] = newChar;
    }

    string password(encryptedArray);
    return password;
}

string Encryptor::GetKey()
{
    return key;
}

void Encryptor::SetKey(string key)
{
    this->key = key;
}