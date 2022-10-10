//klavyeden girilen sayinin mukemmel sayi olup olmadýgýný kontrol eden program
//Mukemmel sayi: kendisi haric butun bolenlerinin toplamý kendisine eþit olan sayi
#include <stdio.h>

mukemmelSayiKontrol(int a){
	
	int toplam = 0;
	
	for(int i = 1; i < a; i++){
		
		if(a % i == 0){
			toplam +=i;
		}
	}
	
	if(a == toplam){
		printf("Girdiginiz sayi mukemmel bir sayidir.");
	}
	
	else if(a  != toplam){
       printf("Sayi mukemmel degildir.");	
	}
	
}

int main(){
	int sayi;
	
	printf("Sayi giriniz: ");
	scanf("%d", &sayi);
	
	mukemmelSayiKontrol(sayi);
}
