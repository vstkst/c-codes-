

//User function Template for C++

void rotate(int arr[], int n)
{
     int i,temp;
     temp=arr[n-1];
     for(i=n-1;i>0;i--)
     {
         arr[i]=arr[i-1];
     }
     arr[0]=temp;
   
   
   
    
}