#include<iostream>
#include<vector>
using namespace std;
int main()
{   vector<int>at;
    vector<int>bt;
    vector<int>temp;
    int i,n,n1,n2;
	cout<<"enter the no of processes"<<endl;
	cin>>n;
	cout<<"enter the no of processes in queue 1"<<endl;
	cin>>n1;
	cout<<"enter the no of processes in queue 2"<<endl;
	cin>>n2;
	cout<<"enter the burst time and arrival time of the processes"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"enter the arrival time"<<endl;
		cin>>at[i];
	}   for(int i=0;i<n;i++)
	{
		cout<<"enter the burst time"<<endl;
		cin>>bt[i];
	    temp[i]=bt[i];
	}
	
	
	
	
	
	
}
