//Copyrigt  Anastasia Senina
#include "Generation.h"
//#include <complex>
#include <cmath>
#define M_PI 3,14159265
#define M_EXP 2.71828183
void Generation::Method() {
 std::mt19937 gen(time(0));
 std::uniform_real_distribution<> urd(0, 1);
 ///std::cout << urd(gen) << std::endl;
 double U;
 int max=0;
 int min=3;
 for(int j = 0; j < count; ++j) {
  U = urd(gen); // генерация очередного значения u
  for (int i = 0; i < 4; ++i) { // определение интервала, которому принадлежит сгененрированное значение u
   if (U >= delta[i] && U < delta[i + 1]) {
    result.push_back(a[i]); // пушим выбранное значение сл вел
    Xsr += a[i];
    if (a[i] > max) max = a[i];
    if (a[i] < min) min = a[i];
    break;
   }
  }

 }
 R = max - min;  // подсчет разброса
 Xsr /= count;
 for (int i = 0; i < count; ++i) {
  S2 += (result[i] - Xsr)*(result[i] - Xsr);
 }
 S2 /= count;  // подсчет статистического мат ожмдания
 std::sort(result.begin(), result.end()); // сортировка выборки 
 if (count % 2 == 0) Median = (result[count / 2] + result[count / 2 + 1]) / 2; // нахождение значения медианы
 else Median = result[(count - 1) / 2];


 for (auto i = 0; i < result.size(); ++i) { // подсчет кол - ва  значений u попавших в опр интервал 
  if (result[i] == a[0]) { 
   nj[0] += 1;  
  } 
  if (result[i] == a[1]) {
   nj[1] += 1;   
  }
  if (result[i] == a[2]) {
   nj[2] += 1;   
  }
  if (result[i] == a[3]) {
   nj[3] += 1;  
  }

 }
}

double Generation::Calc_f_hi(double x) {// вычисление одного слагаемого в сумме 
  double res;
  double Gamma = 1;
  int r = K - 1;
  if (x > 0) {
    if (r % 2 == 0) {
      for (int i = 1; i < r / 2; i++)
        Gamma *= (r / 2 - i);
    }
    else {
      for (int i = 1; i < r / 2; i++)
        Gamma *= ((r - 1) / 2 + 0.5 - i);
      Gamma *= sqrt(3.14159265);
    }
    res = pow(2, -r / 2.0 ) * pow(Gamma, -1) * pow(x, r / 2.0 - 1)* pow(M_EXP, -x / 2);
} else { res = 0; }
    
    return res;
}

double Generation::Calc_F(double R0) { // вычисление  интеграла от плотности
    double res;
    double I = 0;
    double n = 1000;
    for (int k = 1; k < n; ++k)
        I += (Calc_f_hi(R0*(k - 1) / n) + Calc_f_hi(R0*k / n)) * R0 / (2 * n);
    res = 1 - I;
    return res;
}

