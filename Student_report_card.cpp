#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void os_detection();
void clear_screen();
void pause_screen();
void pause_screen_for_2_sec();
void clear_cin();
void main_menu();
char os;
void os_detection()
{
#if defined(_WIN32) || defined(_WIN64)
    os = 'W';
#else
#ifdef __linux
    os = 'L';
#else
    os = "L";
#endif
#endif
    //return os;
}

void clear_screen()
{
    if (os == 'W')
    {
        system("cls");
    }

    else if (os == 'L')
    {
        system("clear");
    }
}

void pause_screen()
{
    if (os == 'W')
    {
        system("pause");
    }

    else if (os == 'L')
    {
        system("sleep 9");
    }
}

void pause_screen_for_2_sec()
{
    if (os == 'W')
    {
        cout << " ";
    }

    else if (os == 'L')
    {
        system("sleep 2");
    }
}

void clear_cin()
{
    cin.clear();
    cin.ignore(50000, '\n');
}

class student
{
    int rollno;
    string name;
    float p_marks, c_marks, m_marks, e_marks, cs_marks;
    float per;
    char grade;

public:
    void calculate()
    {
        per = (p_marks + c_marks + m_marks + e_marks + cs_marks) / 5;
        if (per >= 60)
            grade = 'A';
        else if (per >= 50 && per < 60)
            grade = 'B';
        else if (per >= 33 && per < 50)
            grade = 'C';
        else
            grade = 'D';
    }

    void inputdata()
    {
        cout << "\t*-`-`-`-`-`-`-\n";
        cout << "\tDetail about student";
        cout << "\n\t*-`-`-`-`-`-`-\n";
        cout << "\n1) Enter The roll number of student: ";
        while (true)
        {
            if (cin >> rollno)
            {
                break;
            }
            else
            {
                clear_cin();
                cout << "Warning!!!! \nPlease enter the roll no in digits  \n";
                cout << "Press any key to enter the roll no again.... ";
                getch();
                clear_screen();
                inputdata();
            }
        }

        cout << "\n2) Enter The Name of student: ";
        clear_cin();
        getline(cin, name);
        cout << "\n\n\t*-*-*-*-*-~*-\n";
        cout << "\t**Input Marks**";
        cout << "\n\t*-*-*-*-*-~*-\n";
        while (true)
        {
            cout << "\n1) Enter Physics marks (0-100): ";
            cin >> p_marks;
            if (cin.good())
            {

                if (p_marks >= 0 && p_marks <= 100)
                {
                    break;
                }
                else
                {
                    cout << "\n-------------\n";
                    cout << "Invalid Input";
                    cout << "\n-------------\n";
                    clear_cin();
                }
            }
            else
            {
                cout << "\n-------------\n";
                cout << "Invalid Input";
                cout << "\n-------------\n";
                clear_cin();
            }
        }

        while (true)
        {
            cout << "\n2) Enter Chemistry marks (0-100): ";
            cin >> c_marks;
            if (cin.good())
            {

                if (c_marks >= 0 && c_marks <= 100)
                {
                    break;
                }
                else
                {
                    cout << "\n-------------\n";
                    cout << "Invalid Input";
                    cout << "\n-------------\n";
                    clear_cin();
                }
            }
            else
            {
                cout << "\n-------------\n";
                cout << "Invalid Input";
                cout << "\n-------------\n";
                clear_cin();
            }
        }

        while (true)
        {
            cout << "\n3) Enter Maths marks (0-100): ";
            cin >> m_marks;
            if (cin.good())
            {

                if (m_marks >= 0 && m_marks <= 100)
                {
                    break;
                }
                else
                {
                    cout << "\n-------------\n";
                    cout << "Invalid Input";
                    cout << "\n-------------\n";
                    clear_cin();
                }
            }
            else
            {
                cout << "\n-------------\n";
                cout << "Invalid Input";
                cout << "\n-------------\n";
                clear_cin();
            }
        }

        while (true)
        {
            cout << "\n4) Enter Englsh marks (0-100): ";
            cin >> e_marks;
            if (cin.good())
            {

                if (e_marks >= 0 && e_marks <= 100)
                {
                    break;
                }
                else
                {
                    cout << "\n-------------\n";
                    cout << "Invalid Input";
                    cout << "\n-------------\n";
                    clear_cin();
                }
            }
            else
            {
                cout << "\n-------------\n";
                cout << "Invalid Input";
                cout << "\n-------------\n";
                clear_cin();
            }
        }

        while (true)
        {
            cout << "\n5) Enter Computer Science marks (0-100): ";
            cin >> cs_marks;
            if (cin.good())
            {

                if (cs_marks >= 0 && cs_marks <= 100)
                {
                    break;
                }
                else
                {
                    cout << "\n-------------\n";
                    cout << "Invalid Input";
                    cout << "\n-------------\n";
                    clear_cin();
                }
            }
            else
            {
                cout << "\n-------------\n";
                cout << "Invalid Input";
                cout << "\n-------------\n";
                clear_cin();
            }
        }

        calculate();
        clear_cin();
    }

