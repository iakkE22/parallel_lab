#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
//    LARGE_INTEGER frequency;
//    LARGE_INTEGER start;
//    LARGE_INTEGER end;
//    double totalElapsedTime = 0.0;
//    int numIterations = 500; // ����Ҫִ�еĴ���
//
//    // ��ȡƵ��
//    QueryPerformanceFrequency(&frequency);
//
//    for (int k = 0; k < numIterations; k++)
//    {
//        QueryPerformanceCounter(&start);
//
//        const int n = 10000;
//        int *sum = new int[n];
//        int **b = new int*[n];
//        for(int i=0;i<n;i++)
//        {
//            b[i]=new int[n];
//        }
//        int *a = new int[n];
//
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                b[i][j] = i + j;
//            }
//            a[i] = i;
//        }
//
//        for(int i = 0; i < n; i++)
//        {
//            sum[i] = 0.0;
//        }
//        for(int j = 0; j < n; j++)
//        {
//            for(int i = 0; i < n; i++)
//            {
//                sum[i] += b[j][i] * a[j];
//            }
//        }
//     // ��ȡ����ʱ��
//        QueryPerformanceCounter(&end);
//
//        // ����ʱ���ۼ�
//        totalElapsedTime += static_cast<double>(end.QuadPart - start.QuadPart) / frequency.QuadPart;
//        delete[] sum;
//        delete[] a;
//        for(int l=0;l<n;l++)
//        {
//            delete[] b[l];
//        }
//        delete[] b;
//
//    }
//    // ����ƽ��ʱ��
//    double averageTime = totalElapsedTime / numIterations;
//
//    cout << "��ʱ��Ϊ " << totalElapsedTime << " ��" << endl;
//    cout << "ƽ��ÿ������ʱ��Ϊ " << averageTime << " ��" << endl;
    const int n = 10000;
        int *sum = new int[n];
        int **b = new int*[n];
        for(int i=0;i<n;i++)
        {
            b[i]=new int[n];
        }
        int *a = new int[n];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                b[i][j] = i + j;
            }
            a[i] = i;
        }

        for(int i = 0; i < n; i++)
        {
            sum[i] = 0.0;
        }
        for(int j = 0; j < n; j++)
        {
            for(int i = 0; i < n; i++)
            {
                sum[i] += b[j][i] * a[j];
            }
        }
    return 0;
}
