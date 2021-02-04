//
// Created by Sora on 2/3/2021.
//

#ifndef PROJECT1_FILE_IO_HPP
#define PROJECT1_FILE_IO_HPP

#include <string>
using namespace std;

class File_IO{

private:
    string fileName;
    void ReadFile();


public:
    File_IO();
    File_IO(string s);
    void GeneratePasswords();
    string GetFileName();


};

#endif //PROJECT1_FILE_IO_HPP
