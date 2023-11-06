#include<iostream>
#include<array>
using namespace std;

int main(){
	int numberofcolumns = 0;
	int k=0;
	int given_matrix [4][5]= 
	{
		{0,0,3,0,4},
		{0,0,5,7,0},
		{0,0,0,0,0},
		{0,2,6,0,0}
	};
	for (int i=0;i<4;i++){
		for (int j=0;j<5;j++){
			if(given_matrix[i][j]!=0){
				numberofcolumns++;
		}
	}
}
    int result_matrix[3][numberofcolumns];
	for (int i=0;i<4;i++){
		for (int j=0;j<5;j++){
			if(given_matrix[i][j]!=0){
				result_matrix[0][k] = i;  
                result_matrix[1][k] = j;  
                result_matrix[2][k] = given_matrix[i][j];  
                k++;  
		}
    }
   } 
   
   cout<<"The corresponding representation of sparse matrix is: \n";
   for (int i=0;i<3;i++){
   	for (int j=0;j<numberofcolumns;j++){
   		cout<<result_matrix[i][j];
   		cout<<"\t";
	   }
	    cout<<"\n";  
   }
}