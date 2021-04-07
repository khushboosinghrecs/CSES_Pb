#include <iostream>
using namespace std;

struct student
{
    int rollnum;
    string name;
    int marks;
    student(){};
    student(int rollnumber, string name, int marks)
    {
        (*this).rollnum = rollnumber;
        (*this).name = name;
        (*this).marks = marks;
    }
};

void swap(student *a, student *b)
{
    student t = *a;
    *a = *b;
    *b = t;
}

/* This function takes last element as pivot, places  
the pivot element at its correct position in sorted  
array, and places all smaller (smaller than pivot)  
to left of pivot and all greater elements to right  
of pivot */
int partition(student arr[], int low, int high)
{
    int pivot = arr[high].marks; // pivot
    int i = (low - 1);           // Index of smaller element

    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j].marks < pivot)
        {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// it is correct.
/* The main function that implements QuickSort  
arr[] --> Array to be sorted,  
low --> Starting index,  
high --> Ending index */
void quickSort(student arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now  
        at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

main()
{
    freopen("input.txt", "r", stdin);
    student s[10];
    for (int i = 0; i < 10; i++)
    {
        int rollno;
        string name;
        int marks;
        cin >> rollno >> name >> marks;
        s[i] = {rollno, name, marks};
    }
    quickSort(s, 0, 9);
    for (int i = 0; i < 10; i++)
    {
        cout << s[i].rollnum << ' ' << s[i].name << ' ' << s[i].marks << '\n';
    }
}