#include <bits/stdc++.h>

using namespace std;

int main(){
    int size,element;
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++){
      cin>>array[i];
    }
    int max=0;
    int highest=array[0];
    int lowest=array[0];
    int min=0;
    for(int i=0;i<size;i++){
        if(highest<array[i]){
            highest=array[i];
            max++;
        }
        if(lowest>array[i]){
            lowest=array[i];
            min++;
        } 
          
    }
    cout<<max<<" "<<min;
    return 0;
}
