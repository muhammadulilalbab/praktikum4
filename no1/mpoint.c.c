#include "point.h"
#include <stdio.h>

int main(){
	POINT P;
	int pilihan;
	BacaPOINT (&P);
	do
	{
		scanf("%d",&pilihan);	
		if(pilihan==0)
		{
			TulisPOINT(P);
			printf("\n");
		}else if(pilihan==1){
			float x,y;
			scanf("%f %f",&x,&y);
			Translasi (&P, x, y);
			TulisPOINT(P);
			printf("\n");
		}else if(pilihan==2)
		{
			float sudut;
			scanf("%f",&sudut);
			Putar(&P,sudut);
			TulisPOINT(P);
			printf("\n");
		}else if(pilihan==3)
		{
			Mirror (&P, true, false);
			TulisPOINT(P);
			printf("\n");
		}else if(pilihan==4)
		{
			Mirror (&P, false, true);
			TulisPOINT(P);
			printf("\n");
		}else{
			printf("Kode operasi salah");
			printf("\n");
		}
	}while(pilihan!=0);
	


	return 0;
}

