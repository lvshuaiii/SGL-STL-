// test1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;

int main()
{
	int testArry[] = {12,11,10,9,8,7,6,5,4,3,2,1};
	ShellSort(testArry,12);
	for (int i=0;i<12;i++)
	{
		cout << testArry[i] << endl;
	}
    return 0;
}
//希尔排序
void ShellSort(int valuearray[],int n)
{
	int gapIncrease = 3;
	int valueNum = 2;
	int gapNum = n/valueNum;
	while (gapNum==0)
	{
		for (int i = 0; i<gapNum; i++)
		{
			for (int j = 1; j<valueNum; j++)
			{
				int a = 0;
				for (int z = j; z>0; z--)
				{
					a = i + gapNum*(z - 1);
					if (valuearray[i + gapNum*z]<valuearray[a])
					{
						Swap(valuearray, i + gapNum*z, a);
					}
					else
					{
						break;
					}
				}
			}
		}
		valueNum = valueNum + gapIncrease;
		gapNum = n / valueNum;
		if (gapNum == 1)
		{
			valueNum = n;
		}
	}
	
}
void Swap(int swaparry[],int i,int j)
{
	int a = swaparry[i];
	swaparry[i] = swaparry[j];
	swaparry[j] = a;
}
