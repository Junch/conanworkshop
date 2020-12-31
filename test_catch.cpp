#include <catch2/catch.hpp>
#include <vector>

TEST_CASE("vectors can be sized and resized", "[vector]")
{
    std::vector<int> v(5);

    REQUIRE(v.size() == 5);
    REQUIRE(v.capacity() >= 5);
    printf("line: %d, %s\n", __LINE__, __FUNCTION__);

    SECTION("resizing bigger changes size and capacity")
    {
        v.resize(10);

        REQUIRE(v.size() == 10);
        REQUIRE(v.capacity() >= 10);

        printf("line: %d\n", __LINE__);
    }

    SECTION("reserving bigger changes capacity but not size")
    {
        v.reserve(10);

        REQUIRE(v.size() == 5);
        REQUIRE(v.capacity() >= 10);
        printf("line: %d\n", __LINE__);

        SECTION("reserving smaller again does not change capacity")
        {
            v.reserve(7);

            REQUIRE(v.capacity() >= 10);
            printf("line: %d\n", __LINE__);
        }

        SECTION("reserving smaller again does not change capacity")
        {
            v.reserve(20);

            REQUIRE(v.capacity() >= 0);
            printf("line: %d\n", __LINE__);
        }
    }
}
