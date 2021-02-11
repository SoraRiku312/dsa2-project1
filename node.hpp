//
// Created by Sora on 2/11/2021.
//

#ifndef PROJECT1_NODE_HPP
#define PROJECT1_NODE_HPP

#include <string>
using namespace std;

class Node {
private:
    string user;
    string encryptedPass;
    Node * next;

public:
    Node(string user, string encryptedPass);
    const string &getUser() const;

    void setUser(const string &user);

    const string &getEncryptedPass() const;

    void setEncryptedPass(const string &encryptedPass);

    Node *getNext() const;

    void setNext(Node *next);

};


#endif //PROJECT1_NODE_HPP
