#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//Designed by Memolitasli from LambdaCore


//tarla matrisim
int tarla [5][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};


//mayinlarin olacagi sayilarin kaydedilecegi array
int randomdizi[5];



int main(int argc, char *argv[]) {

//bir mayina basana kadar benden kordinat istemesi için sonsuz döngüye aliyorum

while(1 == 1)
{


int korX,korY,i,j,q,sayac;

// mayin tarlami yazdiriyorum
for(i = 0;i<5;i++)
{
	for(j = 0;j<5;j++)
	{
		printf("\t{%d}\t",tarla[i][j]);
	}
	printf("\n\n");
}


printf("************************************************************************\n");
printf("kontrol etmek istediginiz X kordinatini giriniz :");
scanf("%d",&korX);
printf("\n");
printf("kontrol etmek istediginiz Y kordinatini giriniz :");
scanf("%d",&korY);

//mayinlarimin sayilarini random komutu kullanarak her seferinde farklý noktalarda çýkmalarini sagliyorum
//ve for dongusu ile mayinlarimi randomdizi adini versdigim bir arrayin icine kaydediyorum
srand(time(NULL));
for(q = 0;q<5;q++)
{
	randomdizi[q] = rand()%25;
}

//girdigim kordinatlari matrisimin parametreleri olarak atiyorum ve karsilik geldigi degerleri
//olusturdugum randomdizi adli arrayimin icindeki degerlerle karsilastiriyorum
if(tarla[korX][korY] == randomdizi[0] || tarla[korX][korY] == randomdizi[1] || tarla[korX][korY] == randomdizi[2] || tarla[korX][korY] == randomdizi[3] || tarla[korX][korY] == randomdizi[4])
{
	//eger korX-korY degerim dizimin icindeki bir degere esit ise siki tuttun mesaji veriyor ve oyun bitiyor 
	printf("\n\n");
	printf("Mayina Bastin Siki Tuttun !!!");
	break;
}
else
{
	//degilse o noktayi sifir yapiyorum ve donguyu basa aliyorum
	sayac++;
	tarla[korX][korY] = 0;

	//olurda hic bir mayina denk gelmeden temiz olan 20 bolgeyi de isaretlersem oyun bitsin istiyorum
	if(sayac ==20)
	{
		printf("\n\n");
		printf("oyun bitti basari ile kazandin");
		break;
	}
	else
	{
		continue;
	}
	
}

}
	return 0;
}
