#include <stdio.h>
#include <string.h>

/* Bu koddaki en önemli kısım kullanıcı adını doğrularken int değişkenlerde olduğu gibi direkt olarak birbirine eşit mi diye kontrol edemiyoruz. Stringler için özel 
olarak tasarlanmış olan strcmp fonksiyonunu kullanmamız gerekiyor. */

int main() {
	char kullanici_adi[]="mikail";
	int sifre=1234;
	
	char kullanici_adi_gir[];
	printf("Kullanici adi giriniz: ");
	scanf("%s",&kullanici_adi_gir);

	int sifre_gir;
	printf("Sifrenizi giriniz: ");
	scanf("%d",&sifre_gir);
	
	if (strcmp(kullanici_adi,kullanici_adi_gir)==0 && sifre==sifre_gir) {
		printf("Giris yaptiniz.");
	}
	else if (kullanici_adi_gir!=kullanici_adi || sifre_gir!=sifre) {
		printf("Isleminiz bloke oldu!!!");
	}
	
	return 0;
}
