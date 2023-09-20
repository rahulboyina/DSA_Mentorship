/*

	URL : https://www.hackerrank.com/challenges/between-two-sets/problem?isFullScreen=true

*/

// CODE


int getTotalX(vector<int> a, vector<int> b) {
    
    // Brute Force Approach 
    
    int start = *max_element(a.begin(),a.end());
    int stop = *min_element(b.begin(),b.end());
    int ctr=0;
    for(int i=start;i<=stop;i++)
    {
        bool flag=true;
        for(auto &x:a){if(i%x==0) continue; else{flag=false;break;}}
        if(flag)
        {for(auto &x:b){if(x%i==0) continue;else{flag=false;break;}}}
        if(flag){ctr++;}
    }
    return ctr;
}
