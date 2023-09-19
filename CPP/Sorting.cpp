/*

sort(start,end,optional opertions)

Sort in Ascending order.

-> sort(arr.begin(),arr.end());

Sort in Descending order.

-> sort(arr.rbegin(),arr.rend()); or sort(arr.begin(),arr.end(),greater<int>);

Sort according to a condtion in an container elements in Ascending or Descending order.

-> Here we need Lambda Functions in CPP 

Keyword Variable 	Array repsentation([])		Will take 2 parameters

auto comp = [](pair<int,int> &x,pair<int,int> &y)
{
	return x<y;
	// The above is an CONDITION will either return true or false
	// TRUE -> x is less than y;
	// FALSE -> x is greater than y;
}; // SEMICOLON is must.

*/
