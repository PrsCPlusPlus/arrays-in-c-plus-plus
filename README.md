C++ Program of Arrays 

## **THEORY**

In C++, an array is a data structure that is used to store multiple values of similar data types in a contiguous memory location.

For example, if we have to store the marks of 4 or 5 students then we can easily store them by creating 5 different variables but what if we want to store marks of 100 students or say 500 students then it becomes very challenging to create that numbers of variable and manage them. Now, arrays come into the picture that can do it easily by just creating an array of the required size.

Arrays-in-C++
![image](https://github.com/Purvansha022609/Arrays-and-Strings/assets/139473344/4d3dec50-c335-498e-b9a5-d807cab43704)

## **ALGORITHM**

- **Enter the marks of 10 subjects and display it**

1. Start

2. Declare an array to store the marks for 10 subjects (marksArray).

3. Use a `for` loop to iterate 10 times (for each subject):
   - Initialize a loop variable (i) to 0.
   - Continue the loop as long as i is less than 10.
   - In each iteration of the loop, prompt the user to enter the marks for the current subject and store it in marksArray[i].

4. Display the marks for each subject using a `for` loop:
   - Initialize a loop variable (i) to 0.
   - Continue the loop as long as i is less than 10.
   - In each iteration of the loop, display the marks for the current subject from marksArray[i].

5. End

- **Enter the marks of subjects from user and display it**

1. Start

2. Declare variables for the number of subjects (numSubjects) and an array to store the marks (marksArray).

3. Prompt the user to enter the number of subjects (numSubjects).

4. Use a `for` loop to input marks for each subject:
   - Initialize a loop variable (i) to 0.
   - Continue the loop as long as i is less than numSubjects.
   - In each iteration of the loop, prompt the user to enter the marks for the current subject and store it in marksArray[i].

5. Display the marks for each subject using a `for` loop:
   - Initialize a loop variable (i) to 0.
   - Continue the loop as long as i is less than numSubjects.
   - In each iteration of the loop, display the marks for the current subject from marksArray[i].

6. End

- **C++ program to find the maximum and minimum value of given array**

1.Start

2.Declare an array to store the elements (arr) and variables to store the maximum (max) and minimum (min) values.

3.Initialize max and min with the first element of the array (i.e., max = arr[0] and min = arr[0]).

4.Use a for loop to iterate through the array:

5.Initialize a loop variable (i) to 1 (assuming the first element has already been assigned to max and min).

Continue the loop as long as i is less than the length of the array.

In each iteration of the loop:

Compare arr[i] with max:

If arr[i] is greater than max, update max to arr[i].

Compare arr[i] with min:

If arr[i] is smaller than min, update min to arr[i].

After the loop completes, max and min will contain the maximum and minimum values in the array, respectively.

6.Display the maximum and minimum values.

7.End

- **C++ Program to find array Sum_Average**

1.Start

2.Declare an array to store the elements (arr), a variable to store the sum (sum), and a variable to store the average (average).

3.Initialize sum to 0.

4.Use a for loop to iterate through the array:

5.Initialize a loop variable (i) to 0.

Continue the loop as long as i is less than the length of the array.

In each iteration of the loop:

Add arr[i] to sum.

5.Calculate the average by dividing the sum by the length of the array.

6.Display the sum and average.

7.End

- **To Flip Element**

1.Start

2.Declare an array to store the elements (arr).

3.Get the elements of the array from the user or from any source.

4.Calculate the length of the array (length).

5.Use a for loop to flip the array:

Initialize two loop variables, start and end.

Initialize start to 0 (indicating the beginning of the array) and end to length - 1 (indicating the end of the array).

Continue the loop as long as start is less than end.

In each iteration of the loop:

Swap arr[start] and arr[end].

Increment start by 1.

Decrement end by 1.

6.After the loop completes, the array will be flipped.

7.Display the flipped array.

8.End

#### **OUTPUT**

- **Enter the marks of 10 subjects and display it**


![exp7_5](https://github.com/Purvansha022609/Arrays-and-Strings/assets/139473344/123eb5c9-4f57-4d48-9d6b-e202c6c8786b)

- **Enter the marks of subjects from user and display it**

![exp7_6_1](https://github.com/Purvansha022609/Arrays-and-Strings/assets/139473344/260815a5-836c-4bf8-bf91-f92a4f1914ae)


![exp7_6_2](https://github.com/Purvansha022609/Arrays-and-Strings/assets/139473344/c1e6738b-1e5f-4faa-aaeb-43c15d2f01dc)

- **C++ program to find the maximum and minimum value of given array**

![exp7_7](https://github.com/Purvansha022609/Arrays-and-Strings/assets/139473344/50aba3d8-3ac1-4744-a1e4-feda5bfb1a95)


- **C++ Program to find array Sum_Average**

![exp7_8](https://github.com/Purvansha022609/Arrays-and-Strings/assets/139473344/d38df105-194d-4c0f-ae23-c9004757819f)

- **To Flip Element**

![exp7_9](https://github.com/Purvansha022609/Arrays-and-Strings/assets/139473344/007f84e2-a42a-4dc4-b4e0-c39de474f754)
