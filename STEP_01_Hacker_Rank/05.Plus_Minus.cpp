/*


		URL : https://www.hackerrank.com/challenges/plus-minus/problem?isFullScreen=true

*/

// CODE


void plusMinus(vector<int> arr) {
    // Algorithm
    // 01. Declare variables to keep track of Postive,Negative,Zero values.
int p=0,n=0,z=0,s=arr.size();
    // 02. Iterate over the array to find the count of Postive,Negative,Zero values.
for(int &i:arr){if(i>0){p++;}else if(i<0){n++;}else {z++;}}
    // 03. Set precision will give the value beyond the decimal point till the number specified.
    // 04. Decimal values are only obtained for the double or float so we type cast the numerator of Postive,Negative,Zero counts.
cout<<setprecision(6)<<static_cast<double>(p)/s<<endl;
cout<<setprecision(6)<<static_cast<double>(n)/s<<endl;
cout<<setprecision(6)<<static_cast<double>(z)/s<<endl;
}

