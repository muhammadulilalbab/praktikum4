#include "array.h"
#include <stdio.h>
int main()
{
	TabInt T1,T2;
	int sum,count,id,max,min;
	float avg;
	MakeEmpty(&T1);
	if(IsEmpty(T1)){
		printf("kosong bro\n");
	}else
	{
		printf("Ada isinya \n");
	}
	BacaIsi(&T1);
	printf("==========================\n");	
	TulisIsi (T1);
	printf("==========================\n");	
	sum =SumTabel(T1);
	printf("jumlah %d\n",sum);
	printf("==========================\n");	
	avg=AvgTabel(T1);
	printf("avg %f\n",avg);
	printf("==========================\n");	
	count=CountX(T1,2);
	printf("count %d\n",count);
	printf("==========================\n");	
	id=SearchIdx (T1, 3);
	printf("id %d\n",id);
	printf("==========================\n");	
	ValExtreme(T1,false,&max);
	printf("max %d\n",max);
	printf("==========================\n");	
	ValExtreme(T1,true,&min);
	printf("min %d\n",min);
	printf("==========================\n");	
	if(IsSimetris(T1)){
		printf("simetris \n");
	}else{
		printf("asimetris \n");
	}
	printf("==========================\n");	
	Sort (&T1, true);
	TulisIsi (T1);
	printf("==========================\n");	
	Sort (&T1, false);
	TulisIsi (T1);
	printf("inverse==========================\n");	
	T1=InverseTab(T1);
	TulisIsi (T1);
	return 0;
}
