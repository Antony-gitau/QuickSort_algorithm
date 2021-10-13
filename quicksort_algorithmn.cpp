#include<iostream>
using namespace std;

// partition function
int partition(int *a, int start, int end){
    int pivot = a[end]; // take the pivot as the element furthest on the right
    int partitionindex = start; //set the partition index as start initially

    for (int i = start; i < end; i++){ //loop through the elements
        if(a[i] <= pivot) // check whether the element is less that pivot
        {
            swap(a[i],a[partitionindex]); //swap the elements
            partitionindex++;
        }

    }
    swap(a[partitionindex], a[end]);//swap the partition index with pivot
    return partitionindex;
}

//quicksort function
void quicksort(int *a, int start, int end){

    if (start < end) {
        int partitionindex = partition(a, start, end); // calling partition
        quicksort(a, start, partitionindex-1); //recursive call left side
        quicksort(a, partitionindex+1, end); // recursive call right side
    }
}
int main(){
    int a[] = {7,60,54,3,2,1,20}; //array elements
    quicksort(a,0,6); //call the sort function
    
    //print the sorted elements
    for (int i=0; i<7;i++){
        cout<<a[i]<<" ";
    }
}