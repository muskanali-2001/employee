#include <iostream> 
using namespace std; 
  
struct employee { 
    string ename; 
    int age, phn_no; 
    int salary; 
}; 

void display(struct employee emp[], int n) 
{ 
    cout << "Name\tAge\tPhone Number\tSalary\n"; 
    for (int i = 0; i < n; i++) { 
        cout << emp[i].ename << "\t" << emp[i].age << "\t"
             << emp[i].phn_no << "\t" << emp[i].salary << "\n"; 
    } 
} 
int main() 
{ 
    int n;
    printf("enter the number of employees:");
    scanf("%",&n);
    struct employee emp[n]; 
 
    emp[n].ename;
    printf("enter the name of employees");
    scanf("%s",&emp[n].ename);
    emp[n].age;
    printf("enter the age of employees");
    scanf("%d",&emp[n].age);
    emp[n].phn_no;
    printf("enter the phn_num of employees");
    scanf("%d",&emp[n].phn_no);
    emp[n].salary; 
    printf("enter the salary of employees");
    scanf("%d",&emp[n].salary);
    return 0; 
}
