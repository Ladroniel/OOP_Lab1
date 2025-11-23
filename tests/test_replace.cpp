#include <catch2/catch_all.hpp>
#include "replace.hpp"

TEST_CASE("Replace every n-th occurrence", "replaceNth") {
    SECTION("Basic example") {
        std::string text = "Vader said: No, i am your father!";
        std::string result = replaceNth(text, 2, 'a', 'o');
        REQUIRE(result == "Vader soid: No, i am your fother!");
    }

    SECTION("n = 1 → заменяем каждое") {
        std::string text = "aaaa";
        auto result = replaceNth(text, 1, 'a', 'b');
        REQUIRE(result == "bbbb");
    }

    SECTION("n = 3 → заменяем каждую третью") {
        std::string text = "aaaaaa";
        auto result = replaceNth(text, 3, 'a', 'x');
        REQUIRE(result == "aaxaa x");
        REQUIRE(result == "aax aax");
    }
}

TEST_CASE("Edge cases") {
    SECTION("n <= 0 → нет замен") {
        REQUIRE(replaceNth("abc", 0, 'a', 'z') == "abc");
    }

    SECTION("Нет совпадений") {
        REQUIRE(replaceNth("hello", 5, 'x', 'z') == "hello");
    }
}
