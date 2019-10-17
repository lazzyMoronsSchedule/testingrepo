#include<stdio.h>
#include <math.h>
int main(){
	
	int arr[10];
	int chet[5];
	int nechet[5];
	int a,t;
	for(a = 0;a<10;a++){
		scanf("%d",&arr[a]);
	}
	for(a= 0;a<10;a++){
		if(arr[a]%2==0){
			chet[a]=arr[a];
		}
		else{
			nechet[a]=arr[a];
		}
	}
	
	for (a=0;a<5;a++){
		t+=chet[a];
	}
	printf("%d\n",t);
	t=0;
	for (a=0;a<5;a++){
		t+=nechet[a];
	}
	printf("%d",t);
return 0 ;
}

