//
//  main.cpp
//  manco
//
//  Created by Praveen Kumar on 11/6/17.
//  Copyright © 2017 Praveen Kumar. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <list>
using namespace std;
int myints[] = {5,5,5,5,5,5,5,5,5,5,5,5,5,5};
list<int> mylist (myints,myints+14);
list<int>::iterator it=mylist.begin();
int choice,ts,store=0,store1=0,k=0;



/*condition for circular list*/
void cond()
{
    if(it == mylist.end())
    {
        it=mylist.begin();
    }
}




/* intializing game play*/
void ini()
{
    cond();
    ts=(*it);
    *it=0;
    it++;
}





/* game play that is moving the peices*/
void play()
{
for(int i=0;i<ts;i++,it++)
{
    cond();
    (*it)+=1;
}
}




/*storing of points*/
void point(int j)
{
    it++;
    if(j==0)
    store+=(*it);
    if(j==1)
        store1+=(*it);
    (*it)=0;
    it++;
}





int main(int argc, const char * argv[])
    {
    // it is for selecting the game play
        for(int j=0;j<2;j++)
        {
            system("clear");
        cin>>choice;
        for(int i=0;i<choice-1;i++,it++);
    
    while(k!=1)
    {
        if(*it==0)
        {
            cond();
            point(j);
            k=1;
        }
        else
        {
            cond();
            ini();
            play();
        }
    }
        
        cout << "mylist contains:";int i=0;
        for (list<int>::iterator it=mylist.begin(); it != mylist.end(); ++it,i++)
        {
            if(i==7)
            {
            cout<<endl;
            }
            cout << ' ' << *it;
        }
        
        cout << '\n';
            if(j==0)
        cout<<store;
            if(j==1)
                cout<<store1;
        }
            
    return 0;
}
