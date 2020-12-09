//find the unique numbers.

//arr[]={5,5,2,6,9,2,6};
#include <iostream>
#include <map>

void ConventionalMethod()
{
    std::map<int, int> count;
    int arr[]={5,5,2,2,6,6,9};

    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
    {
        if(count.find(arr[i])==count.end())
        {   
               count.insert(std::pair<char,int>(arr[i],1));
        }        
        else 
        { 
            count[arr[i]]++;       
        }
    }

    for(auto it=count.begin();it!=count.end();it++)
    {
        if(it->second==1)
        {
            std::cout<<it->first;
            break;
        }
    }
 }


void UsingBitMaskingApproach()
{
    int arr[]={5,5,2,2,6,6,9};
    int res=arr[0];
    for(int i=1;i<sizeof(arr)/sizeof(int);i++)
    { res=res^arr[i];        
    }
    std::cout<<res;
}

int main()
{   std::cout<<"Conventional Method,Unique Number is :";
    ConventionalMethod();
    std::cout<<"\n\nUsingBitMaskingApproach,Unique Number is :";
    ConventionalMethod();
    std::cout<<std::endl;
  return 0;
}