#include <iostream>

using namespace std;

typedef struct rec{
	int i ;
	int a[3];
	int *p;
}Rec;

int main(){
	Rec r;
	r.i = 3;
	r.a[1] = 5;
	r.p = &r.i ;
	cout << r.i << endl;
	cout << r.a[1] << endl;
	cout << *(r.p) << endl;
	return 0 ;
}

