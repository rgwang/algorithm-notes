## 题目描述

正整数A的“D~A~（为1位整数）部分”定义为由A中所有D~A~组成的新整数P~A~。例如：给定A = 3862767，D~A~ = 6，则A的“6部分”P~A~是66，因为A中有2个6。

现给定A、D~A~、B、D~B~，请编写程序计算P~A~ + P~B~。

## 输入

输入在一行中依次给出A、D~A~、B、D~B~，中间以空格分隔，其中0 < A, B < 10^10^。

## 输出

在一行中输出P~A~ + P~B~的值。

## 样例输入

```c++
3862767 6 13530293 3
3862767 1 13530293 8
```

## 样例输出

```c++
399
0
```