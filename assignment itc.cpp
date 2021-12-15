#include <iostream>

using namespace std;

int main()
{
//Task1
int marks;
int absents;
cout<<"Enter the number of marks  :";
cin>>marks;
cout<<"Enter Number of Absents    :";
cin>>absents;
if(marks>=90&&marks<=100&&absents<=6)
{
    cout<<"Grade is A\n";
}
else if (marks>=80&&marks<=89&&absents<=6)
{
cout<<"Grade is B\n";
}
else if (marks>=70&&marks<=79&&absents<=6)
{
    cout<<"Grade is C";
}
else if(marks>=60&&marks<=69&&absents<=6)
{
cout<<"Grade is D\n";
}
else if (marks<60)
{
    cout<<"Grade is F\n";
}
else if(absents>6)
{
    cout<<"Grade is W\n";
}
else{
    cout<<"Invalid Grade\n ";
}
cout<<"\n";
//Task2
int flavour,quantity,size,price;
cout<<"press 1 for Sprite\n";
cout<<"press 2 for Fanta\n";
cout<<"press 3 for Coke\n";
cout<<"Enter the Flavour   :";
cin>>flavour;
cout<<"\n";
cout<<"Enter Quantity      :";
cin>>quantity;
cout<<"\n";
cout<<"press 1 for small cup size\n";
cout<<"press 2 for medium cup size\n";
cout<<"press 3 for large cup size\n";
cout<<"Enter Size         :";
cin>>size;
if(size==1)
{
    cout<<"Bill is :";
    cout<<50*quantity;
}
else if(size==2){
    cout<<"Bill is :";
    cout<<100*quantity;
}
else if(size==3){
    cout<<"Bill is :";
    cout<<150*quantity;

}
else
{
    cout<<"Invalid Bill\n";
}
cout<<"\n";
 //Task3
 int Cresult,labresult;
 cout<<"Enter class number  :";
 cin>> Cresult;
 cout<<"Enter Lab numbers   :";
 cin>> labresult;
 if(Cresult<60)
 {
     cout<<"F in Class Exam\n";
     cout<< "F in Lab exam\n";
 }
 else if(Cresult>=90&&Cresult<=100)
{
    cout<<"A in Class Exam\n";
}
else if(Cresult>=80&&Cresult<=89)
{
    cout<<"B  in Class Exam\n";    
}
else if(Cresult>=70&&Cresult<=79)
{
    cout<<"C in Class Exam\n";
}
else if(Cresult>=60&&Cresult<=69)
{
    cout<<"D  in Class Exam\n";
    
}

 if(labresult>=90&&labresult<=100&&Cresult>60)
{
    cout<<"A in Lab exam\n";
}
else if(labresult>=80&&labresult<=89&&Cresult>60)
{
    cout<<"B  in Lab Exam\n";    
}
else if(labresult>=70&&labresult<=79&&Cresult>60)
{
    cout<<"C in LAB Exam\n";
}
else if(labresult>=60&&labresult<=69&&Cresult>60)
{
    cout<<"D  in lab exam\n";
    
}
else{
    cout<<"Grade is F in lab";
}
    return 0;
}