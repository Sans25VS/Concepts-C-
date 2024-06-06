// for arrays we use pointers 
// for vector we use iterators
#include<bits/stdc++.h>
using namespace std;
int main(){
int n ;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a.begin(),a.end());
sort(arr,arr+n);
int *ptr = lower_bound(arr,arr+n,3);
if(ptr==(arr+n)){
    cout<<"Not found";
    return 0;
}
auto it = lower_bound(a.begin(),a.end(),2);
if(it == a.end()){
    cout << "Not found";
    return 0;
}
cout<<*ptr<<endl;
    return 0;
}
