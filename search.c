#include <stdio.h>

int main(){
	int i,cari,flag=0,data[8] = {8,10,6,-2,11,7,1,100}; //deklarasi variable
	
	printf("Masukkan data yang ingin dicari = ");
	scanf("%d",&cari); //input
	
	for(i=0;i<8;i++){
		if(data[i] == cari){
			flag=1;
		}
	}
	
	if(flag==1){
		printf("Data ada");
	}else{
		printf("Data tidak ada");
	}
}
