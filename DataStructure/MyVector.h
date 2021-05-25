typedef int Rank;
#define DEFAULT_CAPACITY 4


template <typename T> class Vector
{
	protected:
		Rank _size;//规模
		int _capacity;//容量
		T* _elem;//数据区，也就是实际的数组

	public:
		//构造函数
		Vector(int c = DEFAULT_CAPACITY,int s = 0,T v = 0) {//容量是c 规模是s 所有元素初始为v
			_elem = new T[_capacity = c];
			for (_size = 0; _size < s; _elem[_size++] = v);
		}
		
		//只读访问接口

};

