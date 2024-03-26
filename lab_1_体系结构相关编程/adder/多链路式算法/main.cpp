#include <iostream>
#include<windows.h>
using namespace std;

int main()
{
//    LARGE_INTEGER frequency;
//    LARGE_INTEGER start;
//    LARGE_INTEGER end;
//    double totalElapsedTime = 0.0;
//    int numIterations = 1000; // 你想要执行的次数
//
//    // 获取频率
//    QueryPerformanceFrequency(&frequency);
//
//    for (int k = 0; k < numIterations; k++)
//    {
//        QueryPerformanceCounter(&start);
//        const int MAXN=16777216;
//        int sum=0,sum1=0,sum2=0;
//        int* a=new int [MAXN];
//        for(int i=0;i<MAXN;i++)
//        {
//            a[i]=i%1000;
//        }
//        for (int i = 0;i < MAXN; i += 2)
//        {
//            sum1 += a[i];
//            sum2 += a[i + 1];
//        }
//        sum = sum1 + sum2;
//     // 获取结束时间
//        QueryPerformanceCounter(&end);
//        // 计算时间差并累加
//        totalElapsedTime += static_cast<double>(end.QuadPart - start.QuadPart) / frequency.QuadPart;
//        delete[] a;
//    }
//    // 计算平均时间
//    double averageTime = totalElapsedTime / numIterations;
//
//    cout << "总时间为 " << totalElapsedTime << " 秒" << endl;
//    cout << "平均每次运行时间为 " << averageTime << " 秒" << endl;
    const int MAXN=268435456;
    int sum=0,sum1=0,sum2=0;
    int* a=new int [MAXN];
    for(int i=0;i<MAXN;i++)
    {
        a[i]=i%1000;
    }
   for (int i = 0;i < MAXN; i += 2)
    {
            sum1 += a[i];
            sum2 += a[i + 1];
    }
    sum = sum1 + sum2;
    return 0;
}
