#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,element;
    cin>>n;
    vector<int>vec;
    for(int i=0;i<n;i++){
        cin>>element;
        vec.push_back(element);  
    }
    for(int i=0;i<n;i++){
        if(vec[i]>=38&&vec[i]%5>=3){
            while(vec[i]%5!=0){
            vec[i]++;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<vec[i]<<endl;
    }
    return 0;
}
