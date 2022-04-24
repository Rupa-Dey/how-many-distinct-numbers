//how many numbers are distinct
//..................................
#include<bits/stdc++.h>
using namespace std;

bool chkSize(int a)
{
    int i;
    string s = to_string(a);
    set<char>st;
    
    for(i=0;i<s.size();i++){
        st.insert(s[i]);  //charcter insert

    }
   // for(auto it:st) cout<<it<<' ';

   if(s.size()==st.size()) return true;
     return false;
}
int main(){

    int x,i,cnt=0,a,b;
    cin>>a>>b;

    for(x=a;x<=b;x++){
    //cin>>x;
    //cout<<j;
    if(chkSize(x)==true){cnt++;}

    }
    cout<<cnt;
    

    


}
