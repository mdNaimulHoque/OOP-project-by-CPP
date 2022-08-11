#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    char section;
    int roll;

protected:
    int english_marks;

private:
    string password;

public:
    void set_password(string pass)
    {
        password = pass;
    }
    void set_marks(int marks)
    {
        english_marks = marks;
    }
    int get_mark()
    {
        return english_marks;
    }
    void update_marks(string pass, int marks)
    {
        if (pass == password)
        {
            english_marks = marks;
        }
        else
        {
            cout << "Password didn't match";
        }
    }
};

int main()
{
    int n;
    cout << "Enter number of student: ";
    cin >> n;
    Student st[n];

    for (int i = 0; i < n; i++)
    {
        string name, password;
        char section;
        int roll, marks;
        cout << "Enter student no." << i + 1 << " Name, section, roll, marks, password" << endl;
        cin >> name >> section >> roll >> marks >> password;
        st[i].name = name;
        st[i].section = section;
        st[i].roll = roll;
        st[i].set_marks(marks);
        st[i].set_password(password);
    }

    // update marks
    cout<<endl;
    cout << "You can update marks" << endl;
    cout << "Update marks: Press y" << endl;
    cout << "or" << endl;
    cout << "Not Update marks: Press n" << endl;
    char ch;
    cin >> ch;
    if (ch == 'y')
    {
        cout<<endl;
        int roll, marks;
        string password;
        cout << "Update marks:" << endl;
        cout << "Provide roll, marks, password" << endl;
        cin >> roll >> marks >> password;
        bool found = false;

        for (int i = 0; i < n; i++)
        {
            if (st[i].roll == roll)
            {
                found = true;
                st[i].update_marks(password, marks);
            }
            cout<<"update successfull"<<endl;
        }

        // student not found
        if (!found)
        {
            cout << "Student not found!" << endl;
            return 0;
        }
        cout<<endl;
        for (int i = 0; i < n; i++)
        {
            cout << st[i].name << " " << st[i].section << " " << st[i].roll << " " << st[i].get_mark() << endl;
        }
    }
    else if (ch == 'n')
    {
        cout<<endl;
        for (int i = 0; i < n; i++)
        {
            cout << st[i].name << " " << st[i].section << " " << st[i].roll << " " << st[i].get_mark() << endl;
        }
    }

    return 0;
}
