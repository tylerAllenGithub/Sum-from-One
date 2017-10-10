/*Tyler Allen
CS111
lab6-2
2-26-2015
This program will display the sum of all the integers from 1 up to the number entered//////////////////////////////////*/
#include <iostream>
using namespace std;
int main(){
  int num;
  int sum=0;
  cout<<"Enter a positive number: ";
  cin>>num;
  cout<<endl;
  if(num>=0)
  {
    for(int i=1;i<=num;i++)
      {
	sum=sum+i;
	//calculate sum of all numbers from 1 to num
      }
    cout<<"The sum of all the numbers from 1 to "<<num<<" is "<<sum<<"."<<endl;
  }//output sum;
  else
    {
      cout<<num<<" is invalid."<<endl;
    }


  return 0;
}
