#include<stdio.h>
#define N 30000
int factor(int num){
	int res=0;
	for(int i=1;i<num;i++){
		if((num%i)==0){
			res+=i;
		}
	}	
	return res;
}
int main(){
	
	int i=0;
	for(i=1;i<N;i++){
		int res=factor(i);
		for(int j=i+1;j<N;j++){
			if(res==j&&i==factor(j))
				printf("%dºÍ%dÊÇ»¥ÂúÊı\n",i,j);
		}
	}

	return 0;
} 
