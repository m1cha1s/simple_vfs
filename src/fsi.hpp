#pragma once

#include "path.hpp"

namespace vfs {
	// TODO: Finish defining all access functions
	class VFI {
	public:
		virtual int open(Path);
	};
}
