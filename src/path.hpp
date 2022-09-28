#pragma once

#include <list>
#include <string>

namespace vfs {

enum PathType {
	File,
	Folder,
};

class Path {
	private:
	
	std::list<std::string> path;
	PathType type = Folder;
	
	public:
	Path() {}
	Path(std::string path); 
	~Path() {}
	
	void cd(std::string path); 
	std::string to_string();
};

}
