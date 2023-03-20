class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    
    
    long long maxSubarraySum(int arr[], int n)
    {
       int sum=0,i;
       int max=INT_MIN;
       for(i=0;i<n;i++)
       {
           sum=sum+arr[i];
           if(sum>max)
           {
               max=sum;
               //max=max+sum;
               //y max ko bada lena ki sum ko bada lena h m confusion rhta h
               //t-- loopp  k ky use h 
               
           }
           if(sum<0)
           {
               sum=0;
           }
       }
       return max;
       
        
    }
};