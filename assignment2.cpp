/* name:Arti Auti ,batch:AS1 ,OOP assignment 2 */


#include<iostream>
#include<string.h>
using namespace std;

int i,n;
class Books
{

int price,stockp;
char *tt,*author,*pub;
public:

Books()
{
//   ptrvar=new datatype;


tt=new char;
author=new char;
pub=new char;
                  //constructor

price=100;
stockp=20;
strcpy(tt,"oop");
strcpy(author,"Ebal");
strcpy(pub,"TATA");

}

void accept()
{
cout<<"\nEnter the title";
cout<<"\nEnter the author";
cout<<"\nEnter the publisher";
cout<<"\nEnter the price of book";
cout<<"\nEnter the stock position";
cin>>tt;
cin>>author;
cin>>pub;
cin>>price;
cin>>stockp;
}
void display();
void search();

~ Books()          //destructor
{
    delete tt;
    delete author;
    delete pub;
cout<<"\n Destructor is called";
}

} b[10];



void Books::search()
{
int cost,f=0,f1=0,copy;
char *t,*a;
t=new char;
a=new char;

cout<<"\n Enter the title and author which u want to search";
cin>>t>>a;


for(i=0;i<n;i++)
{
if(strcmp(t,b[i].tt)==0 && strcmp(a,b[i].author)==0)
{
f=1;
cout<<"\nBook is found";
b[i].display();

cout<<"\nEnter the number of copy which you want";
cin>>copy;
if(copy<=b[i].stockp)
{
f1=1;
cost=b[i].price*copy;
cout<<"\n Total cost of all books is="<<cost;
break;
}
}
}
if(f==1 && f1==0)
{
cout<<"\n Book is availble but number of copies are not avialble";
}

if(f==0)
cout<<"\n Book is not found";


}
void Books::display()
{

cout << "\n"  << tt<<"\t" <<author<< "\t"<< pub<<"\t\t" << price<<"\t" <<stockp <<endl;
}




int main()
{
int ch,i;
cout<<"\n Enter the Total number of books";
cin>>n;
do
{


cout<<"\n Main Menu";
cout<<"\n 1.Accept\n 2.Display\n 3.Search";
cout<<"\n Enter the choice";
cin>>ch;
switch(ch)
{
case 1:
for(i=0;i<n;i++)
{
b[i].accept();
}
break;

case 2:
cout<<"\n"<<"Title"<<"\t"<<"Author"<<"\t"<<"Publisher"<<"\t"<<"Price"<<"\t"<<"Stock position";
for(i=0;i<n;i++)
{
b[i].display();
}
break;
case 3:
b[i].search();
}







}while(ch!=0);
return 0;
}