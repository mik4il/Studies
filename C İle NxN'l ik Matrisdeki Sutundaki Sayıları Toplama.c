int main() {

	int satir,sutun;
	printf("Matrisin satir sayisini yaziniz: ");
	scanf("%d",&satir);
	printf("Matrisin sutun sayisini yaziniz: ");
	scanf("%d",&sutun);
	
	int mat[satir][sutun];
	int i,j;
	
	
	for (i=0;i<satir;i++){
		for (j=0;j<sutun;j++) {
			printf("Bir sayi giriniz: ");
			scanf("%d",&mat[i][j]);
		}	
	}
	
 
	for (i=0;i<satir;i++) {
		for (j=0;j<sutun;j++) {
			printf("%d ",mat[i][j]);
		}
	printf("\n");
	}
	
	printf("\n");
	
	int toplam=0;
	for (j=0;j<sutun;j++) {
		for (i=0;i<satir;i++) {
			toplam += mat[i][j];
		}
		printf("Sonuc: %d ",toplam);
		toplam=0;
	}

	
	return 0;
}
