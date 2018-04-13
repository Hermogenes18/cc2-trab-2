#include <iostream>

using namespace std;

int sum( const int numbers [], const int numbersLen )
{
    return numbersLen == 0 ? 0 : numbers [0] + sum ( numbers + 1,numbersLen - 1);
}
int main()
{
    int L[]={2,6,2,7,3,4,1};
    int len=7;
    cout<<sum(L,len);

}
