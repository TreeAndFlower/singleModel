#include "signalmodel.h"

SignalModel* SignalModel::sig = NULL;
pthread_mutex_t SignalModel::mutex = PTHREAD_MUTEX_INITIALIZER;

SignalModel* SignalModel::GetInstance()
{
	printf("-------------GetInstance---------------\n");
	if(NULL == sig)
	{
		printf("~~~~~~~~~~~~~~~Init~~~~~~~~~~~~~~~~\n");
		pthread_mutex_lock(&mutex);
		if(NULL == sig)
			sig = new SignalModel();
		pthread_mutex_unlock(&mutex);
	}

	return sig;
}

void SignalModel::DeleteInstance()
{
	if(NULL != sig)
	{
		delete sig;
		sig = NULL;

		pthread_mutex_destroy(&mutex);
	}	
}

SignalModel::SignalModel()
{
	printf("*******init SignalModel*************\n");
}

bool SignalModel::SayHello()
{
	printf("hello hello hello\n");
}

bool SignalModel::SayWorld()
{
	printf("world world world\n");
}

bool SignalModel::AddNums(int a, int b)
{
	printf("%d\n", a + b);
}

bool SignalModel::SubNums(int sum , int a)
{
	printf("%d\n", sum - a);
}