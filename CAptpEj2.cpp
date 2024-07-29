#include<iostream>
#include<vector>

using namespace std;

int subarraySum(vector<int>& nums, int k) {
        int i, j, total = 0, suma = 0;
        i = 0;
        j = 0;

        while(i < nums.size() || j < nums.size())
        {
            if(i == j && j == k)
            {
                total++;
                j++;
                suma = 0;
            }
            if(nums[i] + nums[j] != k)
            {
                if(j == nums.size())
                {
                    
                }
                suma += nums[j];
                j++;
            }
        }

        return 0;
    }

int main(int argc, char const *argv[])
{
    vector<int> numbers(3);
    int k;
    cin>>k;
    for (int i = 0; i < 3; i++)
    {
        int aux;
        cin>>aux;
        numbers.push_back(aux);
    }

    subarraySum(numbers, k);
    
    return 0;
}
