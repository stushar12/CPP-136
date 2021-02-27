#include<bits/stdc++.h>
using namespace std;
string printSequence(string str[], string input)
{
    string output="";
    for(int i=0;i<input.length();i++)
    {
        if(input[i]==' ')
        output+=to_string(0);
        else
        {
            int position=input[i]-'A';
            output+=str[position];
        }
    }
    return output;
}

int main()
{
    string res[]={ "2","22","222",                         //a  b  c
		   "3","33","333",                         //d  e  f
		   "4","44","444",                         //g  h  i
		   "5","55","555",                         //j  k  l
		   "6","66","666",                         //m  n  o
		   "7","77","777","7777",                  //p  q  r  s
		   "8","88","888",                         //t  u  v 
                   "9","99","999","9999"};                 //w  x   y  z

    

    string input = "GEEKSFORGEEKS"; 
	cout << printSequence(res, input);
}
