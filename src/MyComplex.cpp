#include "ProjectTemplate/MyComplex.hpp"

struct MyComplex::Impl {
    Impl(double _real, double _imaginary)
        : real(_real), imaginary(_imaginary) { }
    double real;
    double imaginary;
};

MyComplex::MyComplex(double _real, double _imaginary)
        : pimpl(new Impl(_real, _imaginary)) { }

MyComplex::~MyComplex() = default;

MyComplex::MyComplex(const MyComplex& other) 
        : pimpl(new Impl(*other.pimpl)) { }


MyComplex& MyComplex::operator=(MyComplex rhs) {
    std::swap(pimpl, rhs.pimpl);
    return *this;
}

double MyComplex::getReal() const {
    return pimpl->real;
}

void MyComplex::setReal(double _real) {
    pimpl->real = _real;
}

double MyComplex::getImg() const {
    return pimpl->imaginary;
}

void MyComplex::setImg(double _imaginary) {
    pimpl->imaginary = _imaginary;
}

double MyComplex::abs() const {
    return sqrt(pimpl->real * pimpl->real + pimpl->imaginary * pimpl->imaginary);
}