/*


	URL : https://www.hackerrank.com/challenges/staircase/problem?isFullScreen=true

*/

// CODE


void staircase(int n) {
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n-i-1;++j)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<"#";
        }
        cout<<endl;
    }
}

