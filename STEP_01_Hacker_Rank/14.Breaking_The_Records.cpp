/*


	URL :	https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem?isFullScreen=true

*/

// CODE


vector<int> breakingRecords(vector<int> scores) {
int min=scores[0],max=scores[0],min_ctr=0,max_ctr=0;

for(int &x:scores){if(x>max){max=x;max_ctr++;}else if(x<min){min=x;min_ctr++;}}
return {max_ctr,min_ctr};
}

