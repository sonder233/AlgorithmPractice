typedef int Rank;
#define DEFAULT_CAPACITY 4


template <typename T> class Vector
{
	protected:
		Rank _size;//��ģ
		int _capacity;//����
		T* _elem;//��������Ҳ����ʵ�ʵ�����

	public:
		//���캯��
		Vector(int c = DEFAULT_CAPACITY,int s = 0,T v = 0) {//������c ��ģ��s ����Ԫ�س�ʼΪv
			_elem = new T[_capacity = c];
			for (_size = 0; _size < s; _elem[_size++] = v);
		}
		
		//ֻ�����ʽӿ�

};

