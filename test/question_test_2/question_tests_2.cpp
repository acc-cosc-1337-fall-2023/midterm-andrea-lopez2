#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"
#include<vector>

using namespace std;

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}


TEST_CASE("Verify get primes of given numbers ") 
{
	RREQUIRE(get_primes(10) == vector<int>{2 3 5 7});
	REQUIRE(get_primes(15) == vector<int>{2 3 5 7 11 13});
	REQUIRE(get_primes(30) == vector<int>{2 3 5 7 11 13 17 19 23 29});
	REQUIRE(get_primes(50) == vector<int>{2 3 5 7 11 13 17 19 23 29 31 37 41 43 47});

}





