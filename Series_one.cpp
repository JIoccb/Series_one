#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;
const double eps = 1e-9;
long long int factorial(int n){
    long long int res = 1;
    if (n==0){
        return 1;
    }
    for (int i = 1; i <= n; i++){
        res *= i;
    }
    return res;
}
long long int bellNumber(int natural){
    long long int values [10000];
    values[0], values[1] = 1;
    for (int n = 1; n < natural; n++){
        long long int summa = 1;
        for (int k = 0; k <= n ; k++){
            summa += factorial(n)/(factorial(k) * factorial(n - k)) * values[k];
        }
        values[n+1] = summa;
    }
    return values[natural];
}
int main() {
    long double sum, part_sum, k;
    part_sum, sum = 0;
    for (int n = 1; ;n++){
        part_sum = pow(n, k) / factorial(n);
        if (abs(part_sum) < eps){
            break;
        }
        sum += part_sum;
    }
    cout << sum << endl;
    cout << bellNumber(k) * M_E << endl;
    system("pause");
}
