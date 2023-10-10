<!DOCTYPE html>
<html>
<head>
<h1>
 C - Search Algorithms
</h1>
</head>
<body style="font-family: Verdana, Arial, sans-serif">
   <h2> DESCRIPTION </h2>
   <p>
      In this project we cover the concept of serach algorythm. At the end of this project you will be able to explain 
   <b>
   <li> What is a search algorithm</li>
   <li> What is a linear search </li>
   <li> What is a binary search </li> 
   <li> What is the best search algorithm to use depending on your needs </li>
  </b>
  </p>
 
   <h2 style="color: green; round-color:RED ">
        RESOURCES
   </h2>
   <p>
       <li><a href="https://intranet.alxswe.com/rltoken/ap2kuRv8qrUMyQ0-MY3EXw">SEACH ALGORITHM</a>. </li>
       <li><a href="https://intranet.alxswe.com/rltoken/QK9ENdoTyqGs0d4_M3XE3g">SPACE COMPLEXITY</a>.</li>
   </p>

   <h2 style="color: #FF645F; margin-left: 40px">
     REQUIREMENTS
   </h2>
   <ol>
   <i>
      <li> Allowed editors: vi, vim, emacs  </li>
      <li> All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89 </li>
      <li> Your code should use the <a href="https://github.com/alx-tools/Betty/blob/master/betty-style.pl">..betty-style.pl</a>. It will be checked using <a href="https://github.com/alx-tools/Betty/blob/master/betty-doc.pl">Betty-doc.pl</a></li>
      <li>You are only allowed to use the printf function of the standard library. Any call to another function like strdup, malloc, … is forbidden.  </li>
      <li>The prototypes of all your functions should be included in your header file called search_algos.h  </li>
      <li> A README.md file, at the root of the folder of the project, is mandator</li>
   </i>
   </ol>

   <h2 style="color: #FF645F; margin-left: 40px">
	     Tasks: MANDATORY
	</h2>
  <h3 style="color: #FF645F; margin-left: 40px">
	     0. Linear search
  </h3>
  <p> 
   Write a function that searches for a value in an array of integers using the <a href="https://intranet.alxswe.com/rltoken/17RKhbmvh_u4ebCwaSxCxg">linear search algorithm</a>.
   <h4> Prototype : int linear_search(int *array, size_t size, int value); </h4>
   <ul>
  	<li>Where array is a pointer to the first element of the array to search in</li>
        <li>size is the number of elements in array</li>
        <li>And value is the value to search for</li>
        <li>Your function must return the first index where value is located</li>
        <li>If value is not present in array or if array is NULL, your function must return -1</li>
  </ul>
  </p>
  <h3 style="color: #FF645F; margin-left: 40px">
         1. Binary search
  </h3>
  <p>
    Write a function that searches for a value in a sorted array of integers using the <a href="https://intranet.alxswe.com/rltoken/SnveFJhSDE7o8bEx-kGGpA">Binary Search Algorithm</a>.
   <h4>int binary_search(int *array, size_t size, int value);</h4>
   <ul>
   <li>Where array is a pointer to the first element of the array to search in</li>
   <li>size is the number of elements in array</li>
   <li> And value is the value to search for</li>
   <li> Your function must return the index where value is located</li>
   <li> You can assume that array will be sorted in ascending order</li>
   <li> You can assume that value won’t appear more than once in array</li>
   <li> If value is not present in array or if array is NULL, your function must return -1</li>
   <li>you must print the array being searched every time it changes</li>
   </ul>


  <h3 style="color: #FF645F; margin-left: 40px">
         2. Big O #0
  </h3>
  <p>  
      What is the time complexity (worst case) of a linear search in an array of size n?
  </P>
  <h3  style="color: #FF645F; margin-left: 40px">
         3. Big O #1
  </h3>
  <p>
     What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?
  <p>
   <h3 style="color: #FF645F; margin-left: 40px">
         4. Big O #2
  </h3>
  <p>
      What is the time complexity (worst case) of a binary search in an array of size n?
  </P>
  <h3  style="color: #FF645F; margin-left: 40px">
        5. Big O #3
  </h3>
  <p>
     What is the space complexity (worst case) of a binary search in an array of size n?
  </P>
  <h3  style="color: #FF645F; margin-left: 40px">
         6. Big O #4
  </h3>
  <p>
     What is the space complexity of this function / algorithm?
  </P>
  <h2  style="color: #FF645F; margin-left: 40px">
         TASK: ADVANCED
  </h2>
  <p><p>
 </body>
</html>
