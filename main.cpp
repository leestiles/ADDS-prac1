#include <iostream>
#include "myclass.h"

using namespace std;

int main () {
    
    myclass p1;
    p1.setMyAge(3);

    cout << "Age is :" << p1.getMyAge << endl;

    return 0;
}