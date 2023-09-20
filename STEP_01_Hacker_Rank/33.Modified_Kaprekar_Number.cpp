/*

	URL :	https://www.hackerrank.com/challenges/kaprekar-numbers/problem?isFullScreen=true

*/

// CODE


void kaprekarNumbers(int p, int q) {

// Algorithm 

// Constraints 
// I. number n with d digits -> SQUARE(n)=X will either 2*d or 2*d -1 LONG.
// II. X must be split into two halfs in the below
//      1. right -> d digit's long (same length on n)
//      2. left ->  (sizeOf(x)-d) digit's long.
/// III. if (right+left) Equals n print 'n'
/// IV.  if there isn't any number as above in the given range print 'INVALID RANGE'.

// Algorithm

// 01. Iterate over the limit from p to q and declare a bool variable to validate if we found any number.

bool  flag=true;
for(int i=p;i<=q;++i)
{
// 02. If the square of the number is of lenght is 1 then left and right concept of no use we took this as an special case for these three numbers.
    if(i>=0&&i<=3)
    {
        if(i==1) cout<<i<<" ";
        continue;
    }
// 03. finding the length of the digit.
    int d = to_string(i).length();
// 04. since the range could be 10 power 5 so we need 64 bit integer to accomidate it.
    long long square = (long long )i*(long long )i;
// 05. Take three strings to accomidate the room for the left , right , square form of the number.
    string left="",right="",str="";
//06. Convert the square Integer to string. 
    str=to_string(square);
//07. Obtain the substring of the right part of the square of legnth d.
    right=str.substr(str.length()-d,d);
//08. Obtain the substring of the left part of the square of legnth square length - length of left subpart.
    left=str.substr(0,str.length()-right.length());
//09.convert the strings to the integers and sum right and left part and see if they are equal to i.
    if((stoll(left)+stoll(right))==i)
    {
//10. If they match the condition print that number and mark flag as false indicating we found atleast one number. 
        cout<<i<<" ";
        flag=false;
    } 
    
}
//11. If we haven't found any number then flag will remain true then this 'INVALID RANGE' will be printed out.
if(flag) cout<<"INVALID RANGE";
}

