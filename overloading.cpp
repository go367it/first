#include<iostream>     //note
using namespace std;  //the no.of arguments and parameters may vary and their data type also varies
void sum(int x,int y) //always give default arguments from the last(right hand side)
{                     //in function overloading the name of the function should be same
  cout<<"\n addition is:"<<x+y;  
}
void sum(double x,double y) 
{
  cout<<"\n addition is:"<<x+y;  
}
void sum(int x,double y) 
{
  cout<<"\n addition is:"<<x+y;  
}
main()
{
sum(5,9);
sum(1.4,3.7);
sum(2,4.5);	
}
