#include<iostream>
using namespace std;
int main(){
    int a[5],b[5],c[10],i,j,k;
    cout<<"Enter elements to sort in list one : "<<endl;
    for(i=1;i<=5;i++){
    cin>>a[i];}
    cout<<"Enter elements to sort in list two: "<<endl;
    for(j=1;j<=5;j++){
    cin>>b[j];}
    while(i<=5&&j<=5)
    if(a[i]<b[j])
    {c[k]=a[i];
    k++;
    i++;
    }
    else {c[k]=b[j];
    j++;
    k++;}
    while(i<=5)
    {c[k]=a[i];
    k++;
    i++;
    }
    while(j<=5)
    {c[k]=b[j];
    j++;
    k++;
    }
    for(k=1;k<=10;k++)
    {cout<<c[k];
    }


return 0;
}