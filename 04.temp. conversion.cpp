#include<bits/stdc++.h>
using namespace std;
int main() {
	float celsius,f;
	cin>>celsius>>f;
	f=celsius*1.8+32;
	celsius=1.8*(f-32);
	cout<<celsius<<"   "<<f<<" ";
	
	
} 
