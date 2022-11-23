//first fit algorithm
#include<iostream>
using namespace std;
//m is the number of memory blocks
//n is the number of process
 void firstfit(int blockSize[],int m,int processSize[],int n){
 	//size of the allocation array is same as the number of process
 	int allocation[n];
 	
 	for(int i=0;i<n;i++){
 		allocation[i]=-1;
	 }
	 
	 for(int i=0;i<n;i++){
	 	for(int j=0;j<m;j++) {
		 
	 	if(blockSize[j]>=processSize[i]) //essential condition for fitting a process
		 { allocation[i]=j; //to store that the index ith process has been allocated the jth block
		 blockSize[j]=blockSize[j]-processSize[i];
		 break;
	}
		 
		 }
	 }
	 
 
 
 //cout<<"\nPROCESS NUMBER\tPROCESS SIZE\tBLOCK SIZE\n";
 for(int i=0;i<n;i++){
 	cout<<" "<<i+1<<"\t\t"<<processSize[i]<<"\t\t";
    //check if allocated
 	if (allocation[i]!=-1) 
 	cout<<allocation[i] +1;
 	else
 	cout<<"not allocated";
 	cout<<endl;
 	
 }}
 
 
 
 
 
 int main(){
 	int blockSize[]={100,500,200,300,600};
 	int processSize[]={212,417,112,426};
 	int m=sizeof(blockSize)/sizeof(blockSize[0]);
 	int n=sizeof(processSize)/sizeof(processSize[0]);
 	firstfit(blockSize,m,processSize,n);
 	return 0;
 }
 
 