#include <iostream>

using namespace std;

int stringLength ( const char *str)
{
    int length = 0;
    while (*( str + length ) != '\0')
    {
        ++ length ;
    }
    return length ;
}

int main()
{
    char str[]="hola";
    cout<<stringLength(str);
}
