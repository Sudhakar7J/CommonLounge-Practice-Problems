//
//  main.cpp
//  Discrepancies in Voter's List
//
//  Created by Ferran Sulaiman on 05/01/19.
//  Copyright © 2019 Ferran Sulaiman. All rights reserved.


#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
	// insert code here...
	int n1,n2,n3,count,n=0;
	cin>>n1>>n2>>n3;
	long result[n1+n2+n3];
	long l1[n1],l2[n2],l3[n3];
	
	for(int i=0;i<n1;i++)
		cin>>l1[i];
	
	for(int i=0;i<n2;i++)
		cin>>l2[i];
	
	for(int i=0;i<n3;i++)
		cin>>l3[i];
	
	int i=0,j=0,k=0;
	
	long min;
	
	while(i<n1 || j<n2 || k<n3)
	{	count = 0;
		min = l1[i]<l2[j]? l1[i]:l2[j];
		min = l3[k]<min? l3[k]:min;
		
		if(l1[i]==min)
		{
			count++;
			i++;
		}
		
		if(l2[j]==min)
		{
			count++;
			j++;
		}
		
		if(l3[k]==min)
		{
			count++;
			k++;
		}
		
		if(count>1)
		{
			result[n++] = min;
		}
	}
	
	cout<<n<<endl;
	
	for(int p=0;p<n;p++)
		cout<<result[p]<<endl;
	return 0;
	
}
