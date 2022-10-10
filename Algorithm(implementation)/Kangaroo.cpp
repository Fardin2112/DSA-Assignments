#include <bits/stdc++.h>
using namespace std;

int main(){
    int s,t,a,b,n,m,element1,element2;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    vector<int>apples;
    vector<int>first;
    for(int i=0;i<m;i++){
        cin>>element1;
        apples.push_back(element1);
         int sum1=apples[i]+a;
         first.push_back(sum1);  
    }
    vector<int>oranges;
    vector<int>sec;
    for(int i=0;i<n;i++){
        cin>>element2;
        oranges.push_back(element2);
         int sum2=oranges[i]+b;
         sec.push_back(sum2);
    }
     int one_int=0,sec_int=0;
    for(int i=0;i<m;i++){
        if(s<=first[i]&&first[i]<=t){
            one_int++;
        }
    }
    
     for(int i=0;i<n;i++){
         if(s<=sec[i]&&sec[i]<=t){
             sec_int++;
         }
         }
         cout<<one_int<<endl;
         cout<<sec_int<<endl;
  return 0;
}
