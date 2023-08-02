class Singleton
{
public:
	static Singleton* GetInstance();
	static void DelInstance();
    void addCnt();
    void printSummary();

private:
	Singleton()
		:_cnt(0)
	{}
    Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;

	int _cnt;
	static Singleton* _inst;
};
 
