#include <stdio.h>

int sum1(int max){
	int i, j, sum=0;
	for(i=1;i<=max;i++){
		for(j=i;j>0;j--){
			sum+=j;
		}
	}
	return sum;
}

int sum2(int max){
	int i, sum=0;
	for(i=1;i<=max;i+=2){
		if(!(i%3==0 || i%5==0)){sum+=i;}
	}
	return sum;
}

int sum3(int max){
	int i, count=0;
	for(i=1;i<=max;i++){
		if(i%7==0){count++;}
	}
	return count;
}
double sum4(int max){
	int i, j; 
	double sum=0, mul, div;
	for(i=1;i<=max;i++){
		div=(2*i-1);
		mul=1;
		for(j=div;j>0;j--){mul *= j;}
		if(i%2){sum+=(i/mul);}
		else{sum-=(i/mul);}
	}
	return sum;
}
int main(){
	int result1 = sum1(5);
	printf("#1 = %d\n", result1);
	int result2 = sum2(11);
	printf("#2 = %d\n", result2);
	int result3 = sum3(15);
	printf("#3 = %d\n", result3);
	double result4 = sum4(10);
	printf("#4 = %f\n", result4);
	return 0;
}
