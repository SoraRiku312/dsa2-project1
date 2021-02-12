//
// Created by Sora on 2/11/2021.
//

#include <iostream>
#include "hasher.hpp"
#include "encryptor.hpp"

using namespace std;

int Hasher::getNumOfBuckets() const {
    return numOfBuckets;
}

void Hasher::setNumOfBuckets(int numOfBuckets) {
    this->numOfBuckets = numOfBuckets;
}

list<Node*> *Hasher::getTable() const {
    return table;
}

void Hasher::setTable(list<Node*> *table) {
    this->table = table;
}

bool Hasher::InsertNode(Node *node)
{
    string user;
//    string pass;
    int pos;
    user = node->getUser();
//    pass = node->getEncryptedPass();
    pos = insertUser(user);
    table[pos].push_back(node);
    return true;
}

void Hasher::PrintOut()
{
    for(int i = 0; i < getNumOfBuckets(); i++)
    {
        std::cout << "Position " << i << ": ";
        for(Node* j : table[i])
        {
            std::cout << j->getUser() << " : " << j->getEncryptedPass() << std::endl;
        }
    }
}

int Hasher::insertUser(string user) {
    int pos = 0;
    pos = HashFunction(user);
    return pos;
}

Hasher::Hasher(int numOfBuckets) {
    this->numOfBuckets = numOfBuckets;
    table = new list<Node*>[numOfBuckets];

}

int Hasher::HashFunction(string name) {
    std::hash<string> hasher;
    size_t hash = hasher(name);


    return hash % getNumOfBuckets();
}

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
                return true;
            }
        }
    }

    return false;
}




