#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;
int main() {
    long double sum, part_sum, k;
    cin >> k;
    sum = 0;
    long long fac = 1;
    for (long long n = 1; n < 50; n++) {
        fac = fac * n;
        part_sum = pow(n, k) / fac;
        sum += part_sum;
    }
    cout << sum << endl;
}