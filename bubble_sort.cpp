#include<iostream>
using namespace std;
bubble(int a[10], int n){
    int i,j,temp;
    for (i = 0; i < n - 1; i++){
    for (j = 0; j < n - i - 1; j++){ 
            if (a[j] > a[j+1]){
                temp=a[j];
                a[j]=a[j + 1];
                a[j+1]=temp; 

        } 
    }
}
}
int main(){
cout<<"Aditya Handa"<<endl<<"2334132"<<endl;
int i,j,n;
int a[10];
cout<<"Enter no of elements : ";
cin>>n;
cout<<"Enter elements "<<endl;
for (i=0; i<n; i++){
    cin>>a[i];
}
cout<<"Before sorting "<<endl;
for (i=0; i<n; i++){
    cout<<a[i]<<" ";
}
bubble(a,n);
cout<<endl<<"After sorting "<<endl;
for (i=0; i<n; i++){
    cout<<a[i]<<" ";
}
return 0;
}