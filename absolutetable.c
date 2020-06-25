#include<stdio.h>
#include<math.h>

//Define a function abs_table that takes an input array argument with type double values and displays a table of the data and their absolute values.

void abs_table(double array[],int size){
	
	int j;
	printf("x       |x|\n");
    printf("-----------\n");
	for(j=0;j<size;j++){
		if(array[j]<0){
		    
			printf("%.2f    ",array[j]);
			printf("%.2f\n",-array[j]);
		}
		else{
		
			printf("%.2f    ",array[j]);
			printf("%.2f\n",array[j]);
		}
    }
    
   
	
}

int main(){
	
	int size1,i;
	printf("Please enter size of array:");
	scanf("%d",&size1);
	double array1[size1];
	printf("Please enter term of array:");
	for(i=0;i<size1;i++){
		scanf("%lf",&array1[i]);//When using scanf, we use% lf to get double values.
	}
	
	abs_table(array1,size1);
	
	return 0;
	
}
