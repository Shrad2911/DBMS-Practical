#include<iostream>
using namespace std;

struct node
{
  char label[10];
  int ch_count;
  struct node *child[10];
}
  *root;
class GT
{
public:
  void create_tree();
  void display(node *r1);
GT()
{
   root=NULL;
} 
};

void GT::create_tree(){
int tbooks,tchapters,i,j,k;
root=new node;
cout<<"Enter name of book:";
cin>>root->label;
cout<<"enter no of chap in book";
cin>>tchapters;
root->ch_count=tchapters;

for(i=0;i<tchapters;i++){
root->child[i]=new node;
cout<<"enter chap name\n";
cin>>root->child[i]->label;
cout<<"enter the no of section in chap";
cin>>root->child[i]->ch_count;

for(j=0;j<root->child[i]->ch_count;j++){
root->child[i]->child[j]=new node;
cout<<"Enter Section"<<j+1<<"name\n";
cin>>root->child[i]->child[j]->label;
}}}
void GT::display(node*r1)
{
int i,j,k,tchapters;
if(r1!=NULL){
cout<<"\n*******Book hierarchy*******";
cout<<"\n book title"<<r1->label;
tchapters=r1->ch_count;
for(i=0;i<tchapters;i++){
cout<<"\n chapters:"<<i+1;
cout<<" "<<r1->child[i]->label;
cout<<"\n sections";
for(j=0;j<r1->child[i]->ch_count;j++){
cout<<"\n"<<r1->child[i]->child[j]->label;
cout<<"\n";
}}}
else{
cout<<"\n create book tree to display\n";
}}
int main(){
int choice;
GT gt;
while(1){
cout<<"----------------"<<endl;
cout<<"Book Tree creation"<<endl;
cout<<"----------------"<<endl;
cout<<"1.create"<<endl;
cout<<"2.display"<<endl;
cout<<"3.Exit"<<endl;
cout<<"Enter ur choice";
cin>>choice;
switch(choice){
case 1:

gt.create_tree();
break;
case 2:
gt.display(root);
break;
case 3:
exit(1);
default:
cout<<"Wrong choice"<<endl;
}}}

