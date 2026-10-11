# 2026 算法组&电控组 C 语言最终作业

## TCP_HW1_C_ZL

### 截止时间为 10月16日 晚上23：59   
### @确保完成作业之前已阅读ReadMe！！
### 考核说明：除题目允许外，不得直接使用能够替代核心算法的库函数；程序需能够在常见 C 编译环境下独立编译运行。

*include: Data Types and Expressions, Control Flow (Branches and Loops), Arrays, Functions, Pointers, Structures and Unions — with a comprehensive assessment of program design and debugging proficiency*

*覆盖内容：数据类型与表达式、分支与循环、数组、函数、指针、结构体与共用体；综合考查程序设计与调试能力*  


1. 代码纠错（5分）  
   修改下列程序，使其能够正确读入两个整数并输出较大值。请保留 max2 函数，不得删除函数后直接在 main 中完成。  
   
   #include <stdio.h>  
   int max2(int a, int b) {  
      return a < b ? a : b  
   }  
   main() {  
    int a, b;  
    scanf("%d %d", a, &b);  
    printf("%d\n", max2(&a, b));  
    return 0;  
   }

2. 高四位与低四位提取（15分）  
   输入一个 0~255 的无符号整数 x，使用位运算分别提取其高四位和低四位，并以十进制输出。  
   示例输入：  
   157  
   示例输出：  
   9 13

3. 字符串分类统计（20分）  
   输入一行长度不超过 200 的字符串（可包含空格）。统计其中英文字母、数字、空格和其他字符的数量，并输出。允许使用 fgets 读取，不得使用正则表达式。  
   示例输入：  
   RM2026 A1!  
   示例输出：  
   letters=3  
   digits=5  
   spaces=1  
   others=1

4. 设备管理系统设计（60分）  
   使用结构体和单向链表设计一个简化设备管理程序，设备信息至少包含 id（设备编号）、name（名字）、status（状态）。实现新增、按 id 查询、修改 status、按 id 删除、遍历输出全部节点五项功能。要求动态申请与释放节点内存，退出程序前释放全部链表节点。可在此基础上新增功能，酌情给分。  
   
   **请在 “FinalTest_4说明文档.txt” 撰写说明文档，写明架构功能，实现思路**