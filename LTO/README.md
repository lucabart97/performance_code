# LINK TIME OPTIMIZATION

Link Time Optimization is a form of interprocedural optimization that is performed at the time of linking application code. Without LTO, the Compiler compiles and optimizes each source file independently of one another, then links them to form the executable.


![alt text](https://developer-blogs.nvidia.com/wp-content/uploads/2021/02/GPUapplication_Figure1-2048x1251.png)

# how to test

Compile the code and see the time results. Remove comment from line 14 or 16 in cmake file and see the new results.