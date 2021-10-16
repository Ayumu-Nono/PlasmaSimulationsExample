//
// Created by ayumu on 2021/10/16.
//
namespace Const {
    const double QE = 1.60e-19;
};

int main() {
    const int ni = 21;
    double *phi = new double[ni];
    double *rho = new double[ni];
    double *ef = new double[ni];  // electric field

//    initialize data
    for (int i=0; i < ni; i++) {
        phi[i] = 0;
        rho[i] = Const::QE * 1e12;  // charge density
        ef[i] = 0;
    }

    delete [] phi;
    delete [] rho;
    delete [] ef;
    return  0;
}