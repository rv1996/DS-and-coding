#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void print(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";    
    }
}


void insertion(int a[],int i,int n)
{
    if(i == n){
        return;
    }
    int j = i;
    int key = a[j];
    while(j>0)
    {
        
        if(a[j]<a[j-1])
        {
            swap(&a[j],&a[j-1]);
        }
        j--;
    }
    i++;
    insertion(a,i,n);
    
}

int main() {
	int a[] = {0,0,0,0,0,0,1,1,1,1,1,2,2,2,2,2,2,2,0,0,0,0,0,1,11};
	int n = sizeof(a)/sizeof(int);
	cout<<"before sorting"<<endl;
	print(a,n);
	insertion(a,1,n);
	cout<<endl<<"after sorting"<<endl;
	print(a,n);
	return 0;
}