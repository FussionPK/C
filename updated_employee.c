#include <stdio.h>
#include <string.h>

//:Store employee details
/* allow the user to perform these actions
    1:Add an employee
    2:View Details of a specific employee
    3:Update an employee details
    4:Calculate the yearly salary
    5:Delete an employee
    6:List all Employees in the system

*/

typedef struct{
    int ID;
    char Name[25];
    int Age;
    char Position[25];
    float Salary;

}employees;

void printSpecific(employees a){

    printf("This is their id %d\nTheir name is %s\nThey are %d years old \nWorking as a %s\nEarning %f per month. \n\n", a.ID, a.Name, a.Age, a.Position, a.Salary);
}

void employeeAdder(employees *b, int x, char y[], int z, char c[], float v){

    b->ID = x;
    strcpy(b->Name, y);
    b->Age = z;
    strcpy(b->Position, c);
    b->Salary = v;

}


void showDB(employees *j, int size) {
    printf("The Database consists of the following data:\n");

    for (int i = 0; i < size; i++) {
        printf("Employee %d:\n", i + 1);
        printf("  ID: %d\n", j[i].ID);
        printf("  Name: %s\n", j[i].Name);
        printf("  Age: %d\n", j[i].Age);
        printf("  Position: %s\n", j[i].Position);
        printf("  Salary: %.2f\n\n", j[i].Salary);
    }
}

void UpdateEMP(employees *u, int o, char p[], int i, char n[], float m){

    u->ID = o;
    strcpy(u->Name, p);
    u->Age = i;
    strcpy(u->Position, n);
    u->Salary = m;

}


//////////////////////////////////////////////////////////
// Function to calculate yearly salary of an employee
void calculateYearlySalary(employees emp) {
    float yearlySalary = emp.Salary * 12;
    printf("The yearly salary of %s (ID: %d) is %.2f\n", emp.Name, emp.ID, yearlySalary);
}

//////////////////////////////////////////////////////////
// Function to delete an employee from the database
void deleteEmployee(employees *db, int *size, int index) {
    if (index < 0 || index >= *size) {
        printf("Invalid index. No employee deleted.\n");
        return;
    }
    for (int i = index; i < *size - 1; i++) {
        db[i] = db[i + 1]; // Shift elements
    }
    (*size)--; // Reduce size of the array
    printf("Employee at index %d has been deleted.\n", index);
}


int main(){

    employees Employee[3];

    //This function adds employees to the database.
    employeeAdder(&Employee[0], 1, "John Doe", 20, "Data Analyst", 2500);
    employeeAdder(&Employee[1], 2, "Jane Doe", 21, "Librarian", 3000);
    employeeAdder(&Employee[2], 3, "Ryan Doe", 20, "Specialist", 9000);

    //This function will print out the whole database.
    showDB(Employee, 3);

    //This is how to show details of a specific employee use this function.

    printSpecific(Employee[2]);

    //This function updates employees but you must declare your updated variable first.

    employees Updated;

    UpdateEMP(&Updated, 9, "Ryan Doe", 99, "Generalist", 8000.0);

    // Print the updated structure
    printf("Updated Employee:\n");
    printf("ID: %d\n", Updated.ID);
    printf("Name: %s\n", Updated.Name);
    printf("Age: %d\n", Updated.Age);
    printf("Position: %s\n", Updated.Position);
    printf("Salary: %.2f\n", Updated.Salary);

    return 0;
}


