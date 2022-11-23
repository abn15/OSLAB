#include<iostream>
using namespace std;
void worstFit(int processSize[],int n,int blockSize[],int m){
	int allocation[n];
	for(int i=0;i<n;i++){
		allocation[i]=-1;	}
		for(int i=0;i<n;i++){
			int wstldx=-1;
			for(int j=0;j<m;j++){
			if(blockSize[j]>=processSize[i]){
				if(wstldx==-1)
				wstldx=j;
				else if(blockSize[wstldx]<blockSize[j])
				wstldx=j;
			}	
			}
			
			if(wstldx!=-1){
				allocation[i]=wstldx;
				blockSize[wstldx]-=processSize[i];
			}
			
		}
		cout << "\nProcess No.\tProcess Size\tBlock no.\n"; for (int i = 0; i < n; i++)
{ cout << "   " << i+1 << "\t\t" << processSize[i] << "\t\t\t\t"; if (allocation[i] != -1)
cout << allocation[i] + 1;
else
cout << "Not Allocated";
cout << endl;
}
}


int main()
{int blockSize[]={100,500,200,300,600};
 	int processSize[]={212,417,112,426};
 	int m=sizeof(blockSize)/sizeof(blockSize[0]);
 	int n=sizeof(processSize)/sizeof(processSize[0]);
 	worstFit(blockSize,m,processSize,n);
 	return 0;
    
   
}