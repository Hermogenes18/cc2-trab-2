#include <iostream>

using namespace std;

void printArray ( const int arr [], const int len )
{
    for(int i = 0; i < len; ++i)
        {
            cout << arr [i];
            if(i < len -1)
             {
                cout << ", ";
            }
        }
    cout<<endl;
}
void reverse1 (int numbers [], const int numbersLen )
{
    for(int i = 0; i < numbersLen / 2; ++i)
        {
            int tmp = *( numbers + i);
            int indexFromEnd = numbersLen - i - 1;
            *( numbers + i) = *( numbers + indexFromEnd );
            *( numbers + indexFromEnd ) = tmp ;
    }
}
int main()
{
    int arr[]={5,2,6,2,4,3};
    int len=6;
    printArray(arr,len);
    reverse1(arr,len);
    printArray(arr,len);
}
