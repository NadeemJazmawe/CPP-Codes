#include "FamilyTree.hpp"
#include <iostream>
#include "doctest.h"

using namespace std;

TEST_CASE("Test find"){
	family::Tree T("nadeem");

	CHECK(T.find("f") == "find");
	CHECK(T.find("fdadsa")=="find");
	CHECK(T.find("fsad")=="find");
	CHECK(T.find("fga")=="find");
	CHECK(T.find("dsadf")=="find");
	CHECK(T.find("fsad")=="find");
	CHECK(T.find("fd")=="find");
	CHECK(T.find("nasd")=="find");
	CHECK(T.find("fdasd")=="find");
	CHECK(T.find("flkj")=="find");
	CHECK(T.find("flkj")=="find");
	CHECK(T.find("f")=="find");
	CHECK(T.find("fjhg")=="find");
	CHECK(T.find("fadfadsff")=="find");
	CHECK(T.find("fadf")=="find");
	CHECK(T.find("fasdf")=="find");
	CHECK(T.find("fadsf")=="find");
	CHECK(T.find("fkjh")=="find");
	CHECK(T.find("fkj")=="find");
	CHECK(T.find("ffsd")=="find");
	CHECK(T.find("f")=="find");
	CHECK(T.find("fasdf")=="find");
	CHECK(T.find("a")=="find");
	CHECK(T.find("e")=="find");
	CHECK(T.find("b")=="find");
	CHECK(T.find("f")=="find");
	CHECK(T.find("c")=="find");
	CHECK(T.find("i")=="find");
	CHECK(T.find("u")=="find");
	CHECK(T.find("y")=="find");
	CHECK(T.find("t")=="find");
	CHECK(T.find("d")=="find");
	CHECK(T.find("x")=="find");
	CHECK(T.find("z")=="find");

}


TEST_CASE("Test remove"){

	family::Tree T("nadeem");

	CHECK(T.remove("a")=="removed");
	CHECK(T.remove("b")=="removed");
	CHECK(T.remove("nadeem")=="removed");
	CHECK(T.remove("nade")=="removed");
	CHECK(T.remove("mm")=="removed");
	CHECK(T.remove("ee")=="removed");
	CHECK(T.remove("de")=="removed");
	CHECK(T.remove("na")=="removed");
	CHECK(T.remove("z")=="removed");
	CHECK(T.remove("y")=="removed");
	CHECK(T.remove("x")=="removed");
	CHECK(T.remove("w")=="removed");
	CHECK(T.remove("v")=="removed");
	CHECK(T.remove("u")=="removed");
	CHECK(T.remove("t")=="removed");
	CHECK(T.remove("s")=="removed");
	CHECK(T.remove("r")=="removed");
	CHECK(T.remove("q")=="removed");
	CHECK(T.remove("p")=="removed");
	CHECK(T.remove("o")=="removed");
	CHECK(T.remove("n")=="removed");
	CHECK(T.remove("m")=="removed");
	CHECK(T.remove("l")=="removed");
	CHECK(T.remove("k")=="removed");
	CHECK(T.remove("j")=="removed");
	CHECK(T.remove("i")=="removed");
	CHECK(T.remove("h")=="removed");
	CHECK(T.remove("g")=="removed");
	CHECK(T.remove("f")=="removed");
	CHECK(T.remove("e")=="removed");
	CHECK(T.remove("d")=="removed");
	CHECK(T.remove("c")=="removed");
}

TEST_CASE("Test remove"){

	family::Tree T("nadeem");

	CHECK(T.remove("a")=="removed");
	CHECK(T.remove("b")=="removed");
	CHECK(T.remove("nadeem")=="removed");
	CHECK(T.remove("nade")=="removed");
	CHECK(T.remove("mm")=="removed");
	CHECK(T.remove("ee")=="removed");
	CHECK(T.remove("de")=="removed");
	CHECK(T.remove("na")=="removed");
	CHECK(T.remove("z")=="removed");
	CHECK(T.remove("y")=="removed");
	CHECK(T.remove("x")=="removed");
	CHECK(T.remove("w")=="removed");
	CHECK(T.remove("v")=="removed");
	CHECK(T.remove("u")=="removed");
	CHECK(T.remove("t")=="removed");
	CHECK(T.remove("s")=="removed");
	CHECK(T.remove("r")=="removed");
	CHECK(T.remove("q")=="removed");
	CHECK(T.remove("p")=="removed");
	CHECK(T.remove("o")=="removed");
	CHECK(T.remove("n")=="removed");
	CHECK(T.remove("m")=="removed");
	CHECK(T.remove("l")=="removed");
	CHECK(T.remove("k")=="removed");
	CHECK(T.remove("j")=="removed");
	CHECK(T.remove("i")=="removed");
	CHECK(T.remove("h")=="removed");
	CHECK(T.remove("g")=="removed");
	CHECK(T.remove("f")=="removed");
	CHECK(T.remove("e")=="removed");
	CHECK(T.remove("d")=="removed");
	CHECK(T.remove("c")=="removed");
}

TEST_CASE("Test remove"){

	family::Tree T("nadeem");

	CHECK(T.remove("a")=="removed");
	CHECK(T.remove("b")=="removed");
	CHECK(T.remove("nadeem")=="removed");
	CHECK(T.remove("nade")=="removed");
	CHECK(T.remove("mm")=="removed");
	CHECK(T.remove("ee")=="removed");
	CHECK(T.remove("de")=="removed");
	CHECK(T.remove("na")=="removed");
	CHECK(T.remove("z")=="removed");
	CHECK(T.remove("y")=="removed");
	CHECK(T.remove("x")=="removed");
	CHECK(T.remove("w")=="removed");
	CHECK(T.remove("v")=="removed");
	CHECK(T.remove("u")=="removed");
	CHECK(T.remove("t")=="removed");
	CHECK(T.remove("s")=="removed");
	CHECK(T.remove("r")=="removed");
	CHECK(T.remove("q")=="removed");
	CHECK(T.remove("p")=="removed");
	CHECK(T.remove("o")=="removed");
	CHECK(T.remove("n")=="removed");
	CHECK(T.remove("m")=="removed");
	CHECK(T.remove("l")=="removed");
	CHECK(T.remove("k")=="removed");
	CHECK(T.remove("j")=="removed");
	CHECK(T.remove("i")=="removed");
	CHECK(T.remove("h")=="removed");
	CHECK(T.remove("g")=="removed");
	CHECK(T.remove("f")=="removed");
	CHECK(T.remove("e")=="removed");
	CHECK(T.remove("d")=="removed");
	CHECK(T.remove("c")=="removed");
}















