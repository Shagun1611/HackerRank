// Reversing the array using the list 

#include<iostream>
#include<list>
using namespace std;
void display(list<int> &l)
{
    list<int>::iterator it;
    for(it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
}
int main()
{
    
    int n;
    cin>>n;
    list<int> l1;
    int element;
    for(int i=0;i<n;i++)
    {
        cin>>element;
        l1.push_back(element);
    }
    l1.reverse();
    display(l1);
    
    return 0;
}
