#include <iostream>

using namespace std;
int main()
{
    char oddOrEven[5]={'2','g','a','6','g'};
    char *nthCharPtr = &oddOrEven[5];
    nthCharPtr -= 2; //or nthCharPtr = oddOrEven + 3;
    cout << *nthCharPtr<<endl;
    char **pointerPtr = &nthCharPtr;
    cout << pointerPtr<<endl;
    cout << **pointerPtr<<endl;
    nthCharPtr++;
    cout << nthCharPtr - oddOrEven<<endl;
}
