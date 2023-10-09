#include <iostream>
#include <limits.h>
#include <float.h>
using namespace std;

int main(){
    cout << "The range of char : (" << CHAR_MIN << " to " << CHAR_MAX<<")\n";
    cout << "The range of short int : (" << INT16_MIN << " to " << INT16_MAX<<")\n";
    cout << "The range of long int : (" << INT32_MIN << " to " << INT32_MAX<<")\n";
    cout << "The range of double : (" << DBL_MIN << " to " << DBL_MAX<<")\n";

    return 0;
}