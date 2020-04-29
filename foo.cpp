#include <iostream> 

void foo(){
std::cout << "foo()\n" ;
}

void foo(int n){
std::cout << " foo(" << n << ")\n" ;
}

int main(){
foo(12);
foo();
}
