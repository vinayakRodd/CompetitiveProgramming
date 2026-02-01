#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n,k,x;
	    cin>>n>>k>>x;
	    
	    vector<int>a(n);
	    for(int i=0; i<n; i++)
	        cin>>a[i];
	    
	    int s = 0;
	    for(int i=0; i<n; i++)
	        s += a[i];
	        
	    if(s > k || (k-s)%x != 0)
	        cout<<"NO";
	    else
	        cout<<"YES";
	   
	    cout<<"\n";
	}
	return 0;

}
