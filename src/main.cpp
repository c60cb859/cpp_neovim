#include <functional>
#include <iostream>
#include <optional>

#include <spdlog/spdlog.h>

// This file will be generated automatically when you run the CMake configuration step.
// It creates a namespace called `cpp_neovim`.
// You can modify the source template at `configured_files/config.hpp.in`.
#include <internal_use_only/config.hpp>


int main()
{
  std::optional<std::string> message;


  fmt::print( "{}\n", cpp_neovim::cmake::project_version );


  if ( message )
  {
    fmt::print( "Message: '{}'\n", *message );
  }
  else
  {
    fmt::print( "No Message Provided :(\n" );
  }
}
