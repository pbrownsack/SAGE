#include <SAGE.h>

class Sandbox : public SAGE::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

SAGE::Application* SAGE::CreateApplication() {
	return new Sandbox();
}