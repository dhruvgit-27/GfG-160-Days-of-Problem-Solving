﻿#solution
#include <bits/stdc++.h>
using namespace std;

double myPow(double x, int n) {
    if (n == 0) return 1;
    if (n < 0) return 1 / myPow(x, -n);
    double half = myPow(x, n/2);
    if (n % 2 == 0) return half * half;
    else return half * half * x;
}

int main() {
    cout << myPow(2, 10);
    return 0;
}
