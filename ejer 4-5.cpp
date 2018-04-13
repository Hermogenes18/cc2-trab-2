#include <iostream>

using namespace std;

int sum( const int numbers [], const int numbersLen ) {
    int sum = 0;
    for(int i = 0; i < numbersLen ; ++i)
    {
        sum += numbers [i];
    }
    return sum;
}
int main()
{
    int L[]={2,6,2,7,3,4,1};
    int len=7;
    cout<<sum(L,len);

}
