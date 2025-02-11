#ifndef SAFEINT_H
#define SAFEINT_H

typedef struct {
    int result;
    int errorflag; // 0 for no error, 1 for error
} SafeResult;

SafeResult safeadd(int a, int b);
SafeResult safesubtract(int a, int b);
SafeResult safemultiply(int a, int b);
SafeResult safedivide(int a, int b);

#endif // SAFEINT_H