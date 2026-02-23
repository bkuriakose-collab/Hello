#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/hello.hpp"

TEST_CASE( "it returns Hello World" ) {
    REQUIRE( hello() == "Hello World!" );
}
TEST_CASE("I wrote a another function that does cool stuff") {
    REQUIRE(hello() == "Hello World!");
}