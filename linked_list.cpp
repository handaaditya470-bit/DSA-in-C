#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int info;
    node *link;
};
void insert_at_tail(node* head,int val)
{
    node* n;
    n=(struct node*)malloc(sizeof(struct node));
    n->info=val;
    n->link=NULL;
    if(head==NULL){
        cout <<n;
    }
    node* temp=head;
    while(temp->link!=NULL){
        temp=temp->link;
    }
    temp->link=n;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->info<<" ";
        temp=temp->link;
    }
}
void search(node* head,int n){
    node* temp=head;
    int flag=0;
    while(temp!=NULL){
       if(temp->info==n){
            flag=1;           
        }
       temp=temp->link;
    }    
    if(flag==1){
        cout<<"Element found "<<n<<endl;            
    }
    else{
        cout<<"Element not found "<<endl;
    }
}
void deletemid(node* head,int n){
    node* temp=head;
    while(temp->link->info!=n){
        temp=temp->link;
    }
    node* d=temp->link;
    temp->link=temp->link->link;
    delete d;
}
int main(){
    int ele,x,y,z;
    char n;
    struct node *a,*b,*c,*head,*temp;
    a=(struct node*)malloc(sizeof(struct node));
    b=(struct node*)malloc(sizeof(struct node));
    c=(struct node*)malloc(sizeof(struct node));
cout<<"Enter the three elements "<<endl;
cin>>x>>y>>z;
a->info=x;
b->info=y;
c->info=z;
head=a;
temp=head;
a->link=b;
b->link=c;
c->link=NULL;
cout<<"Enter element : ";
cin>>ele;
do{
    cout<<endl<<"Press (1) for Display"<<endl;
    cout<<"Press (2) for Display"<<endl;
    cout<<"Press (3) for Display"<<endl;
    cout<<"Press (4) for Display"<<endl;
    cout<<"Press (5) for Display"<<endl;
    cout<<"Press (6) for Display"<<endl;
    cout<<"Press (7) for Display"<<endl;
    cout<<"Press (8) for Display"<<endl;
    switch {
        case 1:
        display(head);
        break;
        default :
        cout<<"Wrong input";
    }
    cout<<"If you want to continue press 'y'"<<endl<<"Else any key";
    cin>>n;
}while(n=='Y'||n=='y');
// deletemid(head,ele);
// search(head,ele);
// insert_at_tail(head,ele);

return 0;
}