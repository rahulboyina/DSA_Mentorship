/*


	URL: 	https://www.hackerrank.com/challenges/day-of-the-programmer/problem?isFullScreen=true

*/

//CODE



string dayOfProgrammer(int year) {
    string str="";
    if(year==1918){
    str="26.09."+to_string(year);
    }
    else if(year>1918)
    {
        if(year%400==0|| (year%4==0 && year%100!=0))
        {
            str="12.09."+to_string(year);
        }
        else{
            str="13.09."+to_string(year);
        }
    }
    else{
            if(year%4==0)
            {
                str="12.09."+to_string(year);
            }
            else{
                str="13.09."+to_string(year);
            }
        
        }
    
return str;

}
