//missing Number
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long sum=0;
    for(int i=1; i<n; i++){
        int nums; cin>>nums;
        sum +=nums;
    }
    long long total_sum = (long long)n*(n+1)/2;
    
    cout<< total_sum - sum <<" ";
    return 0;
} 