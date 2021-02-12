/*
  Student Name: William Burch
  File Name: hasher.hpp
  Assignment number: Project 1

  Hasher hashes the last name into the table
 */

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

    void InsertNode(Node *node);

    Hasher(int numOfBuckets);

    int getNumOfBuckets() const;


    bool findEntry(string user, string pass);

};


#endif //PROJECT1_HASHER_HPP
