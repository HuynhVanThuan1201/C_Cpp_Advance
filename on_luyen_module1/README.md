# 🔧 Bitwise Exam in C

This project demonstrates fundamental **bitwise operations** in the C programming language — including how to set, clear, toggle, and check bits, as well as identify the Most Significant Bit (MSB), Least Significant Bit (LSB), and perform basic bit tricks.

---

## 📘 Overview

The program (`bitwise_exam.c`) contains examples of 14 common bitwise tasks such as:
- Turning a specific bit on or off  
- Toggling a bit  
- Swapping two integers without a temporary variable  
- Checking if a number is even, odd, or a power of two  
- Finding MSB and LSB positions  
- Isolating or clearing specific bits  

---

## 🧩 Files Included

```
bitwise_exam.c          # Main C source file
Makefile                # Build automation file
README.md               # Project documentation
```

---

## ⚙️ How to Build and Run

Make sure you have **GCC** and **Make** installed on your system.

### 🔹 1. Build the program
```bash
make
```

This command compiles `bitwise_exam.c` into an executable named `bitwise_exam`.

### 🔹 2. Run the program
```bash
./bitwise_exam
```

### 🔹 3. Clean the build
```bash
make clean
```

This command removes the compiled executable.

---

## 🧠 Example Output

```
Initial values: x = 10, a = 5, b = 7, n = 4

1. After setting bit 4: x = 26
2. After clearing bit 4: x = 10
3. After toggling bit 4: x = 26
4. Bit 4 of x is ON
5. Before swap: a = 5, b = 7
   After swap: a = 7, b = 5
6. 4 is a power of 2
7. 4 is even
8. Two’s complement of 4 is -4
9. a and b are not equal
10. MSB position of 4 is 2
11. LSB position of 4 is 2
12. Before clearing rightmost set bit: n = 4
    After clearing rightmost set bit: n = 0
13. Rightmost set bit of 18 isolated: 2
14. 24 is a multiple of 8
```

---

## 🧰 Requirements

- GCC compiler  
- GNU Make  
- Works on Linux, macOS, or Windows with MinGW/WSL  

---

## 🏁 License

This project is provided for educational purposes.  
You may freely modify, distribute, and use it for learning C programming.

---
