#include <iostream>
#include <memory>

template<typename T>
class ScopedPtr
{
public:
	ScopedPtr() = default;
	ScopedPtr(T* ptr) : m_Ptr(ptr){}
	~ScopedPtr() { delete m_Ptr; }

	bool IsValid() const { return m_Ptr != nullptr; }

	T* Get() { return m_Ptr; }
	const T* Get() const { return m_Ptr; }

	operator bool() const { return IsValid(); }

private:
	T* m_Ptr = nullptr;
};

struct Entity
{
	float X = 0.0f, Y = 0.0f;
};

void ProcessEntity(const std::unique_ptr<Entity>& e)
{
	if (e)
	{

	}
}

int main() 
{
	std::unique_ptr<Entity> e(new Entity());
	ProcessEntity(e);
}