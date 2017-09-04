#include <iostream>
using namespace std;

void merge(int a[],int l,int m,int r);

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
    cout<<endl;
}


void MergeSort(int a[],int l, int r)
{
    if(l<r)
    {
        int m = (l+r)/2;
        MergeSort(a,l,m);
        MergeSort(a,m+1,r);
        print(a,6);
        merge(a,l,m,r);
        
    }
    
    
}

void merge(int a[],int l,int m, int r)
{
    // Make two array so that they can be merge with the give left and right index
    int i,j,k;
    int n1 = m-l+1;
    int n2 = r-m;
    
    int lsub[n1];
    int rsub[n2];
    
    for(i=0;i<n1;i++)
    {
        lsub[i] = a[l+i];    
    }
    for(i=0;i<n2;i++)
    {
        rsub[i] = a[m+1+i];  
    }    
    
    i=0;
    j=0;
    k=l; //index for merge array
    
    while(i<n1 && j<n2)
    {
        if(lsub[i]<rsub[j])
        {
            a[k] = lsub[i];
            i++;
        }
        else
        {
            a[k] = rsub[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=lsub[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k] = rsub[j];
        j++;
        i++;
    }
}

int main() {
	int a[] = {12, 11, 13, 5, 6, 7};
	int size = sizeof(a)/sizeof(int);
	cout<<"before sorting"<<endl;
	print(a,size);
	MergeSort(a,0,size-1);
	cout<<endl<<"after sorting"<<endl;
	print(a,size);
	return 0;
}