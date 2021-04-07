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
int partition(student a[], int l, int h)
{
    int i = l, j = h;
    int pivot = a[l].marks;
    do
    {
        do
        {
            i++;
        } while (a[i].marks <= pivot);
        do
        {
            j--;
        } while (a[j].marks > pivot);
        if (i < j)
            swap(a[i], a[j]);
    } while (i < j);
    swap(a[l], a[j]);
    return j;
}

void quicksort(student a[], int l, int h)
{
    int j;
    if (l < h)
    {
        j = partition(a, l, h);
        quicksort(a, l, j - 1);
        quicksort(a, j + 1, h);
    }
}
int main()
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
    quicksort(s, 0, 9);
    for (int i = 0; i < 10; i++)
    {
        cout << s[i].rollnum << ' ' << s[i].name << ' ' << s[i].marks << '\n';
    }

    return 0;
}
// what happend ?
// in quicksort i use j-1, ratherr than j
// you can see that is standard algorithm and  everywhere you will find j-1;
// but thts mine n...
// check
// ohk lets check thodi si pb h
// code hawa me nahi likhe jate ? eklin
// logic na sahi lagai hu,,, bs thodi si pb h,,, dekhne do.. mujhe nhi logic glt h.. hawa m sare ans hwa m ate
//...do it
