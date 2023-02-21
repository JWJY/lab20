#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1, Rect *R2){
    double a1 ,a2 ,b;
    a1 = min((*R1).x+(*R1).w,(*R2).x+(*R2).w)-max((*R1).x,(*R2).x);
	a2 = min((*R1).y,(*R2).y)-max((*R1).y-(*R1).h,(*R2).y-(*R2).h);
	b = a1*a2;
	if(b < 0) b = 0;
	return b;
}
