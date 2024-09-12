//Name:Auti Arti,Roll no:05 OOP3 assignment
#include<iostream>
#include<cstring>
using namespace std;
int i,n;
class Pinfo{
static int cnt;
char *name,*Dln,*add,bloodg[3];
int dob,ht,wt,cn,pn;

public:
Pinfo(){               //constructor

name=new char;

Dln=new char;
add=new char;

strcpy(name,"arti");
strcpy(add,"nagar");
strcpy(Dln,"dl286");
strcpy(bloodg,"O+");
dob=9;
pn=100;
ht=58;
wt=40;
cn=82743926;
}
Pinfo(int h,int w,int d){
ht=h;
wt=w;
dob=d;
}
Pinfo(Pinfo &pp){
pp.ht=ht;
pp.wt=wt;
pp.dob=dob;
}
static void displaycount(){                  // static function
cout<<"\n total number of records is:"<<cnt;

}
friend void search(Pinfo[], int);
void display();
void accept(){
cnt++;
cout<<"\nenter personal info";
cout<<"\nenter name";
cout<<"\naddress";
cout<<"\nDOB";
cout<<"\npolicyno";
cout<<"\nliencenno";
cout<<"\nblood group";
cout<<"\nheight(in feet)";
cout<<"\nweight(in kg)";
cout<<"\ncontactno";
cin>>name;
cin>>add;
cin>>dob;
cin>>pn;
cin>>Dln;
cin>>bloodg;
cin>>ht;
cin>>wt;
cin>>cn;
}
~Pinfo(){              //destructor
delete Dln;
delete name;

cout<<"\n destructor called";
}
void update();
void Delete();
}
s[10];
int Pinfo::cnt;      //call static function
void search(Pinfo s[],int i){
int f=0,policyn;
cout<<"\n enetr the policy number";
cin>>policyn;
for(i=0;i<n;i++){
if(policyn==s[i].pn){
f=1;
s[i].display();
break;
}
}
if(f==0){
cout<<"\n not found";
}
}
void Pinfo::update(){
int f=0,p;
cout<<"\n enter the Policy no.which you want update";
cin>>p;
for(i=0;i<n;i++){
if(p==s[i].pn){
f=1;
s[i].accept();
break;
}
}
if(f==0){
cout<<"\n not found";

}
}
void Pinfo::Delete(){
int d,f=0;
cout<<"\n enter the poly number";
cin>>d;
for(i=0;i<n;i++){
if(d==s[i].pn){
f=1;

do{
s[i]=s[i+1];
i++;
}while(i<n);
n--;
break;
}
}
if(f==0)
{
cout<<"\n not found";
}
}
inline void Pinfo::display(){           //inline function
cout<<"\n"<<name<<"\t"<<add<<"\t"<<dob<<"\t"<<pn<<"\t"<<Dln<<"\t"<<bloodg<<"\t"<<ht<<"\t"<<wt<<"\t"<<cn;
}
int main(){
int ch;
cout<<"\nEnter the entries";
cin>>n;
do{
cout<<"\n Main Menu";
cout<<"\n 1.Accept \n 2.display\n 3.search\n 4.display number of record\n 5.update record\n 6.delete record";
cout<<"\n enter your choice";
cin>>ch;
switch(ch){
case 1:
for(i=0;i<n;i++){
s[i].accept();
}
break;
case 2:
cout<<"\n"<<"name"<<"\t"<<"address"<<"\t"<<"dob"<<"\t"<<"policy number"<<"\t"<<"Drivingln"<<"\t"<<"bloodg"<<"\t"<<"height"<<"\t"<<"weight"<<"\t"<<"contact";
for(i=0;i<n;i++){
s[i].display();
}
break;

case 3:
search (s,i);
break;
case 4:
Pinfo::displaycount();
break;
case 5:
s[i].update();
break;
case 6:
s[i].Delete();
break;
}
}while(ch!=0);
return 0;
}