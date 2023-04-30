#pragma once

#include <iostream>

namespace ariel {
    class Fraction {
        private:
            int numerator;
            int denominator;
        public:
            Fraction();//constructor
            ~Fraction();//destructor
            Fraction(int num, int den);
            Fraction(double number);
            Fraction(const Fraction& other);
            Fraction& operator=(const Fraction& other);
            Fraction(Fraction&& other) noexcept; // move constructor
            ariel::Fraction& operator=(Fraction&& other) noexcept; // move assignment operator
            Fraction operator-() const;
            Fraction operator+(const Fraction& other) const;
            Fraction operator-(const Fraction& other) const;
            Fraction operator*(const Fraction& other) const;
            Fraction operator/(const Fraction& other) const;
            ariel::Fraction& operator+=(const Fraction& other);
            Fraction& operator-=(const Fraction& other);
            Fraction& operator*=(const Fraction& other);
            Fraction& operator/=(const Fraction& other);
            Fraction& operator++();
            Fraction operator++(int);
            Fraction& operator--();
            Fraction operator--(int);
            bool operator>(const Fraction& other) const;
            bool operator<(const Fraction& other) const;
            bool operator>=(const Fraction& other) const;
            bool operator<=(const Fraction& other) const;
            bool operator==(const Fraction& other) const;
            bool operator!=(const Fraction& other) const;
            friend std::ostream& operator<<(std::ostream& oss, const Fraction& fraction);
            friend std::istream& operator>>(std::istream& iss, Fraction& fraction);
            
            // Other member functions
            void reduce();//reduces the Fraction to its reduced form
            int getNumerator() const;
            int getDenominator() const;
    };
    
    // New operator overload for the * operation where as it is a double and a Fraction
    Fraction operator*(double den, const Fraction& fraction);

}
