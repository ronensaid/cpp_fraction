#include "Fraction.hpp"

namespace ariel {

    // Member functions


    Fraction::Fraction() : numerator(0), denominator(1) {}

    Fraction::Fraction(int num, int den) : numerator(num), denominator(den) {}

    Fraction::Fraction(double number) : numerator(0), denominator(1) {}

    Fraction::Fraction(const Fraction& other) : numerator(other.numerator), denominator(other.denominator) {}
    
    Fraction::~Fraction() {

    }

    Fraction::Fraction(Fraction&& other) noexcept {

    }

    ariel::Fraction &Fraction::operator=(Fraction &&other) noexcept
    {
        return *this;
    }

    Fraction Fraction::operator+(const Fraction &other) const
    {

        return Fraction(0, 0);
    }
    
    Fraction Fraction::operator-(const Fraction& other) const {

        return Fraction(0, 0); 
    }

    Fraction Fraction::operator/(const Fraction& other) const {

        return Fraction(0, 0); 
    }

    Fraction Fraction::operator++(int) {

        return Fraction(0, 0); 
    }

    Fraction& Fraction::operator++() {

        return *this;
    }

    Fraction Fraction::operator--(int) {

        return Fraction(0, 0); 
    }

    Fraction& Fraction::operator--() {

        return *this;
    }

    bool Fraction::operator>(const Fraction& other) const {

        return false; 
    }

    bool Fraction::operator>=(const Fraction& other) const {

        return false; 
    }

    bool Fraction::operator<(const Fraction& other) const {

        return false; 
    }

    bool Fraction::operator<=(const Fraction& other) const {

        return false; 
    }

    bool Fraction::operator==(const Fraction& other) const {

        return false; 
    }

    bool Fraction::operator!=(const Fraction& other) const {

        return false; 
    }

    Fraction& Fraction::operator+=(const Fraction& other) {

        return *this;
    }

    Fraction& Fraction::operator-=(const Fraction& other) {

        return *this;
    }

    Fraction& Fraction::operator*=(const Fraction& other) {

        return *this;
    }

    Fraction& Fraction::operator/=(const Fraction& other) {

        return *this;
    }

    std::ostream& operator<<(std::ostream& os, const Fraction& f) {

        return os;
    }
    
    std::istream& operator>>(std::istream& iss, Fraction& fraction) {

        return iss;
    }


    Fraction operator+(double d, const Fraction& f) {

        return Fraction(0, 0); 
    }

    Fraction operator-(double d, const Fraction& f) {

        return Fraction(0, 0); 
    }

    Fraction operator*(double d, const Fraction& f) {

        return Fraction(0, 0); 
    }
    Fraction Fraction::operator*(const Fraction& other) const {
    return Fraction(0, 0);
    }
    
    void Fraction::reduce() {

    }

    int Fraction::getNumerator() const {

    return 0;
    }

    int Fraction::getDenominator() const {

        return 1;
    }   


}
