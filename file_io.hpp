//
// Created by Sora on 2/3/2021.
//

#ifndef PROJECT1_FILE_IO_HPP
#define PROJECT1_FILE_IO_HPP

#include <string>
#include <fstream>

using namespace std;

class File_IO{

private:
    string fileName;
    ifstream inFile;
    ofstream outFile;
    string GeneratePassword();
public:
    File_IO();
    File_IO(string s);
    bool ReadFile();

    string GetFileName();


    bool WriteEncryptedFile();
};

#endif //PROJECT1_FILE_IO_HPP
