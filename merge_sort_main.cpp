#include<iostream>
using namespace std;
void merge(int a[10],int m,int b[10],int n,int r[20]){
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(a[i]<b[j]){
            r[k]=a[i];
            k++;
            i++;
        }
        else{
            r[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<m){
        r[k]=a[i];
        k++;
        i++;
    }
    while(j<n){
        r[k]=b[j];
        k++;
        j++;
    }
}
int main(){
    cout<<endl<<"Merge sort"<<endl<<"Aditya handa"<<endl<<"2334132"<<endl;
    int a[10],b[10],r[20],m,n,i,j,s,k;
    cout<<"Enter no of elements for 1st array : ";
    cin>>m;
    for(i=0;i<m;i++){
        cin>>a[i];
    }
    cout<<"Enter no of elements for 2nd array : ";
    cin>>n;
    for(j=0;j<n;j++){
        cin>>b[j];
    }
    cout<<"Array after merging" <<endl;
    merge(a,m,b,n,r);
    s=n+m;
    for(k=0;k<s;k++){
        cout<<r[k]<<" ";
    }
}