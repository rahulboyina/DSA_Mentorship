/*

Insertion sort is a simple and intuitive sorting algorithm that builds the final sorted array one element at a time. It iterates through the list and, for each element,
it finds the right position in the sorted part of the array and inserts it.

Here's a step-by-step explanation of the insertion sort algorithm:

1. **Start from the Second Element**:
   - The first element is considered sorted by default, so we start with the second element.

2. **Compare and Insert**:
   - Compare the current element with the one before it.
   - If the current element is smaller, move the larger element one position ahead to make space for the current element.
   - Continue this process until the correct position for the current element is found.

3. **Repeat for All Elements**:
   - Repeat steps 1 and 2 for all elements in the list.

4. **Final Sorted Array**:
   - After iterating through all elements, the array will be sorted.

Example (Sorting in Ascending Order):
Suppose we have an array `[5, 2, 4, 6, 1, 3]`.

1. Start with the second element (2).
2. Compare with the first element (5). Since 2 < 5, swap them. Now, the array is `[2, 5, 4, 6, 1, 3]`.
3. Move to the third element (4). Compare it with the previous elements and shift them if needed. Now, the array is `[2, 4, 5, 6, 1, 3]`.
4. Continue this process for all elements.

The final sorted array will be `[1, 2, 3, 4, 5, 6]`.

Insertion sort is efficient for small lists or mostly sorted lists but can be inefficient for large lists, especially when compared to more advanced algorithms like 
quicksort or mergesort.

*/

// CODE


