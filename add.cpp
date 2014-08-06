#include<iostream>

class sum
{
int a,b,c;

a=1;
b=2;
c=0;
public:void add();
        
}

void sum::add()
{
c=a+b;

cout<<"the addition is :",c);
}






int main()
{
sum obj;
obj.add();
return 0;

}
