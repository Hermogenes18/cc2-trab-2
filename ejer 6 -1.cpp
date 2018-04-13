#include <iostream>

using namespace std;

void printArray ( const int arr [], const int len ) {
    for(int i = 0; i < len; ++i)
        {
            cout << arr [i];
            if(i < len -1)
             {
                cout << ", ";
            }
        }
}

int main()
{
    int arr[]={5,2,6,2,4,3};
    int len=6;
    printArray(arr,len);
}
