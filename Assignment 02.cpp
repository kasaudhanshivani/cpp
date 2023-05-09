#include<bits/stdc++.h>

using namespace std;

int main()

{

    int n,reversenum,remainder=0,sum=0;

    cin>>n;

    cout<<"n:"<<n<<endl;

    while ( n!=0){

    remainder =n%10;

    reversenum=reversenum*10+remainder ;

     n/=10;

    sum+=remainder;

    cout<<"reversenum"<<reversenum<<  "  "<<sum<<endl;

    }

    return 0;

}
