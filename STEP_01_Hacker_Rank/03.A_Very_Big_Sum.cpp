/*

	URL : https://www.hackerrank.com/challenges/a-very-big-sum/problem?isFullScreen=true


*/

// CODE


long aVeryBigSum(vector<long> ar) {
    long sum=0;
    
    for(auto &x:ar) sum+=x;
    
    return sum;
}

