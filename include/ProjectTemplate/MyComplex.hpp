#ifndef _MYCOMPLEX_HPP_
#define _MYCOMPLEX_HPP_

#include <iostream>
#include <memory>
#include <cmath>

/**
 * @brief Public Class that represent complex number
 * 
 */

class MyComplex {
    public:
        MyComplex(double real = 0, double imaginary = 0);
        ~MyComplex();
        // copy constructor
        MyComplex(const MyComplex& other);
        // assignment operator
        MyComplex &operator=(MyComplex rhs);

        double getReal() const;
        void setReal(double real);
        double getImg() const;
        void setImg(double imaginary);
        double abs() const;
    private:
        struct Impl;
        std::unique_ptr<Impl> pimpl;
};

#endif // _MYCOMPLEX_HPP_