#include <bits/stdc++.h>
using namespace std;

// Using long long for sums to avoid overflow
typedef long long ll;

int main() {
    // Fast I/O is crucial for 2e5 constraints
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin>>t;
    
    while(t--){
        
        int n,q;
        cin>>n>>q;
        
        vector<int>a(n+1),b(n+1);
        
        for(int i=1; i<n+1; i++)
            cin>>a[i];
            
        for(int i=1; i<n+1; i++)
            cin>>b[i];
            
        vector<pair<int,int>>qr;
            
        for(int i=0; i<q; i++){
            
            int u,v;
            
            cin>>u>>v;
            
            qr.push_back({u,v});
        }
        
        vector<int>smx(n+2);
        
        for(int j=n; j>0; j--)
            smx[j] = max({a[j],b[j],smx[j+1]});
            
        vector<int>p(n+1);
        
        for(int i=1; i<n+1; i++)
            p[i] = p[i-1] + smx[i];
            
        for(int i=0; i<q; i++){
            
            int l = qr[i].first;
            int r = qr[i].second;
            
            cout<<p[r]-p[l-1]<<" ";
        }
            
        cout<<"\n";
    }

   return 0;
}
