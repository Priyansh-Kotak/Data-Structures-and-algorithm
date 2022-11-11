#include<iostream>
using namespace std;
template<class T>
class areh
{
    T a;
    T b;
    public:
    areh(T a, T b);    
    void add();   
    void sub();    
};

template<class T>
areh<T>::areh(T a, T b)
{
    this->a=a;
    this->b=b;
}

template<class T>

void areh<T>::add()
{
    T c= a+b;
    cout<<"Add "<<c<<"\n";
}

template<class T>
void areh<T>::sub()
{
    T s=a-b;
    cout<<"Sub "<<s<<"\n";
}

int main()
{
    areh<int>o1(10,11);
    o1.add();
    o1.sub();


}