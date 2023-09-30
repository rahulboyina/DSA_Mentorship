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





