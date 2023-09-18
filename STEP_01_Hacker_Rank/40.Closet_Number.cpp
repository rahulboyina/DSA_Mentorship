/*

	URL : https://www.hackerrank.com/challenges/closest-numbers/problem?isFullScreen=true

*/

// CODE

// TO SORT I AM USING INSERTION SORT ALGORITHM
void ins_sort(vector<int> &arr)
{
    for(int i=1;i<arr.size();++i)
    {
        int key=arr[i];
        int pr=i-1;
        while(pr>=0 && key<arr[pr])
        {
            arr[pr+1]=arr[pr];
            pr--;
        }
        arr[pr+1]=key;
    }
}

vector<int> closestNumbers(vector<int> arr) {
ins_sort(arr);
// Vector to store the pairs as Answers
vector<int> pair;
// MN for minimum value and range to setup the iteration range
int mn=INT_MAX,range=arr.size(),i=0;

while(i<range-1)
{
    // Calculating the minimum difference between 2 adjacent elements in the sorted array.
    mn=min(mn,abs(arr[i]-arr[i+1]));
    i++;
}
for(i=0;i<arr.size()-1;++i)
{   // when we are traversing to find the adjacent elements which could produce the same minimum difference found before.
    if(abs(arr[i]-arr[i+1])==mn)
    {
        pair.push_back(arr[i]);
        pair.push_back(arr[i+1]);
    }
}

return pair;

}

