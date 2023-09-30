# Hashing

**Q1. Let's ask ourself what on the programming play ground is this weirdly sounding term Hashing and why do i even need that mate can't i use my existing knowledge to get my thing's done ?**

*Ok Let's consider you are genius as KK then give me the frequency of each of the element in the below set of elements in a array in a way i can fetch result in constant time complexity*

```cpp
int arr=[1,2,9,8,7,6,4,3,2,1,3,5,6,7,8];
```

*Brute force method would be traverse whole array and search for a specific element and take a variable and increment it in the old fashion but the total cost of the operation is O(N) O(1) nahi heh*

```cpp
    int ctr=0;
for(int i=0;i<arr.size();++i)
    {
        if(arr[i]==value) ctr++;
    }
```
|Here We GO|
|--------------------------------------------------------------------------------------------|
![image](https://miro.medium.com/v2/resize:fit:678/0*ouBkTMgA_yg_Etfz.png)
|**O(N) -> Time complexity mate. hamara company seh customer chala jayanga itna slow heh toh**|

**Think Think Think here comes KK -> jab O(1) time complexity jahiya when reteriving the information vaisa deina vali data strcuture konsa heh

Array meh O(1) hoga nah jab bhi koi value koh retrive korogah toh through specifying index

TOh index ek ek index meh ek ek value ka frenquency rahi heh ghi toh reterival easy hoga nah 

Par us kaliya hamha O(N) space dehana padega kyu ki joh array meh eh sab values heh usko tum replace nahi kar saktha hoh

```cpp
int arr_freqency[arr.size()]={0};
```

Uppar meh default values for all index's zero isilya deya ki hama ab tak actual array nahi dekaha heh isheh update karna kaliaya aur update opeartion meh bas increment or decrement seh kam hooo jayaga assignement ki jarurat nahi padega.

Abn traverse karo aisa ki jo bhi value ayaga uski index dusra array meh kaha heh vaha jaka uska value ko increment karo

```cpp
for(int &x:arr) arr_freqency[x]++;
```

**



