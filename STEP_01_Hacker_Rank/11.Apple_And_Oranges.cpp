/*


		URL :	https://www.hackerrank.com/challenges/apple-and-orange/problem?isFullScreen=true

*/

// CODE


void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    
    int ap=0,oo=0;
    for(auto &x:apples) {x+=a; if(x>=s && x<=t){ap++;}}
    for(auto &x:oranges) {x+=b; if(x>=s && x<=t){oo++;}}
    
    
    
    cout<<ap<<"\n"<<oo;   
    
}
