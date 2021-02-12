//
// Created by Sora on 2/11/2021.
//

#ifndef PROJECT1_HASHER_HPP
#define PROJECT1_HASHER_HPP

#include <list>
#include <string>
#include "node.hpp"

using namespace std;


class Hasher {
private:
    int numOfBuckets;
    list<Node*> *table;
    int HashFunction(string name);
public:

    bool InsertNode(Node *node);

    Hasher(int numOfBuckets);

    int getNumOfBuckets() const;

    void setNumOfBuckets(int numOfBuckets);

    list<Node*> *getTable() const;

    void setTable(list<Node*> *table);

    int insertUser(string user);

    void PrintOut();

    bool findEntry(string user, string pass);

};


#endif //PROJECT1_HASHER_HPP
