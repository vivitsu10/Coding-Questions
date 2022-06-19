/* Given an array of integers Arr of size N and a number K. Return the maximum sum of a subarray of size K. 
N = 4, K = 2
Arr = [100, 200, 300, 400]
Output:
700 */

class Solution{   
public:
    long long int maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        long long int i=0,j=0,sum=0,maxi=INT_MIN;
        while(j<N)
        {
            sum+=Arr[j];
            if(j-i+1<K)
                j++;
            else if(j-i+1==K)
            {
                maxi=max(sum,maxi);
                sum-=Arr[i];
                i++;
                j++;
            }
        }
        return maxi;
    }
};
