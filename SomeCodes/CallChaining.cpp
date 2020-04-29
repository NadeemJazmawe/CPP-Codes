#include <iostream>

using namespace std;

class Point{

public:
int  x , y ;
Point(int a , int b){
this->x=a;
this->y=b;
}

Point& add ( const Point b){
this->x += b.x;
y += b.y ;
return *this;
}

int getX(){
return this->x;
}
};

int main(){
Point p1(2,3) , p2(4,5) , p3(1,1);
p1.add(p2).add(p3);
cout << p1.Point::add(p2).Point::getX() << "  heheh " <<endl;
return 0;
}
