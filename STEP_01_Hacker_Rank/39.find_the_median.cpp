/*
	URL : https://www.hackerrank.com/challenges/find-the-median/problem?isFullScreen=true
*/

// CODE

void ins_sort(vector<int> &arr)
{ // Insertion SORT
    for(int i=1;i<arr.size();i++)
    {
        int key=arr[i];
        
        int j=i-1;
        
        while(j>=0 && key<arr[j])
        {
            arr[j+1]=arr[j];
            --j;
        }
        arr[j+1]=key;
        
    }
}

int findMedian(vector<int> arr) {
ins_sort(arr);
int s=0,e=arr.size()-1;
// To avoid overflow we follow below method for finding median
int median = s+(e-s)/2;

return arr[median];

}

