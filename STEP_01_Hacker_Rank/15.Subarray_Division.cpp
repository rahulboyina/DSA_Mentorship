/*


	URL :	https://www.hackerrank.com/challenges/the-birthday-bar/problem?isFullScreen=true


*/

// CODE


int birthday(vector<int> s, int d, int m) {
    int ctr=0;
    for(int i=0;i<s.size();++i)
    {// 1 2 1 3 2
        int y=0;
        for(int j=i;j<(i+m) && j<s.size();++j)
        {
            y+=s[j];
        }
        if(y==d){ctr++;}
    }
    return ctr;
}

