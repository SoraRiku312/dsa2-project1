//
// Created by Sora on 2/3/2021.
//
#include "file_io.hpp"
#include <string>
#include <fstream>
#include <math.h>
#include <sstream>
#include "encryptor.hpp"

using namespace std;


File_IO::File_IO() {

    //
}



bool File_IO::ReadFile() {

    inFile.open("lastNames.txt");
    outFile.open("raw.txt");
    if(GetFileName() == "lastNames")
    {
        string name;
        string trash;
        string line;
        while(getline(inFile, line))
        {
            stringstream ss(line);
            ss >> name;

            outFile << name << " ";
            outFile << GeneratePassword() << endl;
        }
        outFile.close();
        return true;
    }
    return false;

}

File_IO::File_IO(string s) {

    this->fileName = "lastNames";

}

string File_IO::GetFileName() {
    return fileName;
}

string File_IO::GeneratePassword(){
    char passwordArray[9];
    for(int i = 0; i < 9; i++)
    {
        char character = (97) + rand() % 26;
        passwordArray[i] = character;
    }
    string password(passwordArray);
    return password;
}

bool File_IO::WriteEncryptedFile()
{
    outFile.open("encrypted.txt");
    inFile.open("raw.txt");

    string user;
    string plainPass;
    string encryptedPass;
    Encryptor enc;
    if(outFile.is_open())
    {
        while(inFile >> user)
        {
            inFile >> plainPass;
            encryptedPass = enc.Encrypt(plainPass);

            outFile << user << " " << encryptedPass << endl;
        }
        return true;
    }
    return false;

}