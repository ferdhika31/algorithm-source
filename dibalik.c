/*
	Sumber : https://astriyatnasari.wordpress.com/2011/04/06/algoritma-dan-program-membalik-angka-dengan-c-dan-javajeliot3/
*/

#include<stdio.h>

int main(){
	int a,n,dibalik=0;
	
	printf("Masukkan 2 bilangan:");
	scanf("%d",&n);

	for(a=0;a<=n;a++){
		dibalik=(dibalik*10)+(n%10);  
		n/=10;	// n=n/10 
	}
	
	printf("%d",dibalik);
}
