//Que  1
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
/*struct Node
{
    int rollno;
    string name;
    Node()
    {
    }
    // Node(int rollno,string name)
    // {
    //     // this->rollno  = rollno;
    //     // this->name = name;
    //     (*this).name = name;
    //     (*this).rollno = rollno;
    // }

    // Node(int rn,string ne)
    // {
    //     rollno = rn;
    //     name = ne;
    // }

    // Node(int rollno, string name) : rollno(rollno), name(name){};   not for use

    
};
*/

struct Student
{
    int rollno;
    string name;
    int marks;

    Student() {} //it will use in making instance of Student
    Student(int rollno, string name, int marks)
    {
        (*this).name = name;
        (*this).marks = marks;
        (*this).rollno = rollno;
    }

    void updatemarks(int marks)
    {
        this->marks = marks;
    }

    int get_marks() { return marks; }
};

int main()
{
    Student arr[10];
    arr[0] = {15, "Ankit", 78};
    arr[1] = {27, "Khushi", 75};
    arr[2] = {28, "Krishna", 69};
    arr[3] = {42, "Rohit", 74};
    arr[4] = {52, "Shivam", 80};

    for (int i = 0; i < 5; i++)
    {
        int k = i;
        for (int j = i; j < 5; j++)
        {
            if (arr[j].marks < arr[k].marks)
            {
                k = j;
            }
        }

        Student temp = arr[i];
        arr[i] = arr[k];
        arr[k] = temp;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i].rollno << ' ' << arr[i].name << ' ' << arr[i].marks << '\n';
    }

    cout << arr[0].get_marks() << '\n';
    return 0;
}