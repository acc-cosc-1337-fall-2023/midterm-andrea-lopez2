#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify sales commission based on the bonus pay ") 
{
	REQUIRE(get_sales_commission(100) == 5);
	REQUIRE(get_sales_commission(750) == 45);
	REQUIRE(get_sales_commission(1750) == 140);
	REQUIRE(get_sales_commission(1100) == 77);  //I honestly dont know why thos one is failing if 77.0 = 77 
	                                            //but at works with all other numbers 

}