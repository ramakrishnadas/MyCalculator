# Overview

This is a basic Calculator application using C++ and the Qt framework. I created this to learn and demonstrate how to use Qt Creator and the C++ language to create a calculator with a GUI (Graphical User Interface) that performs basic arithmetic operations as well as exponential operations (square root and power).

To run the application, you must unzip the CalculatorExecutable.zip file present in this repository. You must then double-click the calculatorGUI.exe file to open the application.

Once you open the application, the GUI window should appear. You can then input numbers (including decimal point numbers) in the Number 1 and Number 2 input fields. After inserting the numbers for the operation you wish to calculate, you must click on the relevant operation button. If you wish to add, click on the "+" button; if you wish to calculate the square root of Number 1, click on the "√" button; and so on.

After you click the operation button, the result will be displayed in the Result field below. Additionally, the operation will be registered and displayed in the History Display box at the bottom. You can clear the calculation history by clicking on the "Clear history" button.

You can find a video demonstration of this project below.

Video demonstration: [Software Demo Video](https://youtu.be/NUCqQp-kcn0)

# Development Environment

* Visual Studio Code
* Git / GitHub
* MinGW 13.1.0 (64-bit)
* Qt Creator 14.0.2
* Qt 6.8.0

# Useful Websites

- [C++ Tutorial by W3schools](https://www.w3schools.com/cpp/)
- [Install the MinGW Gnu Compiler Collection (GCC)](https://code.visualstudio.com/docs/cpp/config-mingw)
- [Set up C++ in Visual Studio Code](https://www.youtube.com/watch?v=DMWD7wfhgNY)
- [Install Qt](https://docs.itascacg.com/pfc700/pfc/docproject/source/manual/optional_features/plugins/install_qt.html)
- [Qt Crash Course](https://www.youtube.com/watch?v=cXojtB8vS2E)
- [Qt Creator Documentation](https://doc.qt.io/qtcreator/)
- [How to create project executable (Deploy)](https://thetechieintj.hashnode.dev/create-a-qt-project-executable-and-missing-files-fix)

# Future Work

- Improve GUI aesthetics
- Handle errors more gracefully (such as division by zero and calculating square root of negative numbers). Show error messages to user.
- Add more operations, such as percentage, trigonometry, Euler's number, and logarithm.