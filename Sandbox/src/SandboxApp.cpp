#include <Bloo.h>

class Sandbox : public Bloo::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Bloo::Application* Bloo::CreateApplication() {

	return new Sandbox();

}
