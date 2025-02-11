#ifndef SAFEINT_H
#define SAFEINT_H

typedef struct {
    int value;
    int errorflag; // 0 = No error, 1 = Error occurred
} SafeResult;

SafeResult safeadd(int a, int b);
SafeResult safesubtract(int a, int b);
SafeResult safemultiply(int a, int b);
SafeResult safedivide(int a, int b);
SafeResult safestrtoint(const char* str);

#endif // SAFEINT_H
