/*
	Sumber : http://agussetiawanti2.blogspot.co.id/p/sorting.html
*/

#include<stdio.h>
#define n 7

int main(){
	int A[n] = {15,10,7,22,17,5,12};
	int X, I, K;
	
	printf("Sebelum di-sort\n");

	for(I=0; I <= n-1; I++){
		printf("%3i", A[I]);
		K=0;
	}


	while(K<=n-2){
		I=0;
		while(I<=n-2 - K){
			if (A[I] > A[I+1]){
				X = A[I];
				A[I] = A[I+1];
				A[I+1] = X;
			}
			I++;
		}
		K++;
	}

	printf("\nSesudah di-sort\n");
	
	for (I=0; I<= n-1; I++){
		printf("%3d", A[I]);
	}
	
}
