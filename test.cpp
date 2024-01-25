#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_NO_POSIX_SIGNALS // Included this directive due to whack error:
#include "catch.hpp"
#include "functions_to_implement.h"



//NOTE: 

/* #define CATCH_CONFIG_NO_POSIX_SIGNALS // Included this directive due to whack error: */

/*In file included from /usr/include/signal.h:328,
                 from catch.hpp:4716,
                 from test.cpp:3:
catch.hpp:7320:45: error: size of array ‘altStackMem’ is not an integral constant-expression
 7320 |     char FatalConditionHandler::altStackMem[SIGSTKSZ] = {};
      |                                             ^~~~~~~~
make: *** [makefile:27: test.o] Error 1*/

//REQUIRE - Mandatory Assertion
//CHECK   - Optional Test (will skip if failed and move to other assertions)
//If ever testing Pointers, make sure to delete, delete[] and clear the heap memory
//...to avoid memory leaks
TEST_CASE("int Sum Tests", "[Sum]") {

    SECTION("Test Case : Positive Integer Operations") {

        std::vector<int>v = {1,2,3};
        REQUIRE(Sum(v) == 6);
    }
    SECTION("Test Case : Negative Integer Operations") {

        std::vector<int>v = {-1,-2,-3};
        REQUIRE(Sum(v) == -6);
    }
    SECTION("Test Case : Positive/Negative Integer Operations") {

        std::vector<int>v = {-1,2,-3};
        REQUIRE(Sum(v) == -2);
    }
    //FAILURE TEST
    SECTION("Test Case : Failure Test") {

        std::vector<int>v = {1,2,3};
        REQUIRE(Sum(v) == 0);
    }
}

TEST_CASE("int Product Tests", "[Product]") {

    SECTION("Test Case 1") {
        std::vector<int>v = {2,3,4};
        REQUIRE(Product(v) == 24);
    }

}

TEST_CASE("int Sign Tests", "[Sign]") {

    SECTION("Test Case : Positive Integers") {
        REQUIRE(Sign(0) == 1);
        REQUIRE(Sign(24) == 1);
        
    }
    SECTION("Test Case : Negative Integers"){
        REQUIRE(Sign(-5) == -1);
    }

}