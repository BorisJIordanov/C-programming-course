#include "safeint.h"
#include <limits.h>

SafeResult safeadd(int a, int b) {
    SafeResult res;
    long long temp = (long long)a + (long long)b;
    if (temp > INT_MAX || temp < INT_MIN) {
        res.result = 0;
        res.errorflag = 1;
    } else {
        res.result = (int)temp;
        res.errorflag = 0;
    }
    return res;
}

SafeResult safesubtract(int a, int b) {
    SafeResult res;
    long long temp = (long long)a - (long long)b;
    if (temp > INT_MAX || temp < INT_MIN) {
        res.result = 0;
        res.errorflag = 1;
    } else {
        res.result = (int)temp;
        res.errorflag = 0;
    }
    return res;
}

SafeResult safemultiply(int a, int b) {
    SafeResult res;
    long long temp = (long long)a * (long long)b;
    if (temp > INT_MAX || temp < INT_MIN) {
        res.result = 0;
        res.errorflag = 1;
    } else {
        res.result = (int)temp;
        res.errorflag = 0;
    }
    return res;
}

SafeResult safedivide(int a, int b) {
    SafeResult res;
    if (b == 0) {
        res.result = 0;
        res.errorflag = 1;
    } else {
        res.result = a / b;
        res.errorflag = 0;
    }
    return res;
}