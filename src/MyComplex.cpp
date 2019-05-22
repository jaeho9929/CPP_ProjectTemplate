#include "ProjectTemplate/MyComplex.hpp"

MyComplex::MyComplex(double _real, double _imaginary) {
    this->real = _real;
    this->imaginary = _imaginary;
}

MyComplex::MyComplex(const MyComplex& rhs) {
    this->real = rhs.real;
    this->imaginary = rhs.imaginary;
}

MyComplex::~MyComplex() {
    /* Do something */
}

MyComplex& MyComplex::operator=(const MyComplex& rhs) {
    this->real = rhs.real;
    this->imaginary = rhs.imaginary;

    return *this;
}

double MyComplex::getReal() const {
    return this->real;
}

double MyComplex::getImg() const {
    return this->imaginary;
}

double MyComplex::abs() const {
    return sqrt(this->real * this->real + this->imaginary * this->imaginary);
}