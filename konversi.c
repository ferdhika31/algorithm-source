/*
	Sumber : https://kaaeka.wordpress.com/2011/04/24/program-konversi-bilangan-desimal-ke-biner/
*/

#include<stdio.h>

int main(){
	int a;
	printf("Masukkan Bilangan yang akan dikonversi : ");
	scanf("%d",&a);
	printf("%d dalam biner adalah ",a);
	toBiner(a);
}

int toBiner(int n){
	if(n>1){
		toBiner(n/2);
	}
	printf("%d",n%2);
}
