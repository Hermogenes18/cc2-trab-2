#include <iostream>

using namespace std;

int sum( const int a, const int b, const int c = 0, const int d = 0)
{
return a + b + c + d;
}

int main()
{
    int a=2,b=6,c=1,d=5;
    cout<<sum(a,b)<<endl;
    cout<<sum(a,b,c)<<endl;
    cout<<sum(a,b,c,d)<<endl;
}
