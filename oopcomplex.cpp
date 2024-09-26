/*Auti Arti ,OOP assignment 4,date :18-9-24*/
#include<iostream>
using namespace std;
class complex{
int r,img;
public:
complex(){
r=0;
img=4;

}
complex(int rl,int ig){
r=rl;
img=ig;
}
void display(){
if(img>=0){
cout<<r<<"+"<<img<<"i"<<endl;

}
else{
cout<<r<<"-"<<img<<"i"<<endl;
}
}

complex operator +(complex);


friend complex operator -(complex,complex);

complex operator *(complex);

complex operator /(complex);


}c1,c2,c3;

complex complex::operator +(complex c2){

//complex c3;

c3.r=r+c2.r;

c3.img=img+c2.img;
return c3;
}

complex operator-(complex c1,complex c2){
//complex c3;
c3.r=c1.r-c2.r;

c3.img=c1.img-c2.img;

return c3;
}
complex complex ::operator *(complex c2){
//complex c3,c1;

c3.r=r*c2.r-img*c2.img;

c3.img=img*c2.r+r*c2.img;

return c3;
}
complex complex :: operator /(complex c2){
//complex c3,c1;

c3.r=(r*c2.r+img*c2.img)/(c2.r*c2.r+c2.img*c2.img);

c3.img=(-r*c2.img+img*c2.r)/(c2.r*c2.r+c2.img*c2.img);
return c3;
}
int main(){
int rl,ig,ch;
cout<<"enter real and imaginery part";
cin>>rl;
cin>>ig;
complex c1(rl,ig);
cout<<"enter real and  imaginary part";
cin>>rl;
cin>>ig;
complex c2(rl,ig);
//complex c3;
do{
cout<<"\nMenu";
cout<<"\n1.additon \n2.substraction \n3.multiplication\n4.division";
cout<<"enter the choice";
cin>>ch;
switch(ch){
case 1:
c3=c1+c2;
c3.display();
break;
case 2:
c3=c1-c2;
c3.display();;
break;
case 3:
c3=c1*c2;
c3.display();
break;
case 4:
c3=c1/c2;
c3.display();
break;
default:
cout<<"exit";
}
}while(ch!=5);
return 0;
}