/*
URL : https://www.google.com/url?q=https://www.hackerrank.com/challenges/cavity-map?isFullScreen%3Dtrue&sa=D&source=docs&ust=1695017965445547&usg=AOvVaw2Y8Pu8aCCeB-TgppOkddNw
*/

// CODE

vector<string> cavityMap(vector<string> grid) {

/*
    Algorithm
    
    cavaity is considered in between not in edge 
    
    map given is n*n so each row is of size n
    
    traverse each row and check if there is an high difference in
    middle elements
    
    if so replace that with x;
    
*/

vector<string> ans;
// Finding size of matrix of size NxN
int size=grid.size();

for(int i=1;i<size-1;++i) // We are excluding borders of the rows
{


    for(int j=1;j<size-1;j++) // We are excluding borders of columns
    {
        int map_val=static_cast<int>(grid[i][j]);
        int n,s,e,w;
        n=static_cast<int>(grid[i-1][j]);
        s=static_cast<int>(grid[i+1][j]);
        w=static_cast<int>(grid[i][j-1]);
        e=static_cast<int>(grid[i][j+1]);
        if(map_val>n && map_val>s && map_val>w && map_val>e)
        {
            grid[i][j]='X';
        }
    }
}
return grid;
}
