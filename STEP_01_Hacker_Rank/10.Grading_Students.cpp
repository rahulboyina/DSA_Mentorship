/*


	URL : https://www.hackerrank.com/challenges/grading/problem?isFullScreen=true

*/

// CODE


vector<int> gradingStudents(vector<int> grades) {

    for(int &x:grades)
    {
        if(x<38) continue;
        else{
            int mod=x%5;
            if((5-mod)<3)
            {
                x+=(5-mod);
            }
        }
    }
    return grades;
}

