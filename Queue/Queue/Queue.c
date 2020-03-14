#include"Queue.h"

void Init(pQueue Q)
{
	Q->pBase = (int*)malloc(sizeof(int)*LEN);
	Q->front = 0;
	Q->rear = 0;
}
bool is_full(pQueue Q)
{
	if ((Q->rear + 1) % LEN == Q->front)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool is_empty(pQueue Q)
{
	if (Q->rear == Q->front)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void In_Queue(pQueue Q, int val)
{
	if (is_full(Q))
	{
		printf("该队列已满\n");
		return -1;
	}
	else
	{
		Q->pBase[Q->rear] = val;
		Q->rear = (Q->rear + 1) % LEN;
	}
}

void Out_Queue(pQueue Q)
{
	if (is_empty(Q))
	{
		printf("该队列为空\n");
		return -1;
	}
	else
	{
		Q->front = (Q->front + 1) % LEN;
	}
}

void Print(pQueue Q)
{
	if (is_empty(Q))
	{
		printf("该队列为空\n");
		return -1;
	}
	else
	{
		int i = Q->front;
		while (i != Q->rear)
		{
			printf("%d ",Q->pBase[i]);
			i++;
		}
		printf("\n");
	}
}