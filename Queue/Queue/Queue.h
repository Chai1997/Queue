#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<malloc.h>

#define LEN 6

typedef struct Queue
{
	int* pBase;
	int front;
	int rear;
}Queue, *pQueue;

void Init(pQueue Q);
void In_Queue(pQueue Q, int val);
bool is_empty(pQueue Q);
void Out_Queue(pQueue Q);
void Print(pQueue Q);
