//https://projecteuler.net/problem=3
//3. What is the largest prime factor of the number 600851475143? 

#include <stdio.h>

unsigned long findLargestPrimeFactor(unsigned long num){
	int i, j, count = 0;
	unsigned long largest, x;
	for(i = 1; i <= num; i++){ 
		x = (unsigned long)i;//TYPE SUCKS.....wasted too much time in type...
		if(num % x==0){
			for(j = 1; j <= i; j++){
				if(i%j==0) {count++;}	
			}
			if (count==2){ 
				largest = i;
			}
			count = 0;
		}
	}
	return largest;
}

int main(){
	unsigned long num = 600851475143;
	unsigned long result = findLargestPrimeFactor(num);
	
	printf("%lu\n", result);//%lu for unsigned long(int)...who cares...
	return 0;
}
//it says "Congratulations!"
//"you are the 324200th person to solve this problem"...
//got it right in 1st try!!!yeeeaaaaahhhhh..!!!though it took more than an hour...
