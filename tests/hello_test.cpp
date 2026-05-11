#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>


#include "../src/hello.hpp"


TEST_CASE("object addition works in squirrel") {
    Squirrel sq1("Squeaks");
    NodeClass nodevar(&sq1);
    REQUIRE(nodevar.get_squirrel()->get_name() == "Squeaks");
};













TEST_CASE("inserting a new node works without having to see if its left or right sided first") {


    // right sided
Squirrel sq1("Squeaks");
    NodeClass nodevar(&sq1);
    REQUIRE(nodevar.rightobject() == nullptr);


    //left sided
Squirrel sq2("Squeaks");
    NodeClass nodevar2(&sq2);
    REQUIRE(nodevar2.leftobject() == nullptr);


};











TEST_CASE( "treeclass class functions" ) {
Squirrel var1("Item 1");
    NodeClass var2(&var1);



    TreeClass var3(&var2);


    REQUIRE(var3.getrootclass()->get_squirrel()->get_name() == "Item 1");

};



