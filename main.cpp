/*
  Student Name: William Burch
  File Name: main.cpp
  Assignment number: Project 1

  Puts the first 5 last names into a hash table and demonstrates the encryption working
*/

#include "node.hpp"
#include "hasher.hpp"
#include "file_io.hpp"

#include <iostream>

using namespace std;

int main()
{
    File_IO f("lastNames.txt");
    f.ReadFile();
    f.WriteEncryptedFile();

    Hasher hashTable(10);
    f.insertNodes(hashTable);

    cout << "Legal:" << endl;
    cout << "Userid\tPassword\tResult" << endl;
    f.TestFiveLegal(hashTable);

    cout << "\nIllegal:" << endl;
    cout << "Userid\tPassword\tResult" << endl;
    f.TestFiveIllegal(hashTable);

    string exit;
    cout << "\n\nEnter a key to exit!" << endl;
    cin >> exit;





    return 0;
}