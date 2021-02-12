/*
  Student Name: William Burch
  File Name: file_io.hpp
  Assignment number: Project 1

  File_IO reads and writes the text files used: raw.txt, lastNames.txt, and encrypted.txt
 */

#ifndef PROJECT1_FILE_IO_HPP
#define PROJECT1_FILE_IO_HPP

#include <string>
#include <fstream>
#include "hasher.hpp"

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
    void TestFiveLegal(Hasher hashTable);
    void TestFiveIllegal(Hasher hashTable);
    string GetFileName();
    void insertNodes(Hasher hashTable);

    bool WriteEncryptedFile();
};

#endif //PROJECT1_FILE_IO_HPP
