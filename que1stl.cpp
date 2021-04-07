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
};

int main()
{
    Student arr[10];
    arr[0] = {15, "Ankit", 78};
    arr[1] = {27, "Khushi", 75};
    arr[2] = {28, "Krishna", 69};
    arr[3] = {42, "Rohit", 74};
    arr[4] = {52, "Shivam", 80};

    //Your Job is to use STL for sorting 
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i].rollno << ' ' << arr[i].name << ' ' << arr[i].marks << '\n';
    }
    return 0;
}