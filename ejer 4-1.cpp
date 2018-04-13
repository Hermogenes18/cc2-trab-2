#include <iostream>

using namespace std;

int sum( const int x, const int y) {
return x + y;
}
double sum ( const double x, const double y) {
return x + y;
}

int main()
{
    int x=2,y=3;
    double a=3.3432,b=1.423;
    cout<<sum(a,b)<<endl;
    cout<<sum(x,y)<<endl;
}



