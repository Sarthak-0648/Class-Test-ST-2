//Name: Sarthak Garg
//Roll No: 2010990648
//Group No: 21
//Set No: 5
//Question 1

#include <iostream>
#include <unordered_map>
using namespace std;
 
void MaxLenSubarray(int nums[], int n, int S)
{
 
    unordered_map<int, int> map;
 
    map[0] = -1;
 
    int tar = 0;
 
    int len = 0;

    int ending_index = -1;
 
    // traverse the given array
    for (int i = 0; i < n; i++)
    {
        // sum of elements so far
        tar += nums[i];
 
        // if the sum is seen for the first time, insert the sum with its
        // into the map
        if (map.find(tar) == map.end()) {
            map[tar] = i;
        }
 
        if (map.find(tar - S) != map.end() && len < i - map[tar - S])
        {
            len = i - map[tar - S];
            ending_index = i;
        }
    }
     
    // print the subarray
    cout<<"The longest subarray is ";
    cout<<"{";
    for(int i=(ending_index - len + 1);i<=ending_index;i++)
    {
        cout<<nums[i]<<",";
    }
    cout<<"}";
    cout<<" having length "<<(ending_index - (ending_index - len + 1) +1);
}
 
int main()
{
    int nums[] = { 5, 6, -5, 5, 3, 5, 3, -2, 0 };
    int tar = 8;
	cout<<"Subarray with sum "<<tar<<" are"<<endl;
    int n = sizeof(nums) / sizeof(nums[0]);
 
    MaxLenSubarray(nums, n, tar);
 
    return 0;
}