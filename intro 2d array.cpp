//2d array

#include<stdio.h>
int main(){
	int vikrant[2][2]; //declaration of 2 d array where 2 dispalys rows and 4 displaus coloumn
	//int lakshita[][3]; //declartion of coloumn is necessary, row declaration is not necessary
	//there can be multidimensional array as well int arr[][][];
    vikrant[0][0]=1;
    vikrant[0][1]=2;
     vikrant[1][0]=3;
      vikrant[1][1]=2;
      
      int n,m;
      n=2;
      m=2;
    //int you[2,2]={{1,2},{3,4}};//1 2 are the elememts in first row 
    // every row is like an 1d array in 2d array
	//3 4 are the elements in second row    
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf(" %d",vikrant[i][j]);
		}
		printf("\n");
	}
}
	
	                    
                               
          
          
          
          
          
          

