# TechSolutions Employee Management System

### Overview

This C++ program simulates an **Employee Management System** for a fictional company called **TECHI STAR Pvt. LTD**.
It demonstrates key **Object-Oriented Programming (OOP)** principles such as:

* Constructors & Destructors
* Deep Copy vs Shallow Copy
* Static and Const Members
* Dynamic Object Creation using Pointers
* Passing and Returning Objects from Functions

The project is divided into three files for modularity:

* `main.cpp` — Handles program flow and user interaction.
* `functions.cpp` — Implements class methods and helper functions.
* `softHeader.h` — Contains class declarations and constants.

---

## ⚙️ Features

Dynamic Employee Creation:**
Users can specify how many employee records to create, with memory allocated dynamically at runtime.
**Deep Copy Constructor:**
Safely duplicates employee data (including dynamically allocated memory), demonstrating the difference from a shallow copy.
**Pointer Array of Objects:**
Employee objects are created dynamically and accessed using pointer arithmetic.
**Static Members:**
Tracks total number of employees created using a static counter.
**Friend-like Object Interaction:**
Allows one object to access another’s data through functions like salary swapping.
---
## Code Structure

### **Class: `Empl_str`**

| Member     | Type         | Purpose                            |
| ---------- | ------------ | ---------------------------------- |
| `empName`  | `char*`      | Stores employee name dynamically   |
| `empId`    | `int*`       | Stores employee ID dynamically     |
| `salary`   | `double*`    | Stores employee salary dynamically |
| `empCount` | `static int` | Counts total employees created     |

#### 🔹 Key Member Functions:

| Function                             | Description                                                                  |
| ------------------------------------ | ---------------------------------------------------------------------------- |
| `Empl_str()`                         | Default constructor initializes pointers to `nullptr`                        |
| `Empl_str(const char*, int, double)` | Parameterized constructor initializes data members using an initializer list |
| `Empl_str(const Empl_str&)`          | Deep copy constructor                                                        |
| `void show() const`                  | Displays employee details (const-qualified)                                  |
| `void setSalary(double)`             | Updates salary for an employee                                               |
| `void swapSalary(Empl_str&)`         | Swaps salaries between two employees                                         |
| `void twoObj(Empl_str&)`             | Displays two employee objects for comparison                                 |
| `static void companyNamePrint()`     | Prints fixed company name                                                    |
| `static int totalEmp()`              | Returns total number of employees created                                    |
| `~Empl_str()`                        | Destructor frees dynamically allocated memory                                |

---

### **Function: `empleeCreat(int&)`**

Handles creation of multiple employees:

1. Prompts user for number of accounts.
2. Dynamically allocates an array of `Empl_str` objects.
3. Uses **placement new** to construct each employee with user input.
4. Returns the pointer to the first element of the array.

```cpp
Empl_str* empleeCreat(int &empNum);
```
---

## Key OOP Concepts Demonstrated

| Concept                | Implementation                                            |
| ---------------------- | --------------------------------------------------------- |
| **Encapsulation**      | Employee details are private; access through methods only |
| **Static Members**     | Tracks total employees across all objects                 |
| **Dynamic Memory**     | Each employee created with `new`                          |
| **Deep Copy**          | Prevents shared memory errors                             |
| **Pointer Arithmetic** | Accesses employee data via pointer array                  |
| **Object Interaction** | Swapping salary between two objects                       |

---

##Sample Output

```
------  TechMart Pvt.LTD  ------
  New Emplyee Account creating
How many account would you like to create: 2
Employee#1
Enter name: John
Enter ID: FSD1
Salary: 5000
Employee#2
Enter name: Alice
Enter ID: FSD2
Salary: 6500

--------------------------------------
New 2 Accounts created
--------------------------------------
Name: John   ID: FSD1   Salary: 5000
Name: Alice  ID: FSD2   Salary: 6500
--------------------------------------
New Employee created by deep copy constuctor:
Name: John   ID: FSD1   Salary: 5000
--------------------------------------
No effect on orignal object
After Change

Copy->    Name: John   ID: FSD1   Salary: 1200.3
Orignal-> Name: John   ID: FSD1   Salary: 5000
--------------------------------------
Swapping salary:
Copy->    Name: John   ID: FSD1   Salary: 5000
Orignal-> Name: John   ID: FSD1   Salary: 1200.3
--------------------------------------
Total Employee Created: 3
```

---
