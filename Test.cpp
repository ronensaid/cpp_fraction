#include "sources/Fraction.hpp"
#include "doctest.h"

using namespace ariel;

TEST_CASE("Constructor")
{
    CHECK_THROWS_AS(Fraction(1,0), std::invalid_argument);
    CHECK_NOTHROW(Fraction(0,1));
    CHECK_NOTHROW(Fraction(-1,3));
}

TEST_CASE("Division by zero") {
    Fraction a(1, 2);
    Fraction b(0, 1);
    CHECK_THROWS_AS(a / b, std::invalid_argument);
    CHECK_NOTHROW(b/a);
}

TEST_CASE("Reduce function") {
    // Create a fraction with a very large numerator
    Fraction f1(3, 6);

    // Create a fraction with a very large denominator
    Fraction f2(2, 6);

    // Check that the fractions reduce to the reduced form
    f1.reduce();
    f2.reduce();
    CHECK(f1.getNumerator()==1);
    CHECK(f1.getDenominator()==2);
    CHECK(f2.getNumerator()==1);
    CHECK(f2.getDenominator()==3);

    // Check that the fractions can be added
    CHECK_NOTHROW(f1 + f2 );

    // Check that the fractions can be subtracted
    CHECK_NOTHROW(f1 - f2);

    // Check that the fractions can be multiplied
    CHECK_NOTHROW(f1 * f2);

    // Check that the fractions can be divided
    CHECK_NOTHROW(f1 / f2);
}

TEST_CASE("Test Fraction class") {
    // Test addition operator
    Fraction f1(1, 2);
    Fraction f2(3, 4);
    Fraction f3 = f1 + f2;
    CHECK(f3.getNumerator() == 5);
    CHECK(f3.getDenominator() == 4);

    // Test subtraction operator
    f3 = f2 - f1;
    CHECK(f3.getNumerator() == 1);
    CHECK(f3.getDenominator() == 4);

    // Test multiplication operator
    f3 = f1 * f2;
    CHECK(f3.getNumerator() == 3);
    CHECK(f3.getDenominator() == 8);

    // Test division operator
    f3 = f2 / f1;
    CHECK(f3.getNumerator() == 3);
    CHECK(f3.getDenominator() == 2);

    // Test equality operator
    Fraction f4(6, 8);
    Fraction f5(3, 4);
    f4.reduce();
    f5.reduce();
    CHECK(f5 == f4);
    
    // Test comparison operators
    CHECK(f1 < f2);
    CHECK(f1 <= f2);
    CHECK(f2 > f1);
    CHECK(f2 >= f1);

    // Test pre-increment operator
    ++f1;
    CHECK(f1.getNumerator() == 3);
    CHECK(f1.getDenominator() == 2);

    // Test post-increment operator
    f3 = f1++;
    CHECK(f3.getNumerator() == 3);
    CHECK(f3.getDenominator() == 2);
    CHECK(f1.getNumerator() == 5);
    CHECK(f1.getDenominator() == 2);

    // Test pre-decrement operator
    --f2;
    CHECK(f2.getNumerator() == -1);
    CHECK(f2.getDenominator() == 4);

    // Test post-decrement operator
    f3 = f2--;
    CHECK(f3.getNumerator() == -1);
    CHECK(f3.getDenominator
() == 4);
    CHECK(f2.getNumerator() == -5);
    CHECK(f2.getDenominator() == 4);


    // Test multiplication with double
    double d = 1.5;
    f3 = d * f1;
    CHECK(f3.getNumerator() == 15);
    CHECK(f3.getDenominator() == 4);
}

