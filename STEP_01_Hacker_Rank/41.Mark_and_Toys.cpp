/*

	URL : https://www.hackerrank.com/challenges/mark-and-toys/

*/

// CODE 

int maximumToys(vector<int> prices, int k) {

sort(prices.begin(),prices.end());

int sum=0,ctr=0;

for(int &x:prices){sum+=x;if(sum<=k){ctr++;}else{break;}}

return ctr;

}

