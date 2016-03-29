#include <stdio.h>
//input : initial group status
//output : every possible group 
//(so that everyone gets to know each other && not repeated)
//but this structure sucks i guess...(3/29)
typedef Group{
	int member[3];
	char group_name;	
};


struct Group group[4];

int makeGroup(){
	
	group[0].member = (1, 2, 3);
	group[0].group_name = 'a';
	group[1].member = (4, 5, 6);
	group[1].group_name = 'b';
	group[2].member = (7, 8, 9);
	group[2].group_name = 'c';
	group[3].member = (10, 11, 12);
	group[3].group_name = 'd';


}


int main(){
	
	int result, flag=0;

	printf("make group..? (1=yes, 0=no)")
	scanf("&d", flag)
	while(flag==1){
		result = makeGroup();
	}
	return 0;
}
