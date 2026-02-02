#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random1to100();
void printAr(int numAr[],int numArSize);
int main() {
    int N,i,j,rnum,numok;
    int A[100];
    scanf("%d",&N);
    if (N>100) 
        N=100;
    srand(time(NULL));  
    for (i=0;i<N;i++) {
        numok=1;
        while (checkNum)  {
            rnum=random1to100();
            numok=0;
            for (j=0;j<i;j++)
               if (A[j]==rnum) {
               	numok=1;
			   } 
        }
        A[i]=rnum;
    }
    printAr(A,N);      
    return 0;
}

int checkNum(int numAr[],int numArSize){
	
}
int searchNum(int numAr[],int numArSize){
	int rnum=random1to100;
	int j;
	for (j=0;j<i;j++)
               if (A[j]==rnum) {
               	return=1;
			   } 
			   else
}
void printAr(int numAr[],int numArSize){
	for (int i=0;i<numArSize;i++){
		printf("%d ",numAr[i]);
	}
}
int random1to100() {
    int random_num = (rand() % 100) + 1;
    return random_num;
}

