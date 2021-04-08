#ifndef EX_3_A_NUMBERWITHUNITS_HPP
#define EX_3_A_NUMBERWITHUNITS_HPP

#include <string>

namespace ariel {
    class NumberWithUnits {
    private:
        int num_;
        std::string str_;
    public:
        NumberWithUnits(int num, std::string str) {
        num_ = num;
        str_ = str;
        }
        static void read_units(ifstream& file);
    };

}

#endif
