#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Fraction.cpp"
#include "Fraction.hpp"

TEST_CASE( "Arguments initialized") {
    
    Fraction testing1;
    REQUIRE( toNumber("99") == 99);
    REQUIRE( toNumber("0.1") == 0.1);
}
