//
// Created by Sora on 2/3/2021.
//
#define CATCH_CONFIG_MAIN
#include "catch/catch.hpp"
#include "../file_io.hpp"
#include "../hasher.hpp"
#include "../node.hpp"

using namespace std;

TEST_CASE("READ_FILE")
{
    File_IO f("lastNames.txt");
    CHECK("lastNames" == f.GetFileName());
    CHECK(TRUE == f.ReadFile());

}

TEST_CASE("ENCRYPT_PASSWORDS")
{
    File_IO f("lastNames.txt");
    CHECK(TRUE == f.WriteEncryptedFile());
}

TEST_CASE("INSERT_USER")
{
    Hasher hashTable(10);
    CHECK(8== hashTable.insertUser("SMITH"));
    CHECK(TRUE== hashTable.insertUser("JOHNSON"));
    CHECK(TRUE== hashTable.insertUser("WILLIAMS"));
    CHECK(TRUE== hashTable.insertUser("JONES"));
    CHECK(TRUE== hashTable.insertUser("BROWN"));

}
TEST_CASE("HASH_TABLE")
{
    Hasher hashTable(10);
    Node node1("SMITH", "yvdkzdare");
    hashTable.InsertNode(&node1);
    Node node2("JOHNSON", "hzapxmlsm");
    hashTable.InsertNode(&node2);
    Node node3("WILLIAMS", "aqiwugutf");
    hashTable.InsertNode(&node3);
    Node node4("JONES", "fysrimika");
    hashTable.InsertNode(&node4);
    Node node5("BROWN", "obssregex");
    hashTable.InsertNode(&node5);
    hashTable.PrintOut();
}