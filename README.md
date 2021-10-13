# QuickSort_algorithm

`PSEUDOCODE`

This is how i solved this sorting task

- created a partition function

  ---
  - This function takes three variables: array, start and end of the array
  - stores a pivot (i decide to take the furthest element on the right) variable
  - also a partition index variable (i decided to make it the start)
  - loop through all the elements
  - if the element is less than pivot, swap it with partition index and increment the index
  - after looping through, swap the partition index with the pivot index
  - then return the partition index
  
  ---
- created a sort function

  ---
  - make sure start element is less than end (there is more than one element)
  - call the partition index to get the partition index
  - recursively call the right and left side of the partition index
  
  ---

- called the sort function in `main function` and print the sorted elements.
