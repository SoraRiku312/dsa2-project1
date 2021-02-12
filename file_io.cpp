/*
  Student Name: William Burch
  File Name: file_io.cpp
  Assignment number: Project 1

  File_IO reads and writes the text files used: raw.txt, lastNames.txt, and encrypted.txt
 */

#include "file_io.hpp"
#include <string>

#include <sstream>
#include "encryptor.hpp"


using namespace std;


File_IO::File_IO() {

    //
}


/*  File_IO::ReadFile()
 * reads lastNames.txt and makes raw.txt with passwords
 * returns true if successful
 */
bool File_IO::ReadFile() {

    inFile.open("lastNames.txt");
    outFile.open("raw.txt");
    if(GetFileName() == "lastNames")
    {
        string name;
        string trash;
        string line;

        /* USE THIS TO READ ENTIRE FILE
        while(getline(inFile, line))
        {
            stringstream ss(line);
            ss >> name;

            outFile << name << " ";
            outFile << GeneratePassword() << endl;
        }
         */
        getline(inFile, line);
        for(int i = 0; i < 5; getline(inFile, line))
        {
            stringstream ss(line);
            ss >> name;

            outFile << name << " ";
            outFile << GeneratePassword() << endl;
            i++;
        }

        outFile.close();
        inFile.close();
        return true;
    }
    outFile.close();
    inFile.close();
    return false;

}

File_IO::File_IO(string s) {

    this->fileName = "lastNames";

}

string File_IO::GetFileName() {
    return fileName;
}

/*  File_IO::GeneratePassword()
 * generates passwords randomly
 * returns the random password
 */
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
/*  File_IO::WriteEncryptedFilel()
 * writes encrypted.txt
 * returns true if successful
 */
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
        outFile.close();
        inFile.close();
        return true;
    }
    outFile.close();
    inFile.close();
    return false;

}


/*  File_IO::TestFiveLegal()
 * tests 5 illegal users and passwords
 * Parameters:
 * Hasher hashTable - the hash table
 */
void File_IO::TestFiveIllegal(Hasher hashTable) {
    inFile.open("raw.txt");

    string user;
    string plainPass;

        while(inFile >> user)
        {
            inFile >> plainPass;

            int pos = rand() % 9;
            plainPass[pos] = 'x';
            hashTable.findEntry(user,plainPass);

        }
    inFile.close();
}
/*  File_IO::TestFiveLegal()
 * tests 5 legal users and passwords
 * Parameters:
 * Hasher hashTable - the hash table
 */
void File_IO::TestFiveLegal(Hasher hashTable) {
    inFile.open("raw.txt");

    string user;
    string plainPass;

        while(inFile >> user)
        {
            inFile >> plainPass;
            hashTable.findEntry(user,plainPass);

        }
    inFile.close();

}


/*  File_IO::insertNodes()
 * inserts the nodes from encrypted into the hash table
 * Parameters:
 * Hasher hashTable - the hash table
 */
void File_IO::insertNodes(Hasher hashTable) {

    inFile.open("encrypted.txt");

    string user;
    string encryptedPass;

    while(inFile >> user)
    {
        inFile >> encryptedPass;
        Node* node = new Node(user, encryptedPass);
        hashTable.InsertNode(node);

    }
    inFile.close();

}


