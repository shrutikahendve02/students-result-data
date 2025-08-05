#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
int id;
char name[50];
int marks[5];
int total=0;
float average;
cout<<"enter student id:";
cin>>id;
cout<<"enter student name:";
cin>>name;
cout<<"enter marks of 5 subject:\n";
for (int i=0;i<5;i++)
{
cout<<"subject"<<i<<":";
cin>>marks[i];
total+=marks[i];
}
average=total/5.0;
cout<<"\n-----student result-----\n";
cout<<"ID:"<<id<<endl;
cout<<"NAME:"<<name<<endl;
cout<<"TOTAL MARKS:"<<total <<endl;
cout<<"AVERAGE:"<<average<<endl;
if(average>=35)
cout<<"result:pass\n";
else
cout<<"result:fail\n";
getch();
}

