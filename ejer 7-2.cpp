#include <iostream>

using namespace std;

void swap1 (int &x, int &y) {
    int tmp = x;
    x = y;
    y = tmp;
}

int main()
{
    int x=4,y=6;
    cout<<x<<" "<<y<<endl;
    swap1(x,y);
    cout<<x<<" "<<y;
}
