#include <iostream>
using namespace std;



class Increase
{
    public: 
    int value;
    Increase (){value=0;}
    
    




};

Increase operator ++(Increase &a,int)
{
  Increase temp;
  temp.value=a.value++;
  return temp;
}

Increase& operator ++(Increase &a)

{

    ++a.value;

    return a;

}



int main()
{
  Increase a;
  ++a;
  cout<<++++a.value<<endl;
}