#include <stdio.h>
// Bu şekilde üçgen oluşturmak istediğimizde iç içe döngülerden yararlanırız. 

int main () {
	
	int sayi;
	printf("Kac yildizli ucgen olusturmak istiyorsunuz: ");	
	scanf("%d",&sayi);
	
	for (int i=1;i<=sayi;i++) {
		
		for (int k=1;k<=i;k++) {
			printf("*");
		}
	printf("\n");
	}
  
	return 0;
}
