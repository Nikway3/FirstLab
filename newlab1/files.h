#pragma once
#include <iostream>
#include <complex>
namespace funct {
    void point(int &x, int &y);
    void point(int *x, int *y);
    void point2 (double &b, double &a, double &c);
    void point3_1 (std::complex<double>*);
    void point3_2 (std::complex<double>&);
    class square {
    public:
        double xcord;
        double ycord;
        int size;
    };

}






