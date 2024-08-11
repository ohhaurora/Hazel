#include "Hazel.h"
class SandBox : public Hazel::Application
{
public:
	SandBox() { }
	~SandBox(){ }
protected:
private:
};

Hazel::Application* Hazel::CreateApplication()
{
	return new SandBox();
}

