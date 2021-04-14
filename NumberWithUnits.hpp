#ifndef EX_3_A_NUMBERWITHUNITS_HPP
#define EX_3_A_NUMBERWITHUNITS_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include <map>

namespace ariel {
    class NumberWithUnits {
    private:
        double num_;
        std::string str_;
    public:
        NumberWithUnits(double num, const std::string &str) {
            num_ = num;
            str_ = str;
        }

        static void read_units(std::ifstream &file);

        //<<<<<<<================== ostream start ==================>>>>>>>
        friend std::ostream &operator<<(std::ostream &os, const NumberWithUnits &unit);
        //<<<<<<<================== ostream end ==================>>>>>>>

        //<<<<<<<================== istream start ==================>>>>>>>
        friend std::istream &operator>>(std::istream &is, NumberWithUnits &unit);
        //<<<<<<<================== istream end ==================>>>>>>>

        //TODO: --/++/+=/-= -> check how to remove friend!!

        //<<<<<<<================== -/-- start ==================>>>>>>>
        friend NumberWithUnits operator-(const NumberWithUnits &unit1, const NumberWithUnits &unit2);

        friend NumberWithUnits operator-(const NumberWithUnits &unit);

        friend NumberWithUnits operator--(const NumberWithUnits &unit, int);

        NumberWithUnits operator--(const NumberWithUnits &unit);
        //<<<<<<<================== -/-- end ==================>>>>>>>

        //<<<<<<<================== +/++ start ==================>>>>>>>
        friend NumberWithUnits operator+(const NumberWithUnits &unit1, const NumberWithUnits &unit2);

        friend NumberWithUnits operator+(const NumberWithUnits &unit);

        friend NumberWithUnits operator++(const NumberWithUnits &unit);

        NumberWithUnits operator++(const NumberWithUnits &unit, int);
        //<<<<<<<================== +/++ end ==================>>>>>>>

        //<<<<<<<================== * start ==================>>>>>>>
        friend NumberWithUnits operator*(double val, const NumberWithUnits &unit);

        friend NumberWithUnits operator*(const NumberWithUnits &unit, double val);
        //<<<<<<<================== * end ==================>>>>>>>

        //<<<<<<<================== += start ==================>>>>>>>
        NumberWithUnits operator+=(const NumberWithUnits &unit1, const NumberWithUnits &unit2);
        //<<<<<<<================== += end ==================>>>>>>>

        //<<<<<<<================== -= start ==================>>>>>>>
        NumberWithUnits operator-=(const NumberWithUnits &unit1, const NumberWithUnits &unit2);
        //<<<<<<<================== -= end ==================>>>>>>>

        //<<<<<<<================== == start ==================>>>>>>>
        friend bool operator==(const NumberWithUnits &unit1, const NumberWithUnits &unit2);
        //<<<<<<<================== == end ==================>>>>>>>

        //<<<<<<<================== != start ==================>>>>>>>
        friend bool operator!=(const NumberWithUnits &unit1, const NumberWithUnits &unit2);
        //<<<<<<<================== != end ==================>>>>>>>

        //<<<<<<<================== < start ==================>>>>>>>
        friend bool operator<(const NumberWithUnits &unit1, const NumberWithUnits &unit2);
        //<<<<<<<================== < end ==================>>>>>>>

        //<<<<<<<================== > start ==================>>>>>>>
        friend bool operator>(const NumberWithUnits &unit1, const NumberWithUnits &unit2);
        //<<<<<<<================== > end ==================>>>>>>>

        //<<<<<<<================== <= start ==================>>>>>>>
        friend bool operator<=(const NumberWithUnits &unit1, const NumberWithUnits &unit2);
        //<<<<<<<================== <= end ==================>>>>>>>

        //<<<<<<<================== >= start ==================>>>>>>>
        friend bool operator>=(const NumberWithUnits &unit1, const NumberWithUnits &unit2);
        //<<<<<<<================== >= end ==================>>>>>>>
    };
}
#endif