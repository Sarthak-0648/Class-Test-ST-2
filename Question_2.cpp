//Name: Sarthak Garg
//Roll No: 2010990648
//Group No: 21
//Set No: 5
//Question 2

//Print all subarrays with sum 0
//Given an integer array, print all subarrays with zero-sum

#include <iostream>
#include <unordered_map>
using namespace std;

// In a given array
void printAllSubarrays(int nums[], int n)
{
    // We are taking all subarrays starting from i
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
 
        // We are taking all subarrays ending at j
        for (int j = i; j < n; j++)
        {
            // sum of elements till now
            sum += nums[j];
 
            // if the sum is seen before, we have found a subarray
            // with zero-sum
            if (sum == 0) {
                cout<<"{";
                for(int it=i;it<=j;it++)
                {
                    cout<<nums[it]<<",";
                }
                cout<<"}";
                cout<<endl;
            }
        }
    }
}

//Main Code or Driver Code
 
int main()
{
    cout<<"Subarrays with zero-sum are"<<endl;
    int nums[] = { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
    int n = sizeof(nums)/sizeof(nums[0]);
 
    printAllSubarrays(nums, n);
 
    return 0;
}
