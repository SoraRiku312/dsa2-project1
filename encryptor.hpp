//
// Created by Sora on 2/10/2021.
//

#ifndef PROJECT1_ENCRYPTOR_HPP
#define PROJECT1_ENCRYPTOR_HPP
#include <string>
using namespace std;


class Encryptor {

private:
     string key = "jones";
public:
    Encryptor();
    string  Encrypt(string originalWord);
    string  GetKey();
    void  SetKey(string key);
};


#endif //PROJECT1_ENCRYPTOR_HPP
