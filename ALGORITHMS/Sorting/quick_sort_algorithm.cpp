/*

We have a concept called pivot(a element in the container)

all the elements LESS than pivot -> they will be present in the LEFT hand SIDE.

all the elements MORE than pivot -> they will be present in the RIGHT hand SIDE.

ex: 1 5 3 2 4

pivot  : 4

	1	2	3	<4>	 5
	Partion - 01 			Partion - 02
The method followed here is DIVIDE and CONQUER -> Partion's are made and each partion is a conquered using 
recursion

Pivot element can be considered as -> First , Middle , Last element.



*/
