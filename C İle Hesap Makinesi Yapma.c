#include <stdio.h>
#include <math.h>
// Aynı hesap makinesini switch-case yapısını kullanarak da yapabilirsiniz. 

int main() {
	printf("1.Islem Toplama\n2.Islem Cikarma\n3.Islem Bolme\n4.Islem Carpma\n5.Islem Us Alma\n6.Islem Karesini Alma\n7.Islem Kare Kokunu Alma\n\n\n");
	
	int islem;
	printf("Islem seciniz: ");
	scanf("%d",&islem);
	
	int s1,s2;
	
	printf("1.Sayiyi giriniz: ");
	scanf("%d",&s1);
	printf("2.Sayiyi giriniz: ");
	scanf("%d",&s2);
	
	
	int sonuc;
	
	if (islem==1) {
		sonuc=s1+s2;
		printf("Sonuc %d ",sonuc);	
	}
	else if (islem==2) {
		sonuc=s1-s2;
		printf("Sonuc %d ",sonuc);
	}
	else if (islem==3) {
		sonuc=s1/s2;
		printf("Sonuc %d ",sonuc);
	}
	else if (islem==4) {
		sonuc=s1*s2;
		printf("Sonuc %d ",sonuc);
	}
	else if (islem==5) {
		sonuc=pow(s1,s2);
		printf("Sonuc %d ",sonuc);
	}
	else if (islem==6) {
		sonuc=s1*s1;
		int sonuc2=s2*s2;
		printf("Sonuc %d %d ",sonuc,sonuc2);
	}
	else if (islem==7) {
		sonuc=sqrt(s1);
		int sonuc2=sqrt(s2);
		printf("Sonuc %d %d",sonuc,sonuc2);
	}
	else {
		printf("Hatali islem sectiniz.");
	}
	
	return 0;
}
