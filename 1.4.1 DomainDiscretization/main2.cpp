//
// Created by ayumu on 2021/10/16.
// vectorを用いてもっと簡潔に書く

#include <vector>
namespace  Const {
    const double  QE = 1.60e-19;
}
using  namespace  std;

int main() {
   const int ni = 21;
   vector<double> phi(ni);
   vector<double> rho(ni, Const::QE*1e12);
   vector<double> ef(ni);
    return  0;
//    vectorを用いれば
//    1.ゼロに初期化必要なし
//　　2.blockを出ると自動でメモリ解放

}

