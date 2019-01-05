//
//  main.cpp
//  The Lead Game
//
//  Created by Ferran Sulaiman on 24/12/18.
//  Copyright © 2018 Ferran Sulaiman. All rights reserved.
//

#include <iostream>
#include <utility>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    cin>>n;
    int win = 0;
    int leadmax = 0;
    int p1score=0,p2score=0,p1,p2;
    for(int i=0;i<n;i++)
    {
        cin>>p1>>p2;
        p1score+=p1;
        p2score+=p2;
        if(p1>p2 && (p1score-p2score)>leadmax)
        {
            win=1;
            leadmax = p1score-p2score;
        }
        else if (p2>p1 && (p2score-p1score)>leadmax)
        {
            win = 2;
            leadmax = p2score - p1score;
        }
    }
    cout<<win<<" "<<leadmax;
    
    return 0;
    
}
