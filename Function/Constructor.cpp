#include <iostream>
using namespace std;
class Point{
	int x, y;
	public:
		Point(int a){
		x=a;
		y=0;
		}
		Point(int a, int b){
			x=a;
			y=b;
		}
		Point(){
			x=0;
			y=0;
		}
		displaypoint(){
			cout<<"The point is ("<<x<<", "<<y<<")";
		}
};
int main(){
Point p(1,5);
	p.displaypoint();
Point q(2);
	q.displaypoint();
Point w;
  w.displaypoint();
return 0;
}