    void displaydata()
    {
        cout << "\n\t\t\t\t\t\tRoll number of student : " << rollno;
        cout << "\n\n\t\t\t\t\t\tName of student : " << name;
        cout << "\n\n\t\t\t\t\t\tMarks in Physics : " << p_marks;
        cout << "\n\n\t\t\t\t\t\tMarks in Chemistry : " << c_marks;
        cout << "\n\n\t\t\t\t\t\tMarks in Maths : " << m_marks;
        cout << "\n\n\t\t\t\t\t\tMarks in English : " << e_marks;
        cout << "\n\n\t\t\t\t\t\tMarks in Computer Science :" << cs_marks;
        cout << "\n\n\t\t\t\t\t\tPercentage of student is  :" << setprecision(2) << per;
        cout << "\n\t\t\t\t\t\t Grade of student is :" << grade;
    }

    void all_student_data()
    {
        cout << rollno << "\t  " << name << setw(22 - name.length()) << p_marks << setw(6) << c_marks << setw(6) << m_marks << setw(6) << e_marks << setw(6) << cs_marks << setw(8) << setprecision(3) << per << setw(5) << grade << endl;
    }

    int retrollno()
    {
        return rollno;
    }
}; //class ends here

fstream file;
student st;

void create_student_data()
{
    file.open("student.txt", ios::out | ios::app);
    st.inputdata();
    file.write((char *)&st, sizeof(student));
    file.close();
    cout << "\n\nStudent Record Has Been Created ";
    getch();
}

void display_in_list()
{
    clear_screen();
    clear_cin();
    cout << "\n\n\n**********!! DISPLAYING THE RECORD !!********** \n\n";
    file.open("student.txt", ios::in);
    while (file.read((char *)&st, sizeof(student)))
    {
        st.displaydata();
        cout << "\n\n====================================\n\n";
        cout << "Press any key to see next student record...\n\n";
        getch();
        cout << "====================================\n\n";
    }
    file.close();
    getch();
}

void search_data(int n)
{
    int flag = 0;
    file.open("student.txt", ios::in);
    while (file.read((char *)&st, sizeof(student)))
    {
        if (st.retrollno() == n)
        {
            clear_screen();
            st.displaydata();
            flag = 1;
        }
    }
    file.close();
    if (flag == 0)
        cout << "\n\n!!!!! Record not exist !!!!!";
    getch();
}

void modify_student_data()
{
    int no, found = 0;
    clear_screen();
    cout << "\n\nEnter The Details To Modify ";
    cout << "\n\nPlease Enter The roll number of student : ";
    cin >> no;
    file.open("student.txt", ios::in | ios::out);
    while (file.read((char *)&st, sizeof(student)) && found == 0)
    {
        if (st.retrollno() == no)
        {
            st.displaydata();
            cout << "\n\nPlease Enter The New Details of student" << endl;
            st.inputdata();
            int pos = -1 * sizeof(st);
            file.seekp(pos, ios::cur);
            file.write((char *)&st, sizeof(student));
            cout << "\n\n !!!!! Record Updated !!!!!";
            found = 1;
        }
    }
    file.close();
    if (found == 0)
        cout << "\n\n !!!!! Record Not Found !!!!! ";
    getch();
}

void delete_student_data()
{
    int no;
    clear_screen();
    cout << "\n\n\n***********!! Delete Record !!***********";
    cout << "\n\nPlease Enter The roll number of student You Want To Delete";
    cin >> no;
    file.open("student.txt", ios::in | ios::out);
    fstream file2;
    file2.open("Temp.txt", ios::out);
    file.seekg(0, ios::beg);
    while (file.read((char *)&st, sizeof(student)))
    {
        if (st.retrollno() != no)
        {
            file2.write((char *)&st, sizeof(student));
        }
    }
    file2.close();
    file.close();
    remove("student.txt");
    rename("Temp.txt", "student.txt");
    cout << "\n\nRecord Deleted ..";
    getch();
}

