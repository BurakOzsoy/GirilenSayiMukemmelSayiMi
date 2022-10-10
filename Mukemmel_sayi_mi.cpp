//klavyeden girilen sayinin mukemmel sayi olup olmadıgını kontrol eden program
//Mukemmel sayı: kendisi hariç bütün bolenlerinin toplamı kendisine eşit olan sayidir. Örneğin 6 sayısı, bölenleri 1,2 ve 3 olup toplamı kendisine eşittir.

#include <stdio.h>

mukemmelSayiKontrol(int a){
	
	int toplam = 0;
	
	for(int i = 1; i < a; i++){ //Kendinden önceki sayıları 1 e kadar inerek tek tek böleni olup olmadığını kontrol eden döngü.
		
		if(a % i == 0){
		     toplam +=i; //eğer bölen ise toplam değişkeninde o değeri tutacağız. Yeni gelen değerler de üstüne toplama olarak eklenecek.
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
	
	mukemmelSayiKontrol(sayi); //fonksiyonumuza kontrol için değeri gönderdik.
}
