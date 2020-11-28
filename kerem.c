#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(){
	double x=0.0,pay=0.0,total=0.0;	
	char ch;
	do{
		printf("Enter a x value : ");
		scanf("%lf",&x);
		for(int i = 0;i<10;i++){
			double sonuc=0.0,paydaFactoriel=1.0;
			pay = pow(x,i);
			for(int j = i;j>=1;j--){
				paydaFactoriel *= j;
			}
			sonuc = (pay/paydaFactoriel);
			total += sonuc;
			printf("%d.durum - pay = %lf payda =  %lf total = %lf\n",i+1,pay,paydaFactoriel,total);
		}
		printf("Seri : %lf\n",total);
		total = 0.0;
		printf("Do you want to calculate again ? ");
		scanf(" %c",&ch);
	}while(ch == 'E' || ch == 'e');
}
