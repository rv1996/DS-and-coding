#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void insertion(int a[],int n)
{

    int i,j;
    for(i=1;i<n;i++){
        
        j=i;
        if(a[i]<a[i-1])
        {
            while(j>0){
                if(a[j]<a[j-1]){
                    swap(&a[j],&a[j-1]);
                }
                j--;
            }
        }
    }
    
}

void print(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";    
    }
}


int main() {
	int a[] = {10,9,8,7,6,5,4,3,2,1};
	int n = sizeof(a)/sizeof(int);
	cout<<"before sorting"<<endl;
	print(a,n);
	insertion(a,n);
	cout<<"after sorting"<<endl;
	print(a,n);
	return 0;
}
