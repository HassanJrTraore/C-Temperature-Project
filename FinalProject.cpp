#include <iostream>
#include <string>
using namespace std;
int main()
{
double f,c;
int number;
string name;
cout<<"Please Enter your name:";
cin>>name;
cout<<"Welcome "<< name <<" to the temperature converter application"<<endl;
cout<<"Please type 1 for Fahrenheit to Celsius conversion "<<endl;
cout<<"please type 2 for Celsius to Fahrenheit"<<endl;
cout<<"Or type 3 to exit the program: ";
cin>>number;
while(number !=3)
{
if(number==1)
{
cout<<"Please enter your temperature in Fahrenheit:"<<endl;
cin>>f;
c =( f-32)*5/9;
cout<<"Computing...."<<endl;
cout<<"the temperature in Celsius is :"<<c<<endl;
}
else if(number==2)
{
cout<<"Please enter your temperature in celsius:"<<endl;
cin>>c;
f = (c*9.0/5.0)+32.00;
cout<<"Computing...."<<endl;
cout<<"the temperature in Fahrenheit is :"<<f<<endl;
}
else if( number==3)
{
cout<<"exit the program"<<endl;
return 0;
}
else
{
cout<<"that is not an option"<<endl;
cout<<"Welcome "<< name <<" to the temperature converter application"<<endl;
cout<<"Please type 1 for Fahrenheit to Celsius conversion "<<endl;
cout<<"please type 2 for Celsius to Fahrenheit"<<endl;
cout<<"Or type 3 to exit the program: ";
cin>>number;
}
cout<<"Welcome "<< name <<" to the temperature converter application"<<endl;
cout<<"Please type 1 for Fahrenheit to Celsius conversion "<<endl;
cout<<"please type 2 for Celsius to Fahrenheit"<<endl;
cout<<"Or type 3 to exit the program: ";
cin>>number;
}
return 0;
}
