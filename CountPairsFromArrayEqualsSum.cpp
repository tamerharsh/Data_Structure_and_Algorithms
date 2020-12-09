//Count the pairs from the array whose sum is equal to desired sum.
#include <iostream>
#include <array>

const int N=4;
int GetPairs(std::array<int, N>arr,int desired_sum)
{
int count =0;
for(int i=0;i<N;i++)
{
    for(int j=i+1;j<=N-i;j++)
    {
        if((arr[i]+arr[j])==desired_sum)
        {
            count++;
        }
    }
}
    return count;
}

int main()
{
std::array<int, N>arr{1,5,-7,1};
int desired_sum=6;
int count=GetPairs(arr, desired_sum);
std::cout<<"count is:"<<count;
    return 0;
}