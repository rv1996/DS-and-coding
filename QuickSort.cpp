#include <iostream>
using namespace std;


int partition(int a[],int low,int high);

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


void QuickSort(int a[],int low, int high)
{
    if(low<high)
    {
        int pt = partition(a,low,high);
        QuickSort(a,low,pt-1);
        QuickSort(a,pt+1,high);
        
    }
    
}
    
    


int partition(int a[],int low,int high)
{
    int pivot = a[high];
    int i,j;
    i=low-1;
    int pvt;
    for(j=low;j<=high-1;j++)
    {
        if(a[j]<=pivot)
        {
            i++;
            swap(&a[j],&a[i]);
        }
    }

    swap(&a[i+1],&a[high]);
    return i+1;
}

int main() {
	int a[] = {12,7,9,8,9,0,9,8,7,6,5,0,9,4,3,1};
	int size = sizeof(a)/sizeof(int);
	cout<<"before sorting"<<endl;
	print(a,size);
	QuickSort(a,0,size-1);
	cout<<endl<<"after sorting"<<endl;
	print(a,size);
	return 0;
}