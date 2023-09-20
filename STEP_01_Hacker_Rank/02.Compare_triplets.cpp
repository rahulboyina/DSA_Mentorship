/

	URL :	https://www.hackerrank.com/challenges/compare-the-triplets/problem?isFullScreen=true

/

// CODE


vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int at=0,bt=0;
    
    for(int i=0;i<a.size();++i)
    {
        if(a[i]>b[i]) at++;
        else if(a[i]<b[i]) bt++;        
    }
     return {at,bt};
}

