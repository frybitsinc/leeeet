//https://projecteuler.net/problem=4
//4. Find the largest palindrome made from the product of two 3-digit numbers 

#include <stdio.h>

int FindLargestPallindrome(int ndigit){
	int largest=0, multiple, i=0, j=0, k=0, count=0;
	int max = 10^ndigit;
	int min = 10^(ndigit-1);	
	int temp1, temp2;//sorry for naming...

	for(i=min; i<max; i++){
		for(j=min; j<max; j++){
			multiple = i*j;
			for(k=0; k<ndigit; k++){
				temp1 = multiple/(10^(k+1)) - multiple/10^(k);
				temp2 = multiple/(10^(  2*ndigit-k )) - multiple/(10^(2*ndigit-k-1));
				if(temp1 == temp2) {
					count++;
				}
			}
			if(count==ndigit){
				if(multiple > largest){
					largest = multiple;
				}
			}
			count = 0;			
		}
	}
	return largest;
}

int main(){
	int ndigit = 3;
	int result = FindLargestPallindrome(ndigit);
	
	printf("%d\n", result);
	return 0;
}
//it says "Congratulations!"
//"you are the 324200th person to solve this problem"...
//got it right in 1st try!!!yeeeaaaaahhhhh..!!!though it took more than an hour...
