#include <bits/stdc++.h>
using namespace std;

void findpair(int arr[], int len, int sum)
{
    std::sort(arr, arr+len); // sort the input array
    int i = 0;
    int j = len -1;
    int a=0,b=0;
    while( i < j){
        while((arr[i] + arr[j]) <= sum && i < j)
        {
            if((arr[i] + arr[j]) == sum){
                cout << i << "," << j;
                a=1;
            }
            i++;
        }
        if(a==1)
        break;
        j--;
        while((arr[i] + arr[j]) >= sum && i < j)
        {
            if((arr[i] + arr[j]) == sum){
                cout << i << "," << j;
                b=1;
            }
            j--;
        }
        if(b==1)
        break;
    }
}


int main() {
	int n,t;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	cin>>t;
	findpair(arr, n, t);

	
	return 0;
}