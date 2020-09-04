#include <iostream>
#include "PhoneticFinder.hpp"

using namespace std;

int main(){
    string a = "abc";
    string b = "abc";
    cout << phonetic::find(a , b) << endl;
    return 0;
}