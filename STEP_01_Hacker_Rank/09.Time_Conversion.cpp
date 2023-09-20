/*


	URL : 	https://www.hackerrank.com/challenges/time-conversion/problem?isFullScreen=true

*/

// CODE 


string timeConversion(string s) {
    char flag=s[8];
    int add=0;
    int hr1 =(int)s[0],hr2=(int)s[1];
    if(flag=='P'&!(hr1==49&&hr2==50))
    {if(hr2>55)
    {if(hr2==56){hr2=48;hr1+=2;}
    else{hr2=49;hr1+=2;}}
    else{hr1++;hr2+=2;}}
    else if(flag=='A' && hr1==49 && hr2==50)
    {hr1=48;hr2=48;}
    s[0]=(char)hr1;
    // cout<<hr2<<endl;
    s[1]=(char)hr2;
    s.pop_back();
    s.pop_back();
    return s;
}

