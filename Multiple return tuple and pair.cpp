#include <bits/stdc++.h>    
using namespace std;

tuple<int, int, char> create_tuple(int x, int y, char z)
{
    return make_tuple(x,y,z);
}

pair<int,int> create_pair(int x,int y)
{
    return make_pair(x,y);
}

int main() {
	// your code goes here
	
	tuple<int,int,char> a;
	pair<int,int> b;
	
	
	int x,y;
	char z;
	
	// unpacking the return arguments from the function with the help of tie function
	tie(x,y,z)= create_tuple(10,20,'a');
	b = create_pair(10,20);
	
	cout<<"from tuple "<<x<<" "<<y<<" "<<z<<endl;
	cout<<"from pair"<<b.first<<" "<<b.second;
	
	
	
	
	
	return 0;
}