void all_student_result()
{
    clear_screen();
    file.open("student.txt", ios::in);
    if (!file)
    {
        cout << "ERROR!!! FILE COULD NOT BE OPEN\n\n\n First Create Some In The File ";
        cout << "\n\n\n Program is closing ....";
        getch();
        exit(0);
    }

    cout << "\n\n\t\t********!! ALL STUDENTS RESULT !!********\n\n";
    cout << "==========================================================================\n";
    cout << "Roll No.    Name              P     C     M     E     CS     %age    Grade\n";
    cout << "=========================================================================\n";

    while (file.read((char *)&st, sizeof(student)))
    {
        st.all_student_data();
    }
    file.close();
    getch();
}

void result_menu()
{
    int ans, rno;
    char ch, an;
    while (true)
    {
        clear_screen();
        cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*\n\n";
        cout << "\t\t\t\t\t\t****************  RESULT MENU  *****************\n\n";
        cout << "\t\t\t\t\t\t*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*\n\n\n";
        cout << "\t\t\t\t\t\twhich option would you like to choose:-\n\n";
        cout << "\t\t\t\t\t\t1) View whole Class data in tabular form\n\n";
        cout << "\t\t\t\t\t\t2) Search Student Record\n\n";
        cout << "\t\t\t\t\t\t3) Display All Student Records\n\n";
        cout << "\t\t\t\t\t\t4) Back to Main Menu\n\n\n";
        cout << "\t\t\t\t\t\t*-`*-`*-`*-`*-`*-`*-`*\n";
        cout << "\t\t\t\t\t\tEnter Choice {1/4}: ";
        if (cin >> ans)
        {
            cout << "\t\t\t\t\t\t*-`*-`*-`*-`*-`*-`*-`*\n";
            pause_screen_for_2_sec();
            break;
        }
        else
        {
            clear_cin();
        }
    }
    switch (ans)
    {
    case 1:
    {
        if (os == 'W')
        {
            system("color 10");
        }
        all_student_result();
        result_menu();
        break;
    }
    case 2:
    {
        if (os == 'W')
        {
            system("color 10");
        }
        do
        {
            clear_screen();
            cout << "\n\nEnter Roll Number Of Student : ";
            cin >> rno;
            search_data(rno);
            cout << "\n\nDo you want to See More Result (y/n)?";
            cin >> an;
        } while (an == 'y' || an == 'Y');
        result_menu();
        break;
    }
    case 3:
    {
        if (os == 'W')
        {
            system("color 11");
        }
        display_in_list();
        result_menu();
        break;
    }
    case 4:
        break;
    default:
        cout << "\a";
    }
}

void Front_page()
{
    clear_screen();
    if (os == 'W')
    {
        system("color 9");
    }
    cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
    cout << "|                                                                                                                                       |\n";
    cout << "|                                                                                                                                       |\n";
    cout << "|                                                      |*-*-*-*-*-*-*-*-*-*-*-*|                                                        |\n";
    cout << "|                                                      |  Medi-Caps University |                                                        |\n";
    cout << "|                                                      |*-*-*-*-*-*-*-*-*-*-*-*|                                                        |\n";
    cout << "|                                                                                                                                       |\n";
    cout << "|                                                                                                                                       |\n";
    cout << "|                                            ###############################################                                            |\n";
    cout << "|                                            ## OOPS (Object Oriented Programming System) ##                                            |\n";
    cout << "|                                            ###############################################                                            |\n";
    cout << "|                                                                                                                                       |\n";
    cout << "|                                                      |~~~~~~~~~~~~~~~~~~~~~~~~~|                                                      |\n";
    cout << "|                                                      | #Subject Code- CS3CO23  |                                                      |\n";
    cout << "|                                                      |~~~~~~~~~~~~~~~~~~~~~~~~~|                                                      |\n";
    cout << "|                                                                                                                                       |\n";
    cout << "|                                                                                                                                       |\n";
    cout << "|                                                   ####################################                                                |\n";
    cout << "|                                                   #           Mini Project           #                                                |\n";
    cout << "|                                                   #                                  #                                                |\n";
    cout << "|                                                   #   School Data Record Management  #                                                |\n";
    cout << "|                                                   ####################################                                                |\n";
    cout << "|                                                                                                                                       |\n";
    cout << "|                                                                                                                                       |\n";
    cout << "|                                                                                                                                       |\n";
    cout << "|                                                                                                                                       |\n";
    cout << "|      |*-*-*-*-*-*-*-*-*-*|                                                           |*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*|      |\n";
    cout << "|      |    Guided By :-   |                                                           |                Made By :-               |      |\n";
    cout << "|      |- Prof. Arpit Deo  |                                                           |-{EN20CS301306} Prashant Patil           |      |\n";
    cout << "|      |*-*-*-*-*-*-*-*-*-*|                                                           |-{EN20CS301307} Prashant Chaurasiya      |      |\n";
    cout << "|                                                                                      |-{EN20CS301308} Prashant Ranjan Singh    |      |\n";
    cout << "|                                                                                      |*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*|      |\n";
    cout << "|                                                                                                                                       |\n";
    cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
    pause_screen();
}

