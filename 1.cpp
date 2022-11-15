#include <iostream>
using namespace std;

int main(){
int n;
cin>>n;
int arr[100];
for ( int i =0; i < n; i++){
cin>>arr[i];
}
int numi = -1999999;
for (int i = 0; i < n; i++)
numi=max(numi, arr[i]);
cout<<numi;
}

