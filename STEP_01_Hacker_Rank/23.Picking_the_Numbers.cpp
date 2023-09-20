/*

	URL : https://www.hackerrank.com/challenges/picking-numbers/problem?isFullScreen=true

*/

// CODE 


int pickingNumbers(vector<int> a) {
    // Algorithm
    
    // 01. Sort the Vector elements.
sort(a.begin(),a.end());
    // 02. Initalize three variables one for greatest length , keep track of current length, current position of the element we are comparing the rest of the elements.
int len=0,temp=0,pos=0;
    // 03. Iterating over the vector from postion 1 as postion 0 will be the element we will be comparing the rest of the elements with initally.
for(int i=1;i<a.size();++i)
{
    // 04. If the difference of the elements in the vector and our current position element is Less than or Equal to ONE till this condition isn't been broken inital postion element will remain the same when it breaks the breaking point will become the new position element.
    if(a[i]-a[pos]<=1)
    {
        // Increase temproray length counter everytime the differnce is less than or equal to 1.
        temp++;
        // If in case temp length is greater than greatest length we have seen so far we can replace the greatest length with temp length.
        if(temp>len){len=temp;}
    }
    //  If in case the difference between elements is greater than 1 then we have start the same process from that postion considering thtat element as the position element we will be looking for the difference from the remaining elements.
    else{temp=0;pos=i;} //  Temp length counter set to ZERO to start a new journey and position to the last breaking point position.
}
    // Since we are looking for the difference between two elements if the difference count is X then there are X+1 elements invlolved in acheving this.
    // If the length is only Zero then there is no point of increamenting it.
return len>0?len+1:0;
}

