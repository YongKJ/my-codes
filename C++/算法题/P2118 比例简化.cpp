#include <iostream>
using namespace std;
int gcd(int n,int m);
int main() {
  int a, b, l, n, m;
  cin >> a >> b >> l;
  n = l, m = 1;
  for (int i = 1; i <= l; i++)
    for (int j = 1; j <= l; j++)
      if (gcd(i, j) && i * b >= j * a && i * m < j * n)
        n = i, m = j;
  cout << n << " " << m << endl;
  return 0;
}
int gcd(int n, int m) {
  int r;
  if (n == m)
    return n;
  while ((r = n % m) != 0)
    n = m, m = r;
  return m;
}
          
/*
题目描述
在社交媒体上，经常会看到针对某一个观点同意
与否的民意调查以及结果。例如，对某一观点表
示支持的有14981498 人，反对的有 902902人，
那么赞同与反对的比例可以简单的记为1498:9021498:902。

不过，如果把调查结果就以这种方式呈现出来，
大多数人肯定不会满意。因为这个比例的数值太大，
难以一眼看出它们的关系。对于上面这个例子，
如果把比例记为5:35:3，虽然与真实结果有一定的
误差，但依然能够较为准确地反映调查结果，同时也
显得比较直观。

现给出支持人数A，反对人数BB，以及一个上限LL，
请你将AA比BB化简为AA’比BB’，要求在AA’和BB’
均不大于LL且AA’和BB’互质（两个整数的最大公
约数是11）的前提下，AA’/B/B’ ≥ A/B≥A/B且
AA’/B/B’ - A/B−A/B的值尽可能小。

(本题目为2014NOIP普及T2)

输入输出格式
输入格式：
共一行，包含三个整数A,B,LA,B,L，每两个整数
之间用一个空格隔开，分别表示支持人数、反对人
数以及上限。

输出格式：
共一行，包含两个整数AA’，BB’，中间用一个空
格隔开，表示化简后的比例。

输入输出样例
输入样例#1： 
1498 902 10
输出样例#1： 
5 3
说明
对于100\%100%的数据，1 ≤ A ≤ 1,000,000,
1 ≤ B ≤ 1,000,000,1 ≤ L ≤ 100,
A/B ≤ L1≤A≤1,000,000,1≤B≤1,000,000,
1≤L≤100,A/B≤L。
*/