#include "doctest.h"
#include "NumberWithUnits.hpp"
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <iostream>

using namespace std;
using namespace ariel;

TEST_CASE("Testing distance (km and meter)") {

    ifstream units_file{"units.txt"};
    NumberWithUnits::read_units(units_file);

    NumberWithUnits a{2, "km"};   // 2 kilometers
    cout << a << endl;           // Prints "2[km]".
    cout << (-a) << endl;    // Prints "-2[km]"
    cout << (3*a) << endl;    // Prints "6[km]"
}