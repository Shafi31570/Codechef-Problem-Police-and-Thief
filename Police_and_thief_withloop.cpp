#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, x, y;
    cin>>t;
    while(t--){
        int count=0;
        cin>>x>>y;
        if(x>y){
            int temp=y;
            y=x;
            x=temp;
        }
        while(x!=y){
            x+=2;
            y+=1;
            count++;
        }
        cout<<count<<"\n";
    }
}