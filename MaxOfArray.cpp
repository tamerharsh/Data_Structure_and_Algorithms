//find max of aaray in cpp.
#include <iostream>
#include <array>

const int N=5;
template <typename T>
T getMax(std::array<T, N>arr)
{
    T max=arr[0];
    for(auto it=arr.begin();it<arr.end();it++)
    {
        max=*it>max?*it:max;
    }
return max;
}

template<typename T>
void displayArray(std::array<T, N>arr)
{
 for(auto it=arr.begin();it<arr.end();it++)
 {  
     std::cout<<*it<<" ";
 }
}

int main()
{
 //Array Declaration.
 std::array<int ,N>arr{-10,-34,-76,-2,-100};
 
 //Display array.
 std::cout<<"Array is ";
 displayArray(arr);
 
 //Get Max array.
 std::cout<<"\nmax is "<<getMax(arr);
 
 return 0;
}