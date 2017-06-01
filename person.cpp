#include<iostream>
#include<bits/stdc++.h>
#include"person.h"

using namespace std;


void person::matches(int x)
{
    a=x;
}

void person::input()
{
        cin>>name;
}
string person::output()
{
    return name;
}

void person::increment_score()
{
        score++;
}

void person::display_result()
{
        cout<<"Player name : "<<name<<endl;
        cout<<"No. of matches played : "<<a<<endl;
        cout<<"Matches won by "<<name<<" : "<<score<<endl;
}
