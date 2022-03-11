#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Bloo{

	class BLOO_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

//Core log macros
#define BL_CORE_TRACE(...)     ::Bloo::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define BL_CORE_INFO(...)      ::Bloo::Log::GetCoreLogger()->info(__VA_ARGS__)
#define BL_CORE_WARN(...)      ::Bloo::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define BL_CORE_ERROR(...)     ::Bloo::Log::GetCoreLogger()->error(__VA_ARGS__)
#define BL_CORE_FATAL(...)     ::Bloo::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client log macros
#define BL_TRACE(...)	       ::Bloo::Log::GetClientLogger()->trace(__VA_ARGS__)
#define BL_INFO(...)           ::Bloo::Log::GetClientLogger()->info(__VA_ARGS__)
#define BL_WARN(...)           ::Bloo::Log::GetClientLogger()->warn(__VA_ARGS__)
#define BL_ERROR(...)          ::Bloo::Log::GetClientLogger()->error(__VA_ARGS__)
#define BL_FATAL(...)          ::Bloo::Log::GetClientLogger()->fatal(__VA_ARGS__)
