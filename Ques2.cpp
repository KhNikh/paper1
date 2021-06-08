#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int median=0;
    priority_queue<int,vector<int>,greater<int>> minheap;
    priority_queue<int> maxheap;
    while(n--)
    {
     int x;
     cin>>x;
     if(x<=median)
     {
       maxheap.push(x);
       int nmax=maxheap.size();
       int nmin=minheap.size();
       if(nmax-nmin==2)
       {
           int temp=maxheap.top();
           maxheap.pop();
           minheap.push(temp);
           median= (maxheap.top()+minheap.top() )/2;
       }
       else if(nmax-nmin==1)
       {
           median=maxheap.top();
       }
       else if(nmax==nmin)
       {
           median = ( minheap.top() + maxheap.top() )/2;
       }
     }

     else
     {
       minheap.push(x);
         int nmax=maxheap.size();
         int nmin=minheap.size();
         if(nmin-nmax==2)
         {
             int temp=minheap.top();
             minheap.pop();
             maxheap.push(temp);
             median= (maxheap.top()+minheap.top() )/2;
         }
         else if(nmin-nmax==1)
         {
             median=minheap.top();
         }
         else if(nmax==nmin)
         {
             median = ( minheap.top() + maxheap.top() )/2;
         }
     }

     cout<<median<<endl;
    }
    return 0;
}
