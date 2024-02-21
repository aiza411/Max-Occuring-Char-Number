#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    int num[]={1,2,3,4,4,5,6,6,6,6,6};
    unordered_map<int,int> map1;


    int max_freq=0;
    int max_freq_num=0;

    int array_size=sizeof(num)/sizeof(int);
    for(int i=0 ; i<array_size; i++)
    {
        map1[num[i]]++;
        max_freq=max(max_freq,map1[num[i]]);
    }

    cout<<"\n MAP 1 :";
    unordered_map<int,int>::iterator it=map1.begin();
    while(it!=map1.end())
    {
        cout<<"\n\t"<<it->first<<" "<<it->second;
        it++;
    }


    for(int i=0 ; i<array_size ; i++)
    {
        if(max_freq == map1[num[i]])
        {
            max_freq_num=num[i];
            break;
        }
    }

    cout<<"\n Value : "<<max_freq_num<<" has max freq : "<<max_freq;

    return 0;
}
