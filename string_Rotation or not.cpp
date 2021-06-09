//LOGIC:
//set temp=str1.str1
//If str2 is a substring of temp, then str1 and str2 are rotation of each other.

//ALERT
//CharAt() is in java not here in C++. use at() instead.

#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	string s1,s2,temp;
	int i,j,l1,l2,count=0;
	
	l1=s1.length();
	l2=s2.length();
	
	cout<<"\nEnter  string 1 => ";
	cin>>s1;
	
	cout<<"\nEnter  string 2 => ";
	cin>>s2;
	
	//concatenating
	temp=s1+s1;
	
	j=0;
	//checking if s2 is substring of s1s1
	for(i=0;i<(2*l1);i++)
	{
		if(s2.at(j)==temp.at(i))
		{
			count++;
		}
		j++;
	}
	
	//if all characters match, then s2 is substring of s1s1, and hence its a rotation
		if(count==l2)
		{
			cout<<"\nIts a rotation!";
		}
		else
		{
			cout<<"\nIts NOT a rotation!";
		}
	
	return 0;
}
