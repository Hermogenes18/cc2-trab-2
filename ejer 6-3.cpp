#include <iostream>

using namespace std;

void printArray ( const int arr [][2], const int len )
{
    for(int i = 0; i < len; ++i)
    {
        for(int j = 0; j < len; ++j)
        {
            cout << arr [i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void transpose ( const int input [][2], int output [][2])
{
    for(int i = 0; i < 2 ; ++i)
    {
        for (int j = 0; j < 2 ; ++j)
        {
            output [j][i] = input [i][j];
        }
    }
}
int main()
{
    int arr[2][2]={{2,4},{6,3}};
    int arr2[2][2];
    int len=2;
    printArray(arr,len);
    transpose(arr,arr2);
    printArray(arr2,len);
}
