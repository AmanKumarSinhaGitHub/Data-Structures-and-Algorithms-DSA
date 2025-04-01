# **C++ Basics - Comprehensive Guide** 🚀  

This readme file covers essential **C++ programming concepts**, including input/output, data types, control structures, loops, functions, and memory handling. Whether you're a **beginner** or need a **quick refresher**, this guide will help you understand the core principles of C++ **without reading every file**.  

---

## **1️⃣ Input & Output (I/O)** 🖥️  

### **🟢 Output (Printing to Console)**  
Use `cout <<` to display output on the screen.  
```cpp
cout << "Hello, World!";
```

### **🔵 Input (User Input)**  
Use `cin >>` to get input from the user.  
```cpp
string name;
cout << "Enter your name: ";
cin >> name;
cout << "Hello, " << name;
```
📌 **Note**: `cin` stops reading input at the first space. Use `getline(cin, variable)` to read full sentences.  
```cpp
string fullName;
getline(cin, fullName);
cout << "Hello, " << fullName;
```

---

## **2️⃣ Data Types & Variables** 🔢  

| **Type**      | **Size** | **Example**         |
|--------------|---------|---------------------|
| `int`        | 4 bytes | `int x = 10;`       |
| `long`       | 8 bytes | `long y = 100000;`  |
| `float`      | 4 bytes | `float pi = 3.14;`  |
| `double`     | 8 bytes | `double d = 2.718;` |
| `char`       | 1 byte  | `char ch = 'A';`    |
| `string`     | -       | `string name = "John";` |

📝 **Key Takeaways**:  
- Use `cin` for single-word input and `getline(cin, var)` for multi-word input.  
- Use `long long` for very large numbers.  
- Use `char` for a **single letter** and `string` for multiple letters or words.  

---

## **3️⃣ Conditional Statements** ⚖️  

### **🔹 If-Else (Decision Making)**  
```cpp
int age;
cout << "Enter your age: ";
cin >> age;

if (age >= 18) {
    cout << "You can drive.";
} else {
    cout << "You cannot drive.";
}
```

### **🔸 Else-If Ladder (Multiple Conditions)**  
```cpp
int marks;
cout << "Enter your marks: ";
cin >> marks;

if (marks < 25) cout << "F";
else if (marks <= 44) cout << "E";
else if (marks <= 49) cout << "D";
else if (marks <= 59) cout << "C";
else if (marks <= 79) cout << "B";
else cout << "A";
```

### **🔹 Nested If-Else (Checking Sub-Conditions)**  
```cpp
int age;
cout << "Enter your age: ";
cin >> age;

if (age < 18) {
    cout << "Not eligible for work";
} else {
    cout << "Eligible for Job";
    if (age >= 55) {
        cout << " - But retirement soon!";
    }
}
```

---

## **4️⃣ Switch Case (Multiple Choices)** 🔀  
**Best for menu-driven programs or when checking fixed values.**  
```cpp
int day;
cin >> day;

switch (day) {
    case 1: cout << "Monday"; break;
    case 2: cout << "Tuesday"; break;
    case 3: cout << "Wednesday"; break;
    case 4: cout << "Thursday"; break;
    case 5: cout << "Friday"; break;
    case 6: cout << "Saturday"; break;
    case 7: cout << "Sunday"; break;
    default: cout << "Invalid input!";
}
```

---

## **5️⃣ Arrays (Storing Multiple Values)** 📊  

### **🔹 Declaring & Initializing an Array**  
```cpp
int numbers[5] = {10, 20, 30, 40, 50};
cout << numbers[2]; // Output: 30
```

### **🔸 Taking User Input in an Array**  
```cpp
int arr[3];
cin >> arr[0] >> arr[1] >> arr[2];
cout << "You entered: " << arr[0] << ", " << arr[1] << ", " << arr[2];
```

### **🔹 2D Arrays (Matrix Representation)**  
```cpp
int matrix[2][3] = {{1,2,3}, {4,5,6}};
cout << matrix[1][2]; // Output: 6
```

---

## **6️⃣ Strings (Collection of Characters)** 📜  
```cpp
string name = "Mohan";
cout << name[0]; // Output: M

name[0] = 'S';
cout << name; // Output: Sohan
```

---

## **7️⃣ Loops (Repetitive Tasks)** 🔄  

### **🔹 For Loop (Fixed Iterations)**  
```cpp
for (int i = 0; i < 5; i++) {
    cout << "Hello World!";
}
```

### **🔸 While Loop (Runs Until Condition is False)**  
```cpp
int i = 0;
while (i < 5) {
    cout << "Hello Everyone";
    i++;
}
```

### **🔹 Do-While Loop (Executes At Least Once)**  
```cpp
int i = 0;
do {
    cout << "Hi!";
    i++;
} while (i < 5);
```

---

## **8️⃣ Functions (Reusable Code Blocks)** 🛠️  

### **🔹 Void Function (No Return Value)**  
```cpp
void greet() {
    cout << "Hello!";
}
```

### **🔸 Function with Return Value**  
```cpp
int add(int a, int b) {
    return a + b;
}
```

### **🔹 Function with Parameters**  
```cpp
void printAge(int age) {
    cout << "Your age is " << age;
}
```

---

## **9️⃣ Pass by Value vs Pass by Reference** 🔄  

### **🔹 Pass by Value (Original Value Stays Unchanged)**  
```cpp
void increment(int x) {
    x += 10;
}
```

### **🔸 Pass by Reference (Original Value is Modified)**  
```cpp
void increment(int &x) {
    x += 10;
}
```

---

## **🔟 How to Run the Code?** 🏃‍♂️  
1️⃣ **Save the file as `main.cpp`.**  
2️⃣ **Compile the program using:**  
   ```sh
   g++ main.cpp -o main
   ```
3️⃣ **Run the executable:**  
   ```sh
   ./main
   ```

---

## **📌 Summary**
✔ **Input & Output** → `cin` & `cout`  
✔ **Data Types** → `int`, `float`, `double`, `char`, `string`  
✔ **Control Structures** → `if-else`, `switch-case`  
✔ **Loops** → `for`, `while`, `do-while`  
✔ **Arrays** → `1D`, `2D`  
✔ **Functions** → `void`, `return type`, `parameters`  
✔ **Memory Handling** → `pass by value`, `pass by reference`  

---

This **README** provides a **quick and structured overview** of C++ basics. You can now start coding confidently! 🚀🔥