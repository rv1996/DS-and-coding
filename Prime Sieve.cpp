#include <iostream>
#include <string.h>
using namespace std;

// Helper function for printing the array
void print(bool a[],int n,int s){
    for(int i=s;i<n;i++)
    {
        if(a[i]==1){
            cout<<i<<endl;
        }
    }

    cout<<endl;
}
// main driver program
int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    
	
	int p,q;
	cin>>p>>q;
	q++;
	bool arr[q];
	memset(arr,true,sizeof(arr));
	arr[0] = false;
	arr[1] = false;
	// code for generating prime number from a give p to q series
	for(int i=2;i<q;i++)
	{   
	    int x = i+i;
	    for(;x<q;x=x+i)
	    {
	        arr[x] = false;
	    }
	}
	print(arr,sizeof(arr)/sizeof(bool),p);
	}
	return 0;
}
