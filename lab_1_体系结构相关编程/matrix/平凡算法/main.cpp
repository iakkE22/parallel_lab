#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
//    LARGE_INTEGER frequency;
//    LARGE_INTEGER start;
//    LARGE_INTEGER end;
//    double totalElapsedTime = 0.0;
//    int numIterations = 500; // 你想要执行的次数
//
//     获取频率
//    QueryPerformanceFrequency(&frequency);
//
//    for (int k = 0; k < numIterations; k++)
//    {
//         获取起始时间
//        QueryPerformanceCounter(&start);
//
//         在这里执行你的程序
//         ...
//    const int n = 10000;
//    int *sum = new int[n];
//    int **b = new int*[n];
//    for(int i=0;i<n;i++)
//    {
//        b[i]=new int[n];
//    }
//    int *a = new int[n];
//
//     Initialize arrays
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            b[i][j] = i + j;
//        }
//        a[i] = i;
//    }
//
//     Perform matrix-vector multiplication
//    for (int i = 0; i < n; i++)
//    {
//        sum[i] = 0.0;
//        for (int j = 0; j < n; j++)
//        {
//            sum[i] += b[j][i] * a[j];
//        }
//    }
//
//         获取结束时间
//        QueryPerformanceCounter(&end);
//
//         计算时间差并累加
//        totalElapsedTime += static_cast<double>(end.QuadPart - start.QuadPart) / frequency.QuadPart;
//        delete[] sum;
//        delete[] a;
//        for(int l=0;l<n;l++)
//        {
//            delete[] b[l];
//        }
//        delete[] b;
//    }
//
//     计算平均时间
//    double averageTime = totalElapsedTime / numIterations;
//
//    cout << "总时间为 " << totalElapsedTime << " 秒" << endl;
//    cout << "平均每次运行时间为 " << averageTime << " 秒" << endl;
    const int n = 10000;
    int *sum = new int[n];
    int **b = new int*[n];
    for(int i=0;i<n;i++)
    {
        b[i]=new int[n];
    }
    int *a = new int[n];

    // Initialize arrays
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[i][j] = i + j;
        }
        a[i] = i;
    }

    // Perform matrix-vector multiplication
    for (int i = 0; i < n; i++)
    {
        sum[i] = 0.0;
        for (int j = 0; j < n; j++)
        {
            sum[i] += b[j][i] * a[j];
        }
    }
    return 0;
}
