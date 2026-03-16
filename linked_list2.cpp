#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
    int info;
    node *link;
};

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->info<<" ";
        temp=temp->link;
    }
    cout<<endl;
}

void insert_at_beg(node*& head, int newData) {
    node* newNode;
    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->info = newData;
    newNode->link = head;  
    head = newNode;        
    cout<<endl<<"Element inserted successfully";
}

void insert_at_mid(node* head,int ele,int val){
    node* n;
    n=(struct node*)malloc(sizeof(struct node));
    n->info=ele;
    node* temp=head;
    int i=1;
    while(i<val-1){
        temp=temp->link;
        i++;
    }
    n->link=temp->link;
    temp->link=n;
    cout<<endl<<"Element inserted successfully";
}

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
    cout<<endl<<"Element inserted successfully";
}

void delbeg(node*& head){
    head=head->link;
    cout<<endl<<"Element deleted successfully";
}

void deletemid(node* head,int n){
    node* temp=head;
    while(temp->link->info!=n){
        temp=temp->link;
    }
    node* d=temp->link;
    temp->link=temp->link->link;
    delete d;
    cout<<endl<<"Element deleted successfully";
}

void delend(node* head){
    node* temp=head;
    while(temp->link->link!=NULL){
        temp=temp->link;
    }
    temp->link=NULL;
    cout<<endl<<"Element deleted successfully";
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

void sorting(node* head){
    node* a,* b;
    int val;
    for(a=head; a->link!=NULL; a=a->link){
        for(b=a->link; b!=NULL; b=b->link){
            if(a->info>b->info){
                val=a->info;
                a->info=b->info;
                b->info=val;
            }
        }
    }
    cout<<"List is sorted now "<<endl;
}

int main(){
    int ele,x,y,z,num,val;
    char n;
    struct node *a,*b,*c,*head,*temp;
    a=(struct node*)malloc(sizeof(struct node));
    b=(struct node*)malloc(sizeof(struct node));
    c=(struct node*)malloc(sizeof(struct node));
cout<<"Aditya handa "<<endl;
cout<<"2334132 "<<endl;
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

do{
    cout<<endl<<"Press (1) for Display"<<endl;
    cout<<"Press (2) for Insert at beginning"<<endl;
    cout<<"Press (3) for Insert at mid"<<endl;
    cout<<"Press (4) for Insert at end"<<endl;
    cout<<"Press (5) for Delete from beginning"<<endl;
    cout<<"Press (6) for Delete from mid"<<endl;
    cout<<"Press (7) for Delete from end"<<endl;
    cout<<"Press (8) for Searching"<<endl;
    cout<<"Press (9) for Sorting"<<endl;
    cin>>num;
    switch(num){
        case 1:
        cout<<endl;
        display(head);
        break;

        case 2:
        cout<<endl;
        cout<<"Enter element that you want to Insert at beginning : ";
        cin>>ele;
        insert_at_beg(head,ele);
        break;
        
        case 3:
        cout<<endl;
        cout<<"Enter element that you want to Insert at mid : ";
        cin>>ele;
        cout<<"Enter position where you want to Insert the element : ";
        cin>>val;
        insert_at_mid(head,ele,val);
        break;
        
        case 4:
        cout<<endl;
        cout<<"Enter element that you want to Insert at end : ";
        cin>>ele;
        insert_at_tail(head,ele);
        break;
        
        case 5:
        cout<<endl;
        delbeg(head);
        break;
        
        case 6:
        cout<<endl;
        cout<<"Enter element that you want to Delete from mid : ";
        cin>>ele;
        deletemid(head,ele);
        break;
        
        case 7:
        cout<<endl;
        delend(head);
        break;
        
        case 8:
        cout<<endl;
        cout<<"Enter element that you want to Search : ";
        cin>>ele;
        search(head,ele);
        break;
        
        case 9:
        cout<<endl;
        sorting(head);
        break;

        default :
        cout<<endl;
        cout<<"Wrong input";
    }
    cout<<endl<<"If you want to continue press 'y'"<<endl<<"Else any key  : ";
    cin>>n;
}while(n=='Y'||n=='y');
return 0;
}