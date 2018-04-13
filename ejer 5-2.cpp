#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    int dartsInCircle = 0;
    for(int i = 0; i < 2; ++i)
    {
        double x = rand ()/(double)RAND_MAX , y = rand ()/(double)RAND_MAX ;
        if( sqrt (x*x + y*y) < 1 )
        {
            ++ dartsInCircle ;
        }
    }

    cout<<dartsInCircle;

}
