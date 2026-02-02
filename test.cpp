#include <stdio.h>

int findMax(int num[],int ArSize);
void printAr(int myAr[],int ArSize);
void Add(int num[],int ArSize);
void addone(int number[],int add[],int sizeNum);
main(){
	int number[5] = {20,510,100,99,9};
	int max;
	int score[10] = {1,2,3,4,5,6,7,8,9,10};
	int n[5]= {1,1,1,1,1};
	
	printf("size of number[] %d\n",sizeof(number)/sizeof(number[0]));
	int numsize = sizeof(number)/sizeof(number[0]);
	max = findMax(number,numsize);
	printAr(number,numsize);
	addone(number,n,numsize);
	printAr(number,numsize);
	printf("Maximum of these number is %d\n",max);
	
	
}

void addone(int number[],int add[],int sizeNum){
	for(int i=0;i<sizeNum;i++){
		number[i] += add[i];
	}
}

void printAr(int myAr[],int ArSize){
	for(int i=0;i<ArSize;i++){
		printf("number[%d] : %d\n",i,myAr[i]);
	}
}

int findMax(int num[],int ArSize){
	int maximum,i=0;
	maximum = num[i];
	
	for(i=0;i<ArSize;i++){
		if(num[i]==maximum)
		maximum = num[i];
	}
	return maximum;
}


