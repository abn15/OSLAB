//round robin algorithm
#include <iostream>
#include <queue>
using namespace std;

int at[4] = {0,1,2,3};
int bt[4] = {8, 5, 10, 11};
int rbt[4] = {8, 5, 10, 11};
int ct[4] = {0,0,0,0};
int tat[4] = {0,0,0,0};
int wt[4] = {0,0,0,0};
int t = 0;
int q = 6;

int main(){
queue <int> rq;
rq.push(0);
rq.push(1);
rq.push(2);
rq.push(3);
cout<<t<<" ";
while(rq.empty() == false){
int x = rq.front();
if(rbt[x] > q){
cout<<"P"<<rq.front() + 1<<" ";
rbt[x] = rbt[x] - q;
t = t+q;
rq.push(x);
}
else{
cout<<"P"<<rq.front() + 1<<" ";
ct[x] = t + rbt[x];
t = t + rbt[x];
rbt[x] = 0;
tat[x] = ct[x] - at[x];
wt[x] = tat[x] - bt[x];
}
rq.pop();
cout<<t<<" ";
}
cout<<endl;
for(int i = 0; i<4; i++){
cout<<endl;
cout<<ct[i]<<" "<<tat[i]<<" "<<wt[i]<<endl;
}
}