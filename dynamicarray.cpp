#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
int **p=NULL;
int **p1=NULL;
int h;
int s;
int i,j;
int **q;
int **k;
int l,m;
cout<<"Enter the size of the array for row:";
cin>>h;
cout<<"Enter the size of the array for column:";
cin>>s;
p=(int**)calloc(sizeof(int*),h);
p1=(int**)calloc(sizeof(int*),h);
for(i=0; i<h; i++)
{
p[i]=(int*)calloc(sizeof(int*),s);
}
for(i=0; i<h; i++)
{
p1[i]=(int*)calloc(sizeof(int*),s);
}
cout<<"Enter the first matrix elements:"<<endl;
for(i=0; i<h; i++)
{
for(j=0; j<s; j++)
{
cout<<"Elements of the array "<<"["<<i<<"]"<<"["<<j<<"]"<<":";
cin>>p[i][j];
}
}
cout<<"Enter the second matrix elements:"<<endl;
for(i=0; i<h; i++)
{
for(j=0; j<s; j++)
{
cout<<"Elements of the array "<<"["<<i<<"]"<<"["<<j<<"]"<<":";
cin>>p1[i][j];
}
}
for(i=0; i<h; i++)
{
for(j=0; j<s; j++)
{
p[i][j]+p1[i][j];
}
}
for(i=0; i<h; i++)
{
for(j=0; j<s; j++)  
{
cout<<"Elements of the array is "<<"["<<i<<"]"<<"["<<j<<"]"<<"="<<p[i][j]+p1[i][j]<<endl;
}
}
cout<<"Enter the new size of the array for row:";
cin>>l;
cout<<"Enter the new size of the array for column:";
cin>>m;
p=(int**)realloc(p,  l * 4 * sizeof(double));
p1=(int**)realloc(p1, m * 4 * sizeof(double));
if(p==NULL && p1==NULL)
{
cout<<"Memory not allocated";
}
q=p;
k=p1;
cout<<"Enter the first matrix elements:"<<endl;
for(i=0; i<h; i++)
{
for(j=0; j<s; j++)
{
cout<<"Elements of the array "<<"["<<i<<"]"<<"["<<j<<"]"<<":";
cin>>q[i][j];
}
}
cout<<"Enter the second matrix elements:"<<endl;
for(i=0; i<h; i++)
{
for(j=0; j<s; j++)
{
cout<<"Elements of the array "<<"["<<i<<"]"<<"["<<j<<"]"<<":";
cin>>k[i][j];
}
}
for(i=0; i<h; i++)
{
for(j=0; j<s; j++)
{
q[i][j]+k[i][j];
}
}
for(i=0; i<h; i++)
{
for(j=0; j<s; j++)  
{
cout<<"Elements of the array is "<<"["<<i<<"]"<<"["<<j<<"]"<<"="<<q[i][j]+k[i][j]<<endl;
}
}
free(p);
}
