#include "range.hpp"
#include "accumulate.hpp"
#include "filterfalse.hpp"
#include "compress.hpp"
#include<algorithm>
#include<string>
#include <iostream>
#include<vector>
using namespace iterable;
using namespace std;

struct lessThan3 {
    bool operator()(int i) const { return i < 3; }
};

int main(){
//     std::vector<int> v1;
//     for (int i = 1; i <= 5; i++) 
//         v1.push_back(i); 
//     std::vector<int> v2 = {true , false ,true , true ,false};
//     std::vector<std::string> v3 = {"I", "Love", "c++"};
//    for (auto i: accumulate( range(3, 9))){
//      std::cout<< i << std::endl;
// }
      cout << "####  range:  ####";
	for (int i: range(5,9))
		cout << i << " ";      // 5 6 7 8


    vector<int> vecInt = {1,2,3,4};
    vector<int> vec2 = {-1,5,4,-4,1,2,3,4};

    cout << "length=" <<vec2.end() - vec2.begin() << endl;;

    vector<string> vecString = {"Hello", "Bye", "Adam"};
    vector<float> vecFloat = {-1, 0.3, 5.2, -8.3};

    cout << "####  accumulate:  ####";
    cout << endl << "accumulate of range: " << endl;
	for (int i: accumulate(range(5,9)))
		cout << i << " ";      // 5 11 18 26

    cout << endl << "accumulate of vector<string>: " << endl;
    for (auto i: accumulate(vecString) )
        cout << i << " ";  // Hello HelloBye HelloByeAdam
    cout << endl << endl;

    cout << endl << "accumulate of range with binary operator: " << endl;
	for (int i: accumulate(range(5,9), [](int x, int y){return x*y;}))
		cout << i << " ";      // 5 30 210 1680

    cout << "####  Filter False:  ####";
    cout << endl << "Filter out all numbers less than 3 in vector{1,2,3,4}: " << endl;
    for (auto i: filterfalse(lessThan3{}, vec2) )
        cout << i << " ";   // 3 4
    cout << endl << "Filter out all even numbers in range(5,9): " << endl;
    for (auto i: filterfalse([](int i){return i%2==0;}, range(5,9)) )
        cout << i << " ";   // 5 7
    cout << endl << endl;

    cout << "####  compress:  ####";
    vector<bool> ttft {true,true,false,true};

    cout << endl << "compress a string" << endl;
    for (auto i: compress(string("abcd"), ttft))
        cout << i << " ";  // a b d

    cout << endl << "compress a range" << endl;
    for (auto i: compress(range(5,9), ttft))
        cout << i << " ";  // 5 6 8
    cout << endl << endl;


    cout << endl;
    return 0;
}