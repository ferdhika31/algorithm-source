/*
	Author : Dika
*/

#include<stdio.h>

int main(){
	int a,hasil=0,bilangan[5] = {4,5,2,1,3};
	
	for(a=0;a<5;a++){
		hasil=hasil+bilangan[a]; //di jumlahin sekumpulan bilanganna dari variable bilangan
	}
	
	printf("%d\n",hasil);
}
