//https://projecteuler.net/problem=1
//1. Find the sum of all the multiples of 3 or 5 "BELOW" "1000"
#include <stdio.h>

int sum(int max){
	int i, result=0;
	for(i=1;i<max;i++){ //below <
		if( (i%3==0)||(i%5==0)){
			result+=i;
		}
	}
	return result;
}

int main(){
	int result = sum(1000); //1000
	printf("%d\n", result);
	return 0;
}
//it says "Congratulations!"
//"you are the 549077th person to solve this problem"...
