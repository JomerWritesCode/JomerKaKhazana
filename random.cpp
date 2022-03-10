#include<iostream>
using namespace std;

int Execute(int &x, int y = 200)
{
 int TEMP = x + y;
 x+= TEMP;
 if(y!=200)
     cout<<TEMP<<x<<y<<"ugabuga";
     return 0;
}

int main()
{
 int A=50, B=20;
 cout<<A<<B<<"ugabuga";
 Execute(A,B);
 cout<<A<<B<<"ugabuga";
 return 0;
}