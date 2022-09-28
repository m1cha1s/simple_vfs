#pragma once

#include <vector>
#include <tuple>

#include "path.hpp"

namespace vfs {

class VFS {
	private:
	// TODO: Expand args with a file system descriptor
	std::vector<std::tuple<Path>> fs;
	
	public:

};
}
