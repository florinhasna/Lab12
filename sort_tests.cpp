#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "sort.h"
#include <vector>

TEST_CASE("test swap", "[swap]"){
    std::vector<int> aVector = {1, 0, 2};
    swap(aVector, 0, 1);
    REQUIRE(aVector[0] == 0 && aVector[1] == 1);
    swap(aVector, 2, 1);
    REQUIRE(aVector[1] == 2 && aVector[2] == 1);
    swap(aVector, 0, 2);
    REQUIRE(aVector[0] == 1 && aVector[2] == 0);
}

TEST_CASE("test selectionsort", "[selectionsort]"){
    std::vector<int> aVector = {1, 0, 2};
    selectionsort(aVector);
    REQUIRE(aVector[0] == 0 && aVector[1] == 1 && aVector[2] == 2)
    aVector.push_back(4);
    aVector.push_back(15);
    aVector.push_back(7);
    aVector.push_back(6);
    REQUIRE(aVector.size() == 7);
    selectionsort(aVector);
    REQUIRE(aVector[0] == 0 && aVector[1] == 1 && aVector[2] == 2 && 
            aVector[3] == 4 && aVector[4] == 6 && aVector[5] == 7 &&
            aVector[15])
}
