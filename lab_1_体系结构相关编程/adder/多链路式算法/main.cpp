#include <iostream>
#include<windows.h>
using namespace std;

int main()
{
//    LARGE_INTEGER frequency;
//    LARGE_INTEGER start;
//    LARGE_INTEGER end;
//    double totalElapsedTime = 0.0;
//    int numIterations = 1000; // ����Ҫִ�еĴ���
//
//    // ��ȡƵ��
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
//     // ��ȡ����ʱ��
//        QueryPerformanceCounter(&end);
//        // ����ʱ���ۼ�
//        totalElapsedTime += static_cast<double>(end.QuadPart - start.QuadPart) / frequency.QuadPart;
//        delete[] a;
//    }
//    // ����ƽ��ʱ��
//    double averageTime = totalElapsedTime / numIterations;
//
//    cout << "��ʱ��Ϊ " << totalElapsedTime << " ��" << endl;
//    cout << "ƽ��ÿ������ʱ��Ϊ " << averageTime << " ��" << endl;
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
