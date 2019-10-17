#include<stdio.h>
#include <math.h>
int main(){
	const double pi = 3.14;
	double a=3, b=16;
	double fooOne(double x){
		return pow(2,x)*atan(x);
	}
	double fooTwo(double x,int a){
		return pow(exp(x),a*x*x);
	}
	
	for(;a<b;a++){
		printf("|-------------------|\n");
		printf("|fooOne             |\n");
		printf("|%.6lf|",a);
		printf("|%.6f |\n ",fooOne(a));
	}
	printf("|-------------------|\n");
	printf("|-------------------|\n");
	printf("|-------------------|\n");
	double v;
	for(v=3;v<b;v++){
		printf("|-------------------|\n");
		printf("|fooOne             |\n");
		printf("|%.6lf|",a);
		printf("|%.6f |\n ",fooTwo(v,a));
	}

return 0 ;
}

