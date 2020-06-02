#include <bits/stdc++.h>
using namespace std;

int main() {
       
       long long int n,i;
       cin>>n;
       string str=to_string(n);
       long long int l=str.length();
       for( i=0;i<l/2;i++)
       {
           if(str[i]!=str[l-1-i])
           break;
       }
       if(i==l/2)
       cout<<"true";
       else
       cout<<"false";
	return 0;
}