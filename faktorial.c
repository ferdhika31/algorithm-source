/*
	Author : Dika
*/

#include<stdio.h>

int main(){
	int a,n,hasil=1;
	
	printf("Angka: ");
	scanf("%d", &n);
	
	for(a=n;a>=1;a--){
		hasil=hasil*a; //kalo nginput 4 jadi 24=4x3x2x1
	}
	
	printf("%d\n",hasil);
}
