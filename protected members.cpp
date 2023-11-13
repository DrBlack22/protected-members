#include <iostream>
#include "Mother.h"
#include "Daughter.h"
#include "Daughter.cpp"
using namespace std;
int main(){
    Daughter maxy;
    maxy.doSomething();
}



// Public: anything inside and outside the class has access to it
// Private: Only things inside the class has access to it
// Protected: Anything inside base and derived classes has access to it
