/*

	URL :	https://www.hackerrank.com/challenges/kangaroo/problem?isFullScreen=true

*/

// CODE


string kangaroo(int x1, int v1, int x2, int v2) {
// Algorithm 

// Constrainsts given 
// i. x1 always LESS than x2.
// ii. v1 and v2 are the two respective velocity's of x1 & x2.

// 00. Declare a string variable to store ANSWER.

string ans="NO";

// 01. since x1<x2 if we have v1<v2 then x1 will always fall behind x2 there is not move which will put the x1 forward of x2.
// 02. if v1=v2 then also they will maintain the constant distance for every jump they would be doing so they will never meet in this scenario as well.

if(v1<=v2) ans="NO";
// 03. if v1>v2 there are two possible chances 
//      I. There exist a constant distance when in a way where x2 will surpass the x1 with in inital step only.
//      II. If there comes a step where x1==x2 then we need to find the exact step at which they meet
/*
x1+t*v1=meet_point
x2+t*v2=meet_point

x1+t*v1=x2+t*v2

x1-x2=t*v2-t*v1

x1-x2=t(v2-v1)

(x1-x2)/(v2-v1) = t

(x1-x2)%(v2-v1) == 0 -> perfectly divisible then we can say they coincide.

*/
else if((x1-x2)%(v2-v1) == 0)
{
    ans="YES";   
}
// RETURN THE ANSWER TO THE PARENT FUNCTION CALLING IT.
return ans;
}

