#include<iostream>
using namespace std;
int main() {
  int r1,c1; // 2 2
  cin>>r1>>c1;
  int arr1[r1][c1];
  for(int i=0;i<r1;i++){ // i = 1 i<2
  	for(int z=0;z<c1;z++){ // z < 2 
  		cin>>arr1[i][z]; 
	  }
  }
  int r2,c2; // 2 2
  cin>>r2>>c2;
  int arr2[r2][c2];
  for(int i=0;i<r2;i++){ 
  	for(int z=0;z<c2;z++){ 
  		cin>>arr2[i][z]; 
	  }
  }
  // arr1   arr2
  int result[r1][c2];
  for(int i=0;i<r1;i++){ // i = 1 i<2
  	for(int z=0;z<c2;z++){ // z < 2 
  		result[i][z] =0;
	  }
  }
  
  for(int i=0;i<r1;i++){                                 
  	for(int z=0;z<c2;z++){                             
  		for(int x=0;x<c1;x++){                         
  			result[i][z] += arr1[i][x] * arr2[x][z];
  			// result[0][1] = arr1[0][0] * arr2[0][1];
  			// result[0][1] = arr1[0][1] * arr2[1][1];
  			// result[0][1] = arr1[0][2] * arr2[2][1];
		  }
	  }
  }
  
  for(int i=0;i<r1;i++){ 
  	for(int z=0;z<c2;z++){ 
  		cout<<result[i][z]<<" "; /
	  }
	  cout<<endl;
  }
}