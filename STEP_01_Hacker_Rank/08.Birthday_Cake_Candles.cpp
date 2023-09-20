/*


	URL :	https://www.hackerrank.com/challenges/birthday-cake-candles/problem?isFullScreen=true

*/

// CODE


int birthdayCakeCandles(vector<int> candles) {
int max=INT_MIN;
for(int i=0;i<candles.size();++i)
{
    if(candles[i]>max){max=candles[i];}
}
int ctr=0;
for(int i=0;i<candles.size();++i)
{
    if(candles[i]==max){ctr++;}
}
return ctr;
}

