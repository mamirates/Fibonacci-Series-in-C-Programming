#include <stdio.h>

void func_fibo(int index);

int main(){
	int fibo;
	
	printf("Please Enter the Index:",fibo);
	scanf("%d",&fibo);	
	func_fibo(fibo);
	
	return 0;
}

void func_fibo(int index){
	int i;
	int array[index-1];
	
	array[0]=1;
	array[1]=1;
	
	for (i=2;i<index;i++){
		array[i]=array[i-1]+array[i-2];
	}
	
	for (i=0;i<index;i++){
		printf(" %d ",array[i]);	
	}	
}
