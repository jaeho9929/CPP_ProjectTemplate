#include <iostream>
#include "ProjectTemplate/MyComplex.hpp"

int main(int argc, char const *argv[])
{
    std::cout << "My Main Program" << std::endl;
    MyComplex myComplex(3.0, 4.0);

    std::cout << "Complex Real : " << myComplex.getReal() << std::endl;
    std::cout << "Complex Img : " << myComplex.getImg() << std::endl;
    std::cout << "Complex Abs : "<< myComplex.abs() << std::endl;

    return 0;
}