#ifndef _MYCOMPLEX_HPP_
#define _MYCOMPLEX_HPP_

#include <iostream>
#include <cmath>

/**
 * @brief Class that represent complex number
 * 
 */
class MyComplex {
    public:
        MyComplex(double = 0, double = 0);
        MyComplex(const MyComplex& rhs);
        ~MyComplex();
        MyComplex &operator=(const MyComplex& rhs);

        double getReal() const;
        double getImg() const;
        double abs() const;
    private:
        double real;
        double imaginary;
};

#endif // _MYCOMPLEX_HPP_