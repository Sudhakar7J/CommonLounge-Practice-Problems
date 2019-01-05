//
//  main.cpp
//  Video Game
//
//  Created by Ferran Sulaiman on 04/01/19.
//  Copyright © 2019 Ferran Sulaiman. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int N,h;
    cin>>N>>h;
    bool hold = false;
    int stack[N],c=0,ch;
    for(int i = 0;i < N; i++)
    {
        cin>>stack[i];
    }
    cin>>ch;
    while(ch!=0)
    {
     if(ch==1 && c!=0)
         c--;
    else if (ch==2 && c!=N-1)
         c++;
    else if(ch==3 && hold==false && stack[c]>0)
    {
        hold = true;
        stack[c]--;
    }
    else if(ch==4 && hold==true && stack[c]<h)
    {
        hold = false;
        stack[c]++;
    }
        cin>>ch;
    }
    
    for(int i=0;i<N;i++)
    {
        cout<<stack[i]<<" ";
    }
    cout<<endl;
    
        
    
    
    return 0;
}
