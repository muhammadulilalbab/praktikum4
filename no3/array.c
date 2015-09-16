/* ADT Array */
/* Tanggal : 24 Juni 2015 */

#include <stdio.h>
#include "boolean.h"
#include "array.h"


void MakeEmpty(TabInt * T){
	TabInt T1;
	(*T) = T1;
	(*T).nbelmt=0;
}

boolean IsEmpty (TabInt T){
	boolean empty = false;
	if (T.nbelmt==0){
		empty = true;
	}
	return empty;
}	

boolean IsFull (TabInt T){
	boolean full = false;
	if (T.nbelmt==NMax){
		full = true;
	}
	return full;
}	

void BacaIsi (TabInt * T){
	int X;
	(*T).nbelmt=0;
	int count =1;
	do{
	   scanf("%d",&X);
	   if(X!=-999)
	   {
		(*T).TI[(*T).nbelmt]=X;
		(*T).nbelmt++;
		count++;
	   }
	}while(X!=-999 && count<=NMax );
}
void TulisIsi (TabInt T)
{
	int i;
	if(IsEmpty(T)){
		printf("Tabel kosong\n");
	}else{
		for(i=0;i<T.nbelmt;i++)
		{
			printf("[%d]%d\n",i,T.TI[i]);
			
			
		}
	}
}
int SumTabel (TabInt T){
/* Menghasilkan hasil penjumlahan semua elemen tabel T */
	int i, sum=0;
	
	for(i=0;i<T.nbelmt;i++)
	{
		sum = sum + T.TI[i];
	}
	return sum;
}
float AvgTabel (TabInt T){ 
	float avg=0;
	int sum = SumTabel(T);
	avg = (float) sum/T.nbelmt;
	return avg;

}
int CountX (TabInt T, int X){
/* Menghasilkan kemunculan X di tabel T */
	int countX =0,i;
	for(i=0;i<T.nbelmt;i++)
	{
		if(T.TI[i]==X){
			countX++;
		}
	}
	return countX;
	
}
int SearchIdx (TabInt T, int X){

	int i=0,idX=IdxUndef;
	
	boolean found = false;
	while(found==false && i<=T.nbelmt)
	{
		if(T.TI[i]==X){
			found=true;
			idX=i;
		}
		i++;
	}
	return idX;
}
void ValExtreme (TabInt T, boolean min, int * ext){
	int minimum = 99999, max =-99999,i;
	for(i=0;i<T.nbelmt;i++)
	{
		if(T.TI[i]<minimum){
			minimum= T.TI[i];
		}
		if(T.TI[i]>max){
			max= T.TI[i];
		}
	}
	if(min)
	{
		(* ext) = minimum;
	}else{
		(* ext)= max;
	}
}
TabInt InverseTab (TabInt T){

	int temp;
	int start =0;
	int end = T.nbelmt-1;
	while(start < end)
	{
		temp = T.TI[start];   
		T.TI[start]= T.TI[end];
		T.TI[end] = temp;
		start++;
		end--;
		
	}
	return T;	   
}
boolean IsSimetris (TabInt T){
	int i=0,j=T.nbelmt-1;;
	boolean isSimetris = true;
	for(i=0;i<j;i++)
	{
		if(T.TI[i]!=T.TI[j]){
			isSimetris = false;
		}
		j--;
	}
	return isSimetris;
}
void Sort (TabInt * T, boolean asc){

	int i,j,a;
	if(asc){
		for(i=0;i<(*T).nbelmt;i++)
		{
			for(j=i+1;j<(*T).nbelmt;j++)
			{
				if((*T).TI[i]>(*T).TI[j])
				{
					a=(*T).TI[i];
					(*T).TI[i]=(*T).TI[j];
					(*T).TI[j]=a;
				}
			}
		}
	}else{
		for(i=0;i<(*T).nbelmt;i++)
		{
			for(j=i+1;j<(*T).nbelmt;j++)
			{
				if((*T).TI[i]<(*T).TI[j])
				{
					a=(*T).TI[i];
					(*T).TI[i]=(*T).TI[j];
					(*T).TI[j]=a;
				}
			}
		}
	}
	
}

