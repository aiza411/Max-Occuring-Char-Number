#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    string str="abcghhhsyhhbjxk";
    unordered_map<char,int> map1;


    int max_freq=0;
    char max_freq_char=' ';

    for(int i=0 ; i<str.length(); i++)
    {
        map1[str[i]]++;
        max_freq=max(max_freq,map1[str[i]]);
    }

    cout<<"\n MAP 1 :";
    unordered_map<char,int>::iterator it=map1.begin();
    while(it!=map1.end())
    {
        cout<<"\n\t"<<it->first<<" "<<it->second;
        it++;
    }


    for(int i=0 ; i<str.length() ; i++)
    {
        if(max_freq == map1[str[i]])
        {
            max_freq_char=str[i];
            break;
        }
    }

    cout<<"\n Value : "<<max_freq_char<<" has max freq : "<<max_freq;

    return 0;
}
