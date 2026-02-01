#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    vector<int>a(n);
	    
	    int id = 0;
	    int mx = INT_MIN;
	    
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	        if(mx < a[i] && i != n-a[i]){
	            id = i;
	            mx = a[i];
	        }
	    }
	    
	    reverse(a.begin()+n-mx,a.begin()+id+1);
	    
	    for(auto &it : a)
	        cout<<it<<" "; 
	   
	    cout<<"\n";
	}
	return 0;

}
