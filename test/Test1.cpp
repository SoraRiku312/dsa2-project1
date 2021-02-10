//
// Created by Sora on 2/3/2021.
//
#define CATCH_CONFIG_MAIN
#include "catch/catch.hpp"
#include "../file_io.hpp"

using namespace std;

TEST_CASE("READ_FILE")
{
    File_IO f("lastNames.txt");
    CHECK("lastNames" == f.GetFileName());
    CHECK(TRUE == f.ReadFile());

}