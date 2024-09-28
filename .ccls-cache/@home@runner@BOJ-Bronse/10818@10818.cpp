// N개의 정수가 주어질 때 최솟값과 최댓값을 구하는 프로그램
// 첫째 줄에 정수 N개의 정수가 주어짐
// 둘째 줄에 N개의 정수를 공백으로 구분해 주어짐

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  int N = 0;
  // N개의 정수 구하기
  cin >> N;

  vector<int> Num(N);

  for(int i = 0; i < N; i++)
    {
      cin >> Num[i];
    }

  sort(Num.begin(), Num.end());

  cout << Num.front() << " " << Num.back() << endl;
}