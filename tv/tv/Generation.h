//Copyrigt  Anastasia Senina
#pragma once
#include <vector>
#include <iostream>  
#include <random> 
#include <ctime>
using std :: vector;

class Generation {
  protected:
   int count;
   vector<double>  result;
   vector<int> a;
   vector<double> Pj;
   vector<double> delta;
   vector<int> nj;
   int R;
   double Xsr = 0;
   double S2;
   int Median;
   double R0;

   ////// for 3 part

   double* z;
   double* qi;
  public:
   int K; //count of part
   int* q = nullptr;
   void Method();
   int GetR() { return R; }
   double GetXsr() { return Xsr; }
   double GetS2() { return S2; }
   int GetMe() { return Median; }
   Generation(int _count) {
/*   qi[0] = 12.0 / 36.0;
     qi[1] = 16.0 / 36.0;
     qi[2] = 7.0 / 36.0;
     qi[3] = 1;*/
     //K = _part - 1;
    nj.resize(4);
    for (int i = 0; i < 4; ++i)
     nj[i] = 0;
    count = _count;
    for(auto i = 0; i< 4; ++i)
    a.push_back(i);
    Pj.push_back(0);
    Pj.push_back((double)12/36);
    Pj.push_back((double)16 / 36);
    Pj.push_back((double)7 / 36);
    Pj.push_back((double)1 / 36); 

   // Pj.push_back(1);
    double s = 0;
   // delta.push_back()
    for (int i = -1; i < 4; ++i) {
     s += Pj[i + 1];
     delta.push_back(s);
    }

   }
   int Getnj(int i) {
    return nj[i];
   }
   /// for 3 part
   double Calc_F(double R0);
   double Calc_f_hi(double x);




};
