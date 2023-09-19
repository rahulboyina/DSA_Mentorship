/*

	URL : https://www.hackerrank.com/challenges/missing-numbers/problem?isFullScreen=true

*/

// CODE 


vector<int> missingNumbers(vector<int> arr, vector<int> brr) {
// Use map to store frequency's 
unordered_map<int,int> a,b;
// Store array one frequency
for(int &i:arr) a[i]++;
// Store array two frequency
for(int &i:brr) b[i]++;
// Vector will store the value for the answer.
vector<int> ans;
// The map will have values of pair in each row but it's a convention to use the AUTO keyword.
for(pair<int,int> pair:b)
{
    // Store the Number
    int num=pair.first;
    // Store the Frequency
    int freq=pair.second;
    // if the number frequency in array a is less than that off array b then push the value into the ANS vector.
    if(a[num]<freq){ans.push_back(num);}
}
// Sort the ANSWER Vector
sort(ans.begin(),ans.end());
// Return the answer Vector
return ans;
}

