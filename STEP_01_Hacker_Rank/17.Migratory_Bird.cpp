/*


	URL:	https://www.hackerrank.com/challenges/migratory-birds/problem?isFullScreen=true

*/

// CODE


int migratoryBirds(vector<int> arr) {
    vector<int> freq={0,0,0,0,0,0};
    
    for(int &x:arr) freq[x]++;
    int max=INT_MIN,ind=-1;
    for(int j=freq.size()-1;j>0;--j) if(freq[j]>=max){max=freq[j];ind=j;}
    return ind;
}
