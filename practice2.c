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
int sum4(){
	return 0;
}
int main(){
	int result1 = sum1(5);
	printf("#1 = %d\n", result1);
	int result2 = sum2(11);
	printf("#2 = %d\n", result2);
	int result3 = sum3(15);
	printf("#3 = %d\n", result3);
	int result4 = sum4(15);
	printf("#4 = %d\n", result4);
	return 0;
}
