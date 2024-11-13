#include<iostream>

using namespace std;

#define size 12
int i,j,n;
template<class t>
void ssorting( t a[size],int n)
{
t temp;
/*cout<<"enter the size of array";
cin>>n;
cout<<"enter the array element";
for(i=0;i<n;i++)
{

cin>>a[i];

}
*/
cout<<"enter the array element";
for(i=0;i<n;i++)
{

cin>>a[i];

}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{

temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
cout<<"\nsorted array is ";
for(i=0;i<n;i++)
{
cout<<a[i]<<"\t";
}
}

   
int main()

{
int ch;
int a[size];
float b[size];
char c[size];
cout<<"enter the size of array";
cin>>n;

do{
cout<<"\nMenu";
cout<<"\nInteger\nfloat\ncharacter";
cout<<"\nEnter a choice";
cin>>ch;
switch(ch){
case 1:
ssorting(a,n);
break;
case 2:
ssorting(b,n);
break;
case 3:
ssorting(c,n);
break;
}
}while(ch!=0);
return 0;




}