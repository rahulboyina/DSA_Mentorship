/*


	URL : https://www.hackerrank.com/challenges/diagonal-difference/problem?isFullScreen=true

*/

// CODE


int diagonalDifference(vector<vector<int>> arr) {
    int d1=0,d2=0,size=arr[0].size();
    for(int i=0;i<size;++i)
    {
        d1+=arr[i][i];
        d2+=arr[i][size-1-i];
    }
    return abs(d1-d2);
}

