//https://projecteuler.net/problem=2
//2. 	By considering the terms in the Fibbonacci seq (do not exceed 4 million), 
//	find the sum of the even-valued terms. 
#include <stdio.h>

int even_fib_sum(int max){
	int i, next_fib, result = 2, fib1 = 1, fib2 = 2;
	for(i = 1; fib2 < max; i++){ 
		next_fib = fib1 + fib2;
		fib1 = fib2;
		fib2 = next_fib;
		if(fib2 % 2 == 0){
			result += fib2;
		}
	}
	return result;
}

int main(){
	int result = even_fib_sum(4000000); //4 million
	printf("%d\n", result);
	return 0;
}
//it says "Congratulations!"
//"you are the 447865th person to solve this problem"...
//never got it right in 1st try...today...3rd try..
