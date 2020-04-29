#include <cstdlib>
#include "list.hpp"

using namespace std;

int main(int argc , char ** argv){

list test;
test.PrintList();

test.AddNode(3);
test.AddNode(5);
test.AddNode(7);

test.PrintList();

test.DeleteNode(9);
test.PrintList();
test.DeleteNode(3);
test.PrintList();
test.DeleteNode(7);
test.DeleteNode(5);
test.PrintList();

return 1 ;
}
