// wap to program implementing  a custom template meta program
#include <iostream>
using namespace std;

template <int N>
struct Factorial
{
    static const int value = N * Factorial<N - 1>::value;
};


template <>
struct Factorial<0>
{
    static const int value = 1;
};

int main()
{
    cout << "Factorial of 5 (computed at compile-time) = " 
         << Factorial<5>::value << endl;

    cout << "Factorial of 7 (computed at compile-time) = " 
         << Factorial<7>::value << endl;

    return 0;
}