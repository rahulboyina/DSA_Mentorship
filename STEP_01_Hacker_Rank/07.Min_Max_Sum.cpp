/*

URL :	https://www.hackerrank.com/challenges/mini-max-sum/problem?isFullScreen=true

*/

// CODE


void miniMaxSum(vector<int> arr) {
sort(arr.begin(),arr.end());

long long sum=0,min,max;

for(int &i:arr) sum+=i;

if(arr.size()<=1)
{
 max=arr[0];
 min=arr[0];   
}
else 
{    
min=sum-arr[arr.size()-1];
max=sum-arr[0];
}
// cout<<sum;
cout<<min<<" "<<max;

}

