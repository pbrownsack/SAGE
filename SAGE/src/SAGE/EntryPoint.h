#pragma once

#ifdef SG_PLATFORM_WINDOWS

#include "Application.h"

extern SAGE::Application* SAGE::CreateApplication();

int main(int argc, char** argv) {
	auto app = SAGE::CreateApplication();
	app->Run();
	delete app;
}

#endif
