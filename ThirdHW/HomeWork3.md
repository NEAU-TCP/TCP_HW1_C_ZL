# 2026 算法组&电控组 C 语言第三次作业

## TCP_HW1_C_ZL

### 截止时间为 10月10日 中午12：00   
### @确保完成作业之前已阅读ReadMe！！

*include: One- and Two-Dimensional Arrays, Character Arrays, and Function Design and Invocation*

*覆盖内容：一维/二维数组、字符数组、函数设计与调用*  


1. 传感器数组统计函数（30分）  
   输入 10 个整数作为连续传感器采样值。分别编写函数 Max、Min、Average，返回最大值、最小值和平均值，并在主函数中输出。平均值保留整数即可。  
   **示例输入：**  
   12 15 11 20 18 16 14 19 17 13  
   **示例输出：**  
   max=20  
   min=11  
   avg=15  
    
2. 封装冒泡排序函数（25分）  
   输入 10 个整数，将冒泡排序过程封装为函数 Sort(int a[], int n)，按从小到大排序后在主程序输出。（排序函数内部不得调用 qsort 等库排序函数）  
   **示例输入：**  
   9 3 7 1 8 2 6 5 4 0  
   **示例输出：** 
   0 1 2 3 4 5 6 7 8 9  

3. 字符串长度与反转（45分）  
   输入一个不含空格、长度不超过 100 的字符串。自行编写 MyStrLen(char s[]) 计算字符串长度，再编写 MyStrRev (char s[]) 将字符串原地反转。（不得直接调用 strlen、strrev 等函数完成核心功能）  
   **示例输入：**  
   control  
   **示例输出：**  
   Len = 7  
   Rev = lortnoc