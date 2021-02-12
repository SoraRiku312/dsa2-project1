/*
  Student Name: William Burch
  File Name: encryptor.cpp
  Assignment number: Project 1

  Encryptor encrypts the plaintext password using the Vignere cipher
 */

#include "encryptor.hpp"
#include <string>

using namespace std;

/*  Encryptor::Encrypt()
 *  Encrypts plaintext passwords using the Vignere cipher
 *  Parameters:
 *  string originalWord - the plaintext password
 *  Returns string - encrypted password
 */
string Encryptor::Encrypt(string originalWord){

    SetKey("jones");

    int currentChar = 0;

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

/*  Encryptor::GetKey()
 *  Gets the key
 *  Returns string - the key
 */
string Encryptor::GetKey()
{
    return key;
}

/*  Encryptor::SetKey()
 *  Sets the key
 *  Parameters:
 *  string k - the key to set
 */
void Encryptor::SetKey(string k)
{
    key = k;
}

Encryptor::Encryptor() {
    //
}
