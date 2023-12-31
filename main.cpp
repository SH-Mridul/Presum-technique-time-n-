#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

int main()
{
    optimize();
    int n,t;
    cin>>n>>t;
    
    long long arr[n+1];
    long long val = 0;
    arr[0] = 0;
    
    for(int i = 1; i<= n; i++){
        long long input;
        cin>>input;
        val+= input;
        arr[i] = val;
    }
    
    
    while(t--){
        int a,b;
        cin>>a>>b;
        long long ans = 0;
        ans = arr[b]-arr[a-1];
        cout<<ans<<endl;
    }
    
    
    return 0;
}






