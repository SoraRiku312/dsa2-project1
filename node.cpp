//
// Created by Sora on 2/11/2021.
//

#include "node.hpp"
using namespace std;

const string &Node::getUser() const {
    return user;
}

void Node::setUser(const string &user) {
    Node::user = user;
}

const string &Node::getEncryptedPass() const {
    return encryptedPass;
}

void Node::setEncryptedPass(const string &encryptedPass) {
    Node::encryptedPass = encryptedPass;
}

Node *Node::getNext() const {
    return next;
}

void Node::setNext(Node *next) {
    Node::next = next;
}

Node::Node(string user, string encryptedPass) {

    setUser(user);
    setEncryptedPass(encryptedPass);
}
