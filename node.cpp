/*
  Student Name: William Burch
  File Name: node.cpp
  Assignment number: Project 1

  Nodes hold the username and password to put into the table
*/

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

/*  Node::Node()
 * Constructs the node using user and the encrypted password
 * Parameters:
 * string user - the user
 * string encryptedPass - the encrypted password
 */
Node::Node(string user, string encryptedPass) {

    setUser(user);
    setEncryptedPass(encryptedPass);
}
