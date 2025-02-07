#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2){
	double over,xs=0,ys=0;
	xs=max(0.0, min(R1.x + R1.w, R2.x + R2.w) - max(R1.x, R2.x));
	ys=max(0.0, min(R1.y, R2.y) - max(R1.y - R1.h, R2.y - R2.h));
	over = xs * ys;
	return over;
}

int main(){
	Rect R1={1,1,5,5};
	Rect R2={2,2,5,5};	
	cout << overlap(R1,R2);
}