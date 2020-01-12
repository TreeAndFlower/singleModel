#include "signalmodel.h"
#include <unistd.h>

bool helloworld();
bool mathexec();
bool hehehe();
void *thread1(void*);
void *thread2(void*);
void *thread3(void*);


int main()
{

	// while(1)
	// {
 //    	pthread_t t_a;//two thread
 
 //    	pthread_create(&t_a,NULL,thread3,(void*)NULL);		
	// }

	helloworld();

	mathexec();

	hehehe();
	
  	// pthread_t t_a;
   //  pthread_t t_b;//two thread
 
   //  pthread_create(&t_a,NULL,thread2,(void*)NULL);
   //  pthread_create(&t_b,NULL,thread1,(void*)NULL);//Create thread
    
   //  printf("t_a:0x%x, t_b:0x%x: \n", t_a, t_b);
   //  pthread_join(t_b,NULL);//wait a_b thread end

   //  sleep(5);

	return 0;
}

void *thread1(void*)
{
	printf("============thread1==============\n");
	helloworld();
}

void *thread2(void*)
{
	printf("============thread2==============\n");
	
	helloworld();

	mathexec();

	hehehe();
}

void *thread3(void*)
{
	printf("============thread3==============\n");	
	SignalModel* sig = SignalModel::GetInstance();
}

bool helloworld()
{
	SignalModel* sig = SignalModel::GetInstance();
	//SignalModel* sig = new SignalModel;
	sig->SayHello();
	sig->SayWorld();
}

bool mathexec()
{
	SignalModel* sig = SignalModel::GetInstance();
	//SignalModel* sig = new SignalModel;
	sig->AddNums(1, 2);
	sig->SubNums(3, 1);

	//sig->DeleteInstance();
}

bool hehehe()
{
	SignalModel* sig = SignalModel::GetInstance();
	//SignalModel* sig = new SignalModel;
	sig->SayHello();
	sig->SayWorld();
	sig->AddNums(5, 2);
	sig->SubNums(6, 1);
}