void entry_menu()
{
    char ch2;
    while (true)
    {
        clear_screen();
        cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*\n";
        cout << "\t\t\t\t\t\t***************  ENTRY MENU   ******************";
        cout << "\n\t\t\t\t\t\t-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*\n";
        cout << "\n\n\t\t\t\t\t\t1) CREATE STUDENT RECORD";
        cout << "\n\n\t\t\t\t\t\t2) MODIFY STUDENT RECORD";
        cout << "\n\n\t\t\t\t\t\t3) DELETE STUDENT RECORD";
        cout << "\n\n\t\t\t\t\t\t4) BACK TO MAIN MENU";
        cout << "\n\n\t\t\t\t\t\t*-*-*--*-*-*-*-*-*\n";
        cout << "\t\t\t\t\t\tChoice (1-4): ";
        if (cin >> ch2)
        {
            cout << "\t\t\t\t\t\t*-*-*--*-*-*-*-*-*\n";
            pause_screen_for_2_sec();
            break;
        }
        else
        {
            clear_cin();
        }
    }
    switch (ch2)
    {
    case '1':
        clear_screen();
        if (os == 'W')
        {
            system("color a0");
        }
        create_student_data();
        entry_menu();
        break;
    case '2':
        if (os == 'W')
        {
            system("color a0");
        }
        modify_student_data();
        entry_menu();
        break;
    case '3':
        if (os == 'W')
            ;
        {
            system("color c0");
        }
        delete_student_data();
        entry_menu();
        break;
    case '4':
        break;
    default:
        cout << "\a";
        entry_menu();
    }
}

void main_menu()
{
    int ch;
    while (ch != 3)
    {
        clear_screen();
        if (os == 'W')
        {
            system("color f0");
        }
        cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*\n\n";
        cout << "\t\t\t\t\t\t***************   MAIN MENU    ******************\n\n";
        cout << "\t\t\t\t\t\t*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*-`*\n\n\n";
        cout << "\t\t\t\t\t\t   Which option would you like to choose :-\n\n";
        cout << "\n\n\t\t\t\t\t\t     1) See Data Record Of Students ";
        cout << "\n\n\t\t\t\t\t\t     2) Editing The Data Record ";
        cout << "\n\n\t\t\t\t\t\t     3) Exit The Program";
        cout << "\n\n";
        while (true)
        {
            cout << "\t\t\t\t\t\t----------------------------------\n";
            cout << "\t\t\t\t\t\tPlease Enter Your Choice (1-3): ";
            if (cin >> ch)
            {
                cout << "\t\t\t\t\t\t----------------------------------\n";
                pause_screen_for_2_sec();
                break;
            }
            else
            {
                cout << "\n\n\t\t\t\t\t\t\t-------------\n";
                cout << "\t\t\t\t\t\t\tInvalid Input";
                cout << "\n\t\t\t\t\t\t\t-------------\n";
                getch();
                cout << "\t\t\t\t\t\t\tPress any key to continue again....";
                clear_cin();
                // cout << "----------------------------------\n";
                main_menu();
            }
        }
        switch (ch)
        {
        case 1:
            if (os == 'W')
            {
                system("color E1");
            }
            clear_screen();
            result_menu();
            break;
        case 2:
            if (os == 'W')
                ;
            {
                system("color b0");
            }
            entry_menu();
            break;
        case 3:
            if (os == 'W')
                ;
            {
                system("color c0");
            }
            clear_screen();
            cout << "\n\n~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-\n";
            cout << "Thank You For Using This Program";
            cout << "\n~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-\n\n\n\n\n\n";
            exit(0);
        default:
            cout << "\a";
        }
    }
}

int main()
{
    os_detection();
    Front_page();
    main_menu();
    return 0;
}
