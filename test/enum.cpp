#include <doctest.h>
#include <process.h>
#include <process.hpp>

TEST_CASE("enum")
{
  REQUIRE(((int) PROCESS_LIB_SUCCESS == (int) Process::SUCCESS));
  REQUIRE(((int) PROCESS_LIB_UNKNOWN_ERROR == (int) Process::UNKNOWN_ERROR));
  REQUIRE(((int) PROCESS_LIB_WAIT_TIMEOUT == (int) Process::WAIT_TIMEOUT));
  REQUIRE(((int) PROCESS_LIB_STREAM_CLOSED == (int) Process::STREAM_CLOSED));
  REQUIRE(((int) PROCESS_LIB_STILL_RUNNING == (int) Process::STILL_RUNNING));
  REQUIRE(((int) PROCESS_LIB_MEMORY_ERROR == (int) Process::MEMORY_ERROR));
  REQUIRE(((int) PROCESS_LIB_PIPE_LIMIT_REACHED == (int) Process::PIPE_LIMIT_REACHED));
  REQUIRE(((int) PROCESS_LIB_INTERRUPTED == (int) Process::INTERRUPTED));
  REQUIRE(((int) PROCESS_LIB_IO_ERROR == (int) Process::IO_ERROR));
  REQUIRE(((int) PROCESS_LIB_PROCESS_LIMIT_REACHED == (int) Process::PROCESS_LIMIT_REACHED));
  REQUIRE(((int) PROCESS_LIB_INVALID_UNICODE == (int) Process::INVALID_UNICODE));
}
