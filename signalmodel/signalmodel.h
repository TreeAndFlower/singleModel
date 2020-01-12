#ifndef SIGNALMODEL_H_
#define SIGNALMODEL_H_

#include <pthread.h>

#include <string>
#include <stdio.h>

using namespace std;

class SignalModel
{
public:
	static SignalModel* GetInstance();

	static void DeleteInstance();

	bool SayHello();

	bool SayWorld();

	bool AddNums(int a, int b);

	bool SubNums(int sum , int a);

private:
	SignalModel();

private:
	static SignalModel* sig;
	static pthread_mutex_t mutex;

};

#endif /* SIGNALMODEL_H_ */