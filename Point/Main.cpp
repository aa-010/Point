#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
    CPoint a(8, 2);
    CPoint b(10, 3);
    bool result = a == b;
    cout << result;
    a = b;
    cout << a;
    
    return 0;
}
    

