/*
	URL : https://www.hackerrank.com/challenges/jim-and-the-orders/problem?isFullScreen=true
*/

// CODE 


// This is an comparision function which is used to validate a condtion with which our sort function will validate.
// Has two vectors as an arguments each representing one row in a 2D matrix
bool cmp(const vector<int>& a, const vector<int>& b) {
    // If the two values are equal (TIME) then compare the customer id
    // ex : time 5 5 customer is 97 23
    // As per below condition we will compare the customer id 97<23 which is false so swap action will be carried out according to the response.
    if(a[1]==b[1]) return a[0]<b[0];
    // If delivery time of 1st is less than 2nd.
    return a[1] < b[1];
}

vector<int> jimOrders(vector<vector<int>> orders) {
    // Vector to store the answer's to send.
vector<int> ans;
// Iterating through 2D vector vertically
for(int i=0;i<orders.size();++i)
{
    // Summing the values horizontally from index 0 and 1.
    int sum=orders[i][0]+orders[i][1];
    // once we got the SUM the values in the index's holds no use
    // So replace them with the result which could be useful for our operations.
    // Index 0 -> customer ID's
    orders[i][0]=i+1;
    // Index 1 -> Sum of the Order Id + Preperation Time 
    orders[i][1]=sum;
}
// Sort the array which is updated the values we got from the operations
// arguments -> starting position , ending position , Comparsion function to validate certain conditions.
sort(orders.begin(),orders.end(),cmp);
// Iterationg through the array after sorting as per our conditions and then we are pushing it into an Vector to send the answer's to parent function.
for(int i=0;i<orders.size();++i)
{
    // Pushing values to the end of the Vector Function.
    ans.push_back(orders[i][0]);
}
// Returning the answer VECTOR @RRAY.
return ans;
}

