# Patterns Printing

### 1. **Simple Square Pattern**
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 4; // Size of the square
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
```

### 2. **Right-angled Triangle Pattern**
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
```

### 3. **Inverted Right-angled Triangle**
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
```

### 4. **Pyramid Pattern**
```
   *
  ***
 *****
```
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 3; // Number of rows
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
```

### 5. **Inverted Pyramid Pattern**
```
*****
 ***
  *
```
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 3; // Number of rows
    for (int i = n; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
```

### 6. **Diamond Pattern**
```
  *
 ***
*****
 ***
  *
```
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 3; // Number of rows in the upper half
    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl; // Move to the next line
    }
    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
```

### 7. **Number Triangle**
```
1
12
123
1234
```
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
```

### 8. **Inverted Number Triangle**
```
1234
123
12
1
```
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
```

### 9. **Alphabet Triangle**
```
A
AB
ABC
ABCD
```
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows
    for (int i = 1; i <= n; i++) {
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            cout << ch;
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
```

### 10. **Inverted Alphabet Triangle**
```
ABCD
ABC
AB
A
```
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows
    for (int i = n; i >= 1; i--) {
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            cout << ch;
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
```

### 11. **Right-angled Triangle of Numbers**
```
1
22
333
4444
```
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
```

### 12. **Inverted Right-angled Triangle of Numbers**
```
4444
333
22
1
```
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
```

### 13. **Hollow Square**
```
****
*  *
*  *
****
```
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 4; // Size of the square
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
```

### 14. **Hollow Right-angled Triangle**
```
*
**
* *
*  *
*****
```
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (i == n || j == 1 || j == i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
```

### 15. **Hollow Pyramid**
```
   *
  * *
 *   *
*******
```
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            if (k == 1 || k == (2 * i - 1) || i == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
```

### 16. **Diamond of Numbers**
```
  1
 121
12321
 121
  1
```
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 3; // Number of rows in the upper half
    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = n

; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            if (k <= i) {
                cout << k;
            } else {
                cout << (2 * i - k);
            }
        }
        cout << endl; // Move to the next line
    }
    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            if (k <= i) {
                cout << k;
            } else {
                cout << (2 * i - k);
            }
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
```

### 17. **Cross Pattern**
```
* * *
 * *
  *
 * *
* * *
```
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 5; // Size of the cross
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || j == n - i - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
```

### 18. **Hourglass Pattern**
```
*****
 ***
  *
 ***
*****
```
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 5; // Size of the hourglass
    // Upper part
    for (int i = 0; i < n / 2 + 1; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int k = 0; k < (n - 2 * i); k++) {
            cout << "*";
        }
        cout << endl; // Move to the next line
    }
    // Lower part
    for (int i = n / 2 - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int k = 0; k < (n - 2 * i); k++) {
            cout << "*";
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
```

### 19. **Star X Pattern**
```
*   *
 * *
  *
 * *
*   *
```
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 5; // Size of the pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || j == n - i - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
```

### 20. **Spiral Pattern**
```
1 2 3
8 9 4
7 6 5
```
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 3; // Size of the matrix
    int arr[n][n];
    int num = 1;
    int startRow = 0, endRow = n - 1;
    int startCol = 0, endCol = n - 1;

    while (startRow <= endRow && startCol <= endCol) {
        // Top row
        for (int i = startCol; i <= endCol; i++) {
            arr[startRow][i] = num++;
        }
        startRow++;

        // Right column
        for (int i = startRow; i <= endRow; i++) {
            arr[i][endCol] = num++;
        }
        endCol--;

        // Bottom row
        for (int i = endCol; i >= startCol; i--) {
            arr[endRow][i] = num++;
        }
        endRow--;

        // Left column
        for (int i = endRow; i >= startRow; i--) {
            arr[i][startCol] = num++;
        }
        startCol++;
    }

    // Print the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
```

### 21. **Chessboard Pattern**
```
* * * *
 * * *
* * * *
 * * *
```
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 8; // Size of the chessboard
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i + j) % 2 == 0) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
```

### 22. **Floyd's Triangle**
```
1
2 3
4 5 6
7 8 9 10
```
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num++ << " ";
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
```

### 23. **Pascal's Triangle**
```
    1
   1 1
  1 2 1
 1 3 3 1
```
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows
    for (int i = 0; i < n; i++) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        int num = 1;
        for (int j = 0; j <= i; j++) {
            cout << num << " ";
            num = num * (i - j) / (j + 1);
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
```

### 24. **Right-angled Triangle with Different Characters**
```
A
AB
ABC
ABCD
```
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows
    for (int i = 1; i <= n; i++) {
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            cout << ch;
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
```

### 25. **Inverted Right-angled Triangle with Different Characters**
```
ABCD
ABC
AB
A
```
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows
    for (int i = n; i >= 1; i--) {
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            cout << ch;
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
```

### 26. **Bordered Square**
```
* * * *
*     *
*     *
* * * *
```
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 4; // Size of the square
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
```

### 27. **Hollow Diamond**
```
  *
 * *
*   *
 * *
  *
```
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 3; // Number of rows in the upper half
    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            if (k == 

1 || k == (2 * i - 1)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl; // Move to the next line
    }
    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            if (k == 1 || k == (2 * i - 1)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
```

### 28. **Zigzag Pattern**
```
*       *
 *     *
  *   *
   * *
    *
   * *
  *   *
 *     *
*       *
```
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 4; // Size of the pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || j == n - i - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl; // Move to the next line
    }
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            if (i == j || j == n - i - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
```

### 29. **Heart Shape**
```
 **   **
*  * *  *
*   *   *
 *     *
  *   *
   * *
    *
```
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 6; // Size of the pattern
    // Upper part
    for (int i = n / 2; i <= n; i += 2) {
        for (int j = 1; j < n - i; j += 2) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl; // Move to the next line
    }
    // Lower part
    for (int i = n; i >= 1; i--) {
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
```

### 30. **Wave Pattern**
```
*   *   *   *
 * * * * * *
  *   *   *
   * * * *
    *   *
   * * *
  *   *
 * * *
*   *
```
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * n; j++) {
            if ((i + j) % 2 == 0) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
```

