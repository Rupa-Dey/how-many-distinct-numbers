//author name: frozen_RD
//.........................
//1326C-----parmutation partitions
//....................
#include<bits/stdc++.h>
using namespace std;
#define MOD 998244353



int main(){
    int n,k,i,l,x;
    long long sum=0,j,ans;
    cin>>n>>k;
    vector<int>v,vc,vec;
    for(i=0;i<n;i++){
        cin>>x;
        vc.push_back(x);
        v.push_back(x);
    }
    sort(v.begin(),v.end(),greater<int>());

    //for(auto it:v) cout<<it<<' ';
 
    for(i=0;i<k;i++){
        sum+=v[i];

    }

        cout<<sum<<' ';

     j = n-k+1; //what a jhamela!!!
    for(i=0;i<n;i++){
            if(vc[i]>=j){
                vec.push_back(i); 

            }
        
        }

    //for(auto it:vec) cout<<it<<' ';
     ans=1;  //again signed integer overflow :(

    //oopss!!...vec.size()...  :(
    for(i=0;i<vec.size()-1;i++){
        ans= (ans % MOD) * (vec[i+1]-vec[i])%MOD;

    }

    cout<<ans;
}
