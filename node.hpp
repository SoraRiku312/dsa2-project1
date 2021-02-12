/*
  Student Name: William Burch
  File Name: node.hpp
  Assignment number: Project 1

  Nodes hold the username and password to put into the table
*/

#ifndef PROJECT1_NODE_HPP
#define PROJECT1_NODE_HPP

#include <string>
using namespace std;

class Node {
private:
    string user;
    string encryptedPass;

public:
    Node(string user, string encryptedPass);
    const string &getUser() const;

    void setUser(const string &user);

    const string &getEncryptedPass() const;

    void setEncryptedPass(const string &encryptedPass);


};


#endif //PROJECT1_NODE_HPP
