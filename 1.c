#include <stdio.h>
#include <math.h>
double foo(double x){
	int i ;
	double a;
	for (i=0;i<x;i++){
	if(i%2!=0){
	a+=(1/i)*pow(((x-1)/(x+1)),i);	
	}
				
	}
return a*2 ;	
}

int main(){
	double step,kol=80,a, b=2;
	for(a=0.5;a<b;a+=0.1){
		
		printf("%f\n",foo(a));
	}
	printf("-----------------------\n");	
	for(a=0.5;a<b;a+=0.1){
		printf("%f\n",log(a));
	}
	
	
	return 0;
}
