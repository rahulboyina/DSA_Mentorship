/*

	URL : https://www.hackerrank.com/challenges/sherlock-and-array/problem?isFullScreen=true

*/


// CODE


string balancedSums(vector<int> arr) {
// Can be solved using sliding window method 
// As there is an fixed criteria as LHS = RHS excluding pivot element
// Algorithm

// 01. Get sum of all the numbers.

int total=0;
for(int &i:arr) total+=i;

// 02. Now we know that we need to exlude the atleast two elements the total size should be atleast 3 -> L p R -> L==R
// But as per sample tc we can say l or r can be completely zero with no elements

// So lets get sum 
// go from index zero considering left sum =0
// rigth sum = total sum - left_sum - current element
// left_sum = sum of the current pivot element at end.


int left_sum=0,right_sum=total;
for(int i=0;i<arr.size();++i)
{
    //
    right_sum=total-left_sum-arr[i];
    if(left_sum==right_sum)
    {
        return "YES";
    }
    left_sum+=arr[i];
}
return "NO";
}

