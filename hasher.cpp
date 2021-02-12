/*
  Student Name: William Burch
  File Name: hasher.cpp
  Assignment number: Project 1

  Hasher hashes the last name into the table
 */

#include <iostream>
#include "hasher.hpp"
#include "encryptor.hpp"

using namespace std;

/*  Hasher::getNumOfBuckets()
 *  Gets the number of buckets
 *  Parameters:
 *  Returns int - the number of buckets
 */
int Hasher::getNumOfBuckets() const {
    return numOfBuckets;
}

/*  Hasher::InsertNode()
 *  inserts the node into the table
 *  Parameters:
 *  Node *node - the node containing the user and password
 */
void Hasher::InsertNode(Node *node)
{
    string user;
    int pos;
    user = node->getUser();
    pos = HashFunction(user);
    table[pos].push_back(node);
}

//void Hasher::PrintOut()
//{
//    for(int i = 0; i < getNumOfBuckets(); i++)
//    {
//        std::cout << "Position " << i << ": ";
//        for(Node* j : table[i])
//        {
//            std::cout << j->getUser() << " : " << j->getEncryptedPass() << std::endl;
//        }
//    }
//}


/*  Hasher::Hasher()
 *  Constructs the hash table
 *  Parameters:
 *  int numOfbuckets - the number of buckets in the table
 */
Hasher::Hasher(int numOfBuckets) {
    this->numOfBuckets = numOfBuckets;
    table = new list<Node*>[numOfBuckets];

}

/*  Hasher::HashFunction()
 *  Hashes the name using std::hash<string>
 *  Parameters:
 *  string user - the user to hash
 *  Returns int - the hashed number
 */
int Hasher::HashFunction(string name) {
    std::hash<string> hasher;
    size_t hash = hasher(name);


    return hash % getNumOfBuckets();
}

/*  Hasher::findEntry()
 *  Finds the node in the table
 *  Parameters:
 *  string user - the user to find
 *  string pass - the plaintext password
 *  Returns bool - if the entry was found or not
 */
bool Hasher::findEntry(string user, string pass) {
    Encryptor encryptor;
    string encryptedPass = encryptor.Encrypt(pass);

    int pos = HashFunction(user);
    for(Node* i : table[pos])
    {
        if(i->getUser() == user)
        {
            if(i->getEncryptedPass() == encryptedPass)
            {
                cout << user << "\t" << pass << "\tmatch" << endl;
                return true;
            }
        }
    }

    cout << user << "\t" << pass << "\tno match" << endl;

    return false;
}




