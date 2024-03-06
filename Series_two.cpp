#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;
int main() {
    long double sum, part_sum, k, eps;
    eps = 1e-11;
    sum = 1;
    long long fac = 1;
    for (long long n = 3;; n=n+2){
        fac = fac * (n-1)*n;
        part_sum =  (long double) 1 / (double) fac;
        if (part_sum < eps){
            break;
        }
        sum = (long double) sum + part_sum;
    }
    cout << sum << endl;
}