/*

 author - Mohammad Chand Alam
 Class - M.Tech (CSE)
 Submitted By - Fac. No- 18PESM003
 Zhcet ,AMU, Aligarh


*/

#include <bits/stdc++.h>
using namespace std;
#define MAXLENGTH 100

typedef struct list{          // Node list
  int len;
  char ch[MAXLENGTH];
} olist;


olist* init(olist *s){                 // Initialization of a List
 olist *l =s;
 l->len = 0;

return l;
}

void list_insert(olist *temp ){               // List Insertion

 cout<<"Enter the value and position where you want to enter \n";
 char val;
 int pos;
 cin>>val>>pos;
 temp->ch[pos-1] = val;
 temp->len = temp->len + 1;
 cout<<endl;
}

void del(olist *s){
cout<<"Enter the position where you want to delete "<<endl;
int pos;
cin>>pos;
if (s->ch[pos-1]=='x' || pos>s->len)
    cout<<"Nothing is at that position, Invalid Position "<<endl;
else{
for (int i=pos;i<MAXLENGTH;i++){
 s->ch[pos-1]=s->ch[pos];
}
s->len = s->len - 1;
cout<<endl;
}
}

void get_element(olist *t){
 cout<<"Enter the position, from where you want to get element \n";
 int pos;
 cin>>pos;
 if (t->ch[pos-1]=='x')
    cout<<"Nothing is at that position"<<endl;
 else{
 cout<<"Element at position : "<<pos<<"is: "<<endl;
 cout<<t->ch[pos-1];
 cout<<endl;
 }
}

void print(olist *s){
 if (s->len==0)
    cout<<"List is empty "<<endl;
 else{
  cout<<"Hi I am Printing , Wait....";
  cout<<"Size of list is :"<<endl;
  cout<<s->len;
  cout<<"Elements of the list are : "<<endl;
  for (int i=0; i<MAXLENGTH; i++)
    cout<<s->ch[i]<<" ";
cout<<endl;
}
}


int main(){

    olist *s ;
    s->len = 0;
    for (int i=0;i<MAXLENGTH;i++)
        s->ch[i]='x';

    cout<<"################# Implementation of List ###############"<<endl;
    cout<<endl;

    while(1){

    cout<<"Select Options: "<<endl;
    cout<<endl;
    cout<<"1. Insert  (Enter character 1 for insertion )"<<endl;
    cout<<"2. Delete  (Enter character 2 for deletion )"<<endl;
    cout<<"3. Get Element  (Enter character 3 to get element at some position )"<<endl;
    cout<<"4. Print  (Enter character 4 to print the list )"<<endl;
    cout<<"5. Exit  (Enter character 5 to exit )"<<endl;
    char ch;
    cin>>ch;
    if (ch == '1')
        list_insert(s);
    else if (ch == '2')
        del(s);
    else if (ch =='3')
        get_element(s);
    else if (ch=='4')
        print(s);
    else if (ch=='5'){
     cout<<"Good Bye, Thank you"<<endl;
      break;
    }
    }
  return 0;
}
