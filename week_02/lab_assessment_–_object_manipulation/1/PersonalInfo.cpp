#include <iostream>
#include <cstring>
using namespace std;

// Constants
const int SIZE = 81;

// PersonalInfo class declaration
class PersonalInfo
{
    private:
        char name[SIZE];
        char address[SIZE];
        int age;
        char phone[SIZE];

    public:

        // Default constructor
        PersonalInfo ()
        {
            name[0] = '\0';
            address[0] = '\0';
            age = 0;
            phone[0] = '\0';
        }

        PersonalInfo (char n[], char addr[], int a, char p[])
        {
            setName(n);
            setAddress(addr);
            setAge(a);
            setPhone(p);
        }
        
        // Mutator functions
        void setName (char n[])
        {
            strncpy(name, n, SIZE);
            name[SIZE - 1] = '\0';
        }

        void setAddress (char a[])
        {
            strncpy(address, a, SIZE);
            address[SIZE - 1] = '\0';
        }

        void setAge (int a)
        {
            age = a;
        }

        void setPhone (char p[])
        {
            strncpy(phone, p, SIZE);
            phone[SIZE - 1] = '\0';
        }

        // Accessor functions
        const char *getName () const
        {
            return name;
        }

        const char *getAddress () const
        {
            return address;
        }

        int getAge () const
        {
            return age;
        }

        const char *getPhone () const
        {
            return phone;
        }
};

// Function prototype

void displayPersonalInfo (PersonalInfo);

int main ()
{
    // Create the first instance of PersonalInfo.
    PersonalInfo me("Ajunewanis", 
                    "GMM", 
                    25, 
                    "123");
    
    PersonalInfo wanis("Wanis",
                       "N28 FSKSM",
                       50,
                       "234");

    PersonalInfo ajune("Ajune",
                       "UTM",
                       30,
                       "567");

    // Display the data in each object.
    displayPersonalInfo(me);
    displayPersonalInfo(wanis);
    displayPersonalInfo(ajune);
    // system("pause"); // Not available in Linux

    return 0;
}

void displayPersonalInfo (PersonalInfo obj)
{
    cout << "Name: " << obj.getName() << endl;
    cout << "Address: " << obj.getAddress() << endl;
    cout << "Age: " << obj.getAge() << endl;
    cout << "Phone: " << obj.getPhone() << endl << endl;
}