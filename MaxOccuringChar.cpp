#include<iostream>
using namespace std;

char MaxOccurrence(string str)
{
    int count_prev=0,count=0;
    char char_prev,temp;


    for(int i=0 ; i<str.length() ; i++)
    {
        if(count > count_prev)
        {
            char_prev=temp;
            count_prev=count;
        }


        temp=str[i];
        count=0;

        for(int j=i+1 ; j<str.length() ; j++)
        {
            if(str[j]==temp)
            {
                count++;
            }
        }
    }

    return char_prev;
}

int main()
{
    string str="abcsbcccyyrhd";
    char result = MaxOccurrence(str);
    cout<<"MAX OCCURRING LETTER "<<result;
}