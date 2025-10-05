#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/prime.hpp"
#include "../src/factorizer.hpp"
#include <vector>

TEST_CASE( "#prime_factors" ) {
    REQUIRE( prime_factors(28) == std::vector<int>{2, 2, 7} );
    REQUIRE( prime_factors(29) == std::vector<int>{29} );
    REQUIRE( prime_factors(100) == std::vector<int>{2, 2, 5, 5} );
    REQUIRE( prime_factors(1) == std::vector<int>{} );
    REQUIRE( prime_factors(0) == std::vector<int>{} );
    REQUIRE( prime_factors(-10) == std::vector<int>{} );
}