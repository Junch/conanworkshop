#include <catch2/catch.hpp>
#include <fmt/ranges.h>

TEST_CASE("print a container", "[fmt]")
{
    std::vector<int> v = {1, 2, 3};
    fmt::print("{}\n", v);
}